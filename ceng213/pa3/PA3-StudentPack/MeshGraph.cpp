#include "MeshGraph.h"
#include "BinaryHeap.h"

// For printing
#include <fstream>
#include <iostream>
#include <sstream>

bool compareVertexIds(const Vertex* v1, const Vertex* v2)
{
    return v1->id < v2->id;
}

MeshGraph::MeshGraph(const std::vector<Double3>& vertexPositions,
                     const std::vector<IdPair>& edges)
{
    // TODO:

    // initalize vertices vector 
    vertices.resize(vertexPositions.size());

    // add all vertices with unique ids
    for (int i = 0; i < vertexPositions.size(); i++)
    {
        Vertex v;
        v.id = i; 
        v.position3D = vertexPositions[i];
        vertices[i] = v;
    }

    // initalize adjList 
    adjList.resize(vertices.size());

    for (int i = 0; i<edges.size(); i++)
    {
        int v1 = edges[i].vertexId0;
        int v2 = edges[i].vertexId1;

        adjList[v1].push_back(&vertices[v2]);
        adjList[v2].push_back(&vertices[v1]);
    }

    for (std::vector<std::list<Vertex*> >::iterator it = adjList.begin(); it != adjList.end(); ++it)
    {
        std::list<Vertex*>& listToSort = *it;
        listToSort.sort(compareVertexIds);
    }
}

double MeshGraph::AverageDistanceBetweenVertices() const
{
    // TODO:
    
    double totalDistance = 0; 
    for (int i = 0; i<vertices.size(); i++)
    {
        Vertex v = vertices[i];
        for (std::list<Vertex*>::const_iterator it = adjList[i].begin(); it != adjList[i].end(); it++)
        {
            //std::cout << "v.position3D = " << v.position3D.x << "(*it)->position3D.x = " << (*it)->position3D.x << "\n";
            double distance  = Double3::Distance(v.position3D, (*it)->position3D );
            // std::cout << "distance = " << distance << "\n";
            totalDistance += distance; 
        }
    }
    
    // divide by 2 since counted twice
    totalDistance = totalDistance / 2;

    double edgeCount = TotalEdgeCount();
    // std::cout << "total distance after for loop = " << totalDistance << "\n";
    // std::cout << "edgeCount = " << edgeCount << "\n";
    if (edgeCount == 0)
    {
        return 0;
    }
    else
    {
        return totalDistance/ edgeCount ; 
    }

}

double MeshGraph::AverageEdgePerVertex() const
{
    // TODO:
    // int totalEdges = 0; 
    // for (int i=0; i<vertices.size(); i++)
    // {
    //     totalEdges += VertexEdgeCount(vertices[i].id);
    // }
    
    return (double)TotalEdgeCount()/TotalVertexCount();
    
}

int MeshGraph::TotalVertexCount() const
{
    // TODO:
    return vertices.size();
}

int MeshGraph::TotalEdgeCount() const
{
    // TODO:
    int edgeCount = 0; 
    for (int i = 0; i<vertices.size(); i++)
    {
        edgeCount += adjList[i].size();
    }

    //divide by 2 since each edge counted twice
    return edgeCount/2 ; 
}

int MeshGraph::VertexEdgeCount(int vertexId) const
{
    // TODO:
    // vertexId does not exits
    if (vertexId < 0 || vertexId >= vertices.size())
    {
        return -1; 
    }
    
    return adjList[vertexId].size();
}

void MeshGraph::ImmediateNeighbours(std::vector<int>& outVertexIds,
                                    int vertexId) const
{
    // TODO:
    // empty outVertexIds
    outVertexIds.clear();
    // check vertexId exists
    if (vertexId < 0 || vertexId >= vertices.size())
    {
        return;
    }

    for (std::list<Vertex*>::const_iterator it = adjList[vertexId].begin(); it !=adjList[vertexId].end(); it++)
    {
         outVertexIds.push_back((*it)->id);
    }
}

void MeshGraph::PaintInBetweenVertex(std::vector<Color>& outputColorAllVertex,
                                     int vertexIdFrom, int vertexIdTo,
                                     const Color& color) const
{
    // TODO:
    // clear output vector
    outputColorAllVertex.clear();
    // check vertexIdFrom and vertexIdTo valid
    if (vertexIdFrom < 0 || vertexIdFrom >= vertices.size() || vertexIdTo < 0 || vertexIdTo >= vertices.size())
    {
        return;
    }
    // resize output vector
    outputColorAllVertex.resize(vertices.size());
    // set all colors to black
    for (int i = 0; i < outputColorAllVertex.size(); i++)
    {
        outputColorAllVertex[i].r = 0; 
        outputColorAllVertex[i].g = 0; 
        outputColorAllVertex[i].b = 0; 
    }

    // dijkstra
    BinaryHeap heap;
    std::vector<double> distances(vertices.size(), INFINITY);
    std::vector<bool> visited(vertices.size(), false);
    std::vector<int> prevs(vertices.size(), -1);
    distances[vertexIdFrom] = 0;

    for (int i=0; i<TotalVertexCount(); i++)
    {
        heap.Add(i, INFINITY);
    }
    heap.ChangePriority(vertexIdFrom, 0);

    while(heap.HeapSize() != 0)
    {
        int topUniqueId;
        double topWeight;
        Double3 topPosition; 


        // select min weight form heap
        if (heap.PopHeap(topUniqueId, topWeight))
        {
            topPosition = vertices[topUniqueId].position3D; 
            visited[topUniqueId] == true; // mark visited

            // relaxing
            for (std::list<Vertex*>::const_iterator it = adjList[topUniqueId].begin(); it !=adjList[topUniqueId].end(); it++) // iterate over adjlist of top
            {
                int toVertexUniqueId = (*it)->id;
                Double3 toVertexPosition = (*it)->position3D;
                double edgeWeight = Double3::Distance(topPosition, toVertexPosition) + topWeight;

                // if new distance shorter than distances[] then update
                if (edgeWeight < distances[toVertexUniqueId])
                {
                    //update distance
                    distances[toVertexUniqueId] = edgeWeight;
                    //update prev vertex
                    prevs[toVertexUniqueId] = topUniqueId; 
                    // change priority
                    heap.ChangePriority(toVertexUniqueId, edgeWeight);
                }
            }
        }
    }

    // paint between vertices
    int nextPainted = vertexIdTo;
    while (nextPainted != -1)
    {
        outputColorAllVertex[nextPainted] = color; 
        nextPainted = prevs[nextPainted];
    }

}

