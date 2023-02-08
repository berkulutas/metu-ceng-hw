#include "BinaryHeap.h"

BinaryHeap::BinaryHeap()
{
    // TODO: or not
    elements.clear();
}

void BinaryHeap::swap(HeapElement &a, HeapElement &b)
{
    HeapElement tmp = a; 
    a = b; 
    b = tmp;
}

void BinaryHeap::percolateUp(int currentIndex)
{
    while (currentIndex > 0)
    {
        int parentIndex = (currentIndex-1) / 2;
        if (elements[currentIndex].weight < elements[parentIndex].weight)
        {
            // swap the element with parent
            swap(elements[currentIndex], elements[parentIndex]);
            currentIndex = parentIndex;
        }
        else
        {
            // element in correct position stop 
            break;
        }
    }
}

void BinaryHeap::bubbleDown(int currentIndex)
{
    while (true)
    {
        int leftChildIndex = 2 * currentIndex + 1;
        int rightChildIndex = 2 * currentIndex + 2;
        if (leftChildIndex >= HeapSize())
        {
            // no more children, element is in correct position
            break;
        }
        else if (rightChildIndex >= HeapSize())
        {
            // only left child
            if (elements[currentIndex].weight > elements[leftChildIndex].weight)
            {
                // swap with left child
                swap(elements[currentIndex], elements[leftChildIndex]);
                currentIndex = leftChildIndex;
            }
            else
            {
                // element is in correct position
                break;
            }
        }
        else
        {
            // both children present
            if (elements[leftChildIndex].weight < elements[rightChildIndex].weight)
            {
                // left child has lower weight
                if (elements[currentIndex].weight > elements[leftChildIndex].weight)
                {
                    // swap with left child
                    swap(elements[currentIndex], elements[leftChildIndex]);
                    currentIndex = leftChildIndex;
                }
                else
                {
                    // element is in correct position
                    break;
                }
            }
            else
            {
                // right child has lower weight
                if (elements[currentIndex].weight > elements[rightChildIndex].weight)
                {
                    // swap with right child
                    swap(elements[currentIndex], elements[rightChildIndex]);
                    currentIndex = rightChildIndex;
                }
                else
                {
                    // element is in correct position
                    break;
                }
            }
        }
    }
}


bool BinaryHeap::Add(int uniqueId, double weight)
{
    // TODO:

    // return false if there is another item with given uniqueId
    for (int i = 0; i < HeapSize(); i++)
    {
        if (elements[i].uniqueId == uniqueId)
        {
            return false;
        }
    }

    // add element return true
    elements.push_back(HeapElement());
    int currentIndex = HeapSize()-1;
    elements[currentIndex].uniqueId = uniqueId; 
    elements[currentIndex].weight = weight;
    
    percolateUp(currentIndex); 

    // element added return true
    return true;
}

bool BinaryHeap::PopHeap(int& outUniqueId, double& outWeight)
{
    // TODO:
    // heap empty return false
    if (HeapSize() == 0)
        return false;

    // heap not empty return popped elements properties and pop element
    outUniqueId = elements[0].uniqueId;
    outWeight = elements[0].weight;

    // remove element by replacing root with last element and popping last element
    elements[0] = elements.back();
    elements.pop_back();
    
    bubbleDown(0);

    // element popped return true
    return true;
}

bool BinaryHeap::ChangePriority(int uniqueId, double newWeight)
{
    // TODO:
    // search for element with uniqueId
    int elementIndex = -1;
    for (int i = 0; i < HeapSize(); i++)
    {
        if (elements[i].uniqueId == uniqueId)
        {
            elementIndex = i;
            break;
        }
    }

    // element not found, return false
    if (elementIndex == -1)
        return false;

    // element found
    // moveUp or down 
    int moveUp = newWeight < elements[elementIndex].weight;
    //update weight 
    elements[elementIndex].weight = newWeight;

    if (moveUp)
    {
        percolateUp(elementIndex);
    }
    else
    {
        bubbleDown(elementIndex);
    }

    // element updated, return true
    return true;
}

int BinaryHeap::HeapSize() const
{
    // TODO:
    return elements.size(); 
}