void MeshGraph::PaintInRangeGeodesic(std::vector<Color>& outputColorAllVertex,
                                    int vertexId, const Color& color,
                                    int maxDepth, FilterType type,
                                    double alpha) const
{
    // TODO:
    // clear output vector
    outputColorAllVertex.clear();
    // check vertexIdFrom and vertexIdTo valid
    if (vertexId < 0 || vertexId >= vertices.size())
    {
        return;
    }
    // resize output vector
    outputColorAllVertex.resize(vertices.size());
    // set all colors to black
    for (int i = 0; i < outputColorAllVertex.size(); i++)
    {
        outputColorAllVertex[i].r = 0; 
        outputColorAllVertex[i].g = 0; 
        outputColorAllVertex[i].b = 0; 
    }

    // vertex in graph(valid) 
    BinaryHeap heap; // used as a queue
    int depth = 0; // track for depth
    double dummyWeight = 0; // used for heap queue
    std::vector<double> distances(vertices.size(), INFINITY);
    std::vector<bool> visited(vertices.size(), false);

    // add vertex to heap (queue)
    heap.Add(vertexId, dummyWeight++);
    visited[vertexId] = true; 
    distances[vertexId] = 0; 


    while (depth <= maxDepth) // what if maxDepth >> possible depth
    {
        int heapSize = heap.HeapSize();
        for (int i = 0; i < heapSize; i++)
        {
            int poppedId;
            double poppedWeight; // garbage value
            double poppedDistance = distances[poppedId];
            Double3 poppedPosition = vertices[poppedId].position3D; 
            heap.PopHeap(poppedId, poppedWeight);
            outputColorAllVertex[poppedId] = color; // filter implementation will be later todox

            // sort adjList of vertex from queue to maintain add minimum id first
            // std::sort(adjList[poppedId].begin(), adjList[poppedId].end(), compareVertexIds);
            // add elements to heap(queue)
            for (std::list<Vertex*>::const_iterator it = adjList[poppedId].begin(); it != adjList[poppedId].end(); it++)
            {
                int neighborId = (*it)->id;
                Double3 neighborPosition = (*it)->position3D;
                if (!visited[neighborId]) // if vertex not visited add heap
                {
                    heap.Add(neighborId, dummyWeight++);
                    visited[neighborId] = true; 
                }
                distances[neighborId] = poppedDistance + Double3::Distance(poppedPosition, neighborPosition);
            }
        }
        depth++;
    }

    if (type == FILTER_GAUSSIAN)
    {
        for (int i = 0; i<distances.size(); i++)
        {
            if (distances[i] != INFINITY)
            {
                double dist = distances[i];
                double distsq = (-1)*dist*dist;
                double alphasq = alpha*alpha;
                double multip =  std::exp(distsq/alphasq);
                outputColorAllVertex[i].r *= multip;
                outputColorAllVertex[i].g *= multip;
                outputColorAllVertex[i].b *= multip;
            }
        }
    }
    else if (type == FILTER_BOX)
    {
        for (int i = 0; i<distances.size(); i++)
        {
            if (distances[i] != INFINITY)
            {
                double dist = distances[i];
                double multip;
                if (((-1)*alpha <= dist) && (dist <= alpha))
                {
                    multip = 1;
                }
                else multip = 0;
                outputColorAllVertex[i].r *= multip;
                outputColorAllVertex[i].g *= multip;
                outputColorAllVertex[i].b *= multip;
            }
        }
    }

}

void MeshGraph::PaintInRangeEuclidian(std::vector<Color>& outputColorAllVertex,
                                      int vertexId, const Color& color,
                                      int maxDepth, FilterType type,
                                      double alpha) const
{
    // TODO:
    

}

void MeshGraph::WriteColorToFile(const std::vector<Color>& colors,
                                 const std::string& fileName)
{
    // IMPLEMENTED
    std::stringstream s;
    for(int i = 0; i < static_cast<int>(colors.size()); i++)
    {
        int r = static_cast<int>(colors[i].r);
        int g = static_cast<int>(colors[i].g);
        int b = static_cast<int>(colors[i].b);

        s << r << ", " << g << ", " << b << "\n";
    }
    std::ofstream f(fileName.c_str());
    f << s.str();
}

void MeshGraph::PrintColorToStdOut(const std::vector<Color>& colors)
{
    // IMPLEMENTED
    for(int i = 0; i < static_cast<int>(colors.size()); i++)
    {
        std::cout << static_cast<int>(colors[i].r) << ", "
                  << static_cast<int>(colors[i].g) << ", "
                  << static_cast<int>(colors[i].b) << "\n";
    }
}