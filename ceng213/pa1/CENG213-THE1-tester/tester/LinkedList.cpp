#include "LinkedList.h"

/* your linked list implementation here */
template<class T>
LinkedList<T>::LinkedList()
{
    /* TODO */
    head = NULL; 
    size = 0;
}

template<class T>
LinkedList<T>::LinkedList(const LinkedList<T> &obj)
{
    /* TODO */
    head = NULL;
    size = 0; 
    *this = obj; 
}

template<class T>
LinkedList<T>::~LinkedList()
{
    /* TODO */
    removeAllNodes();
    head = NULL;

}

template<class T>
LinkedList<T> &LinkedList<T>::operator=(const LinkedList<T> &rhs)
{
    /* TODO */
    if (this != &rhs)
    {
        removeAllNodes();
        Node<T> *r = rhs.head;

        while(r)
        {
            append(r->data);
            r = r->next; 
            if (r == rhs.head) break; 
        }
    }
    
    return *this;    
}

template<class T>
int LinkedList<T>::getSize() const
{
    /* TODO */
    return size;
}

template<class T>
bool LinkedList<T>::isEmpty() const
{
    /* TODO */
    return !size; 
}

template<class T>
bool LinkedList<T>::containsNode(Node<T> *node) const
{
    /* TODO */
    if(isEmpty()) return false; // if list is empty 

    Node<T> *tmp = head; 
    do
    {
        if (tmp == node) return true; 
        tmp = tmp->next; 
    } while (tmp != head);

    return false;
}

template<class T>
Node<T> *LinkedList<T>::getFirstNode() const
{
    /* TODO */
    if (isEmpty()) return NULL; 
    return head;
}

template<class T>
Node<T> *LinkedList<T>::getLastNode() const
{
    /* TODO */
    if (isEmpty()) return NULL; 
    return head->prev;
}

template<class T>
Node<T> *LinkedList<T>::getNode(const T &data) const
{
    /* TODO */
    if (isEmpty()) return NULL; 

    Node<T> *tmp = head; 

    do
    {
        if (tmp->data == data) return tmp; // if find
        tmp = tmp->next; 
    } while (tmp != head);

    return NULL; // if not find 
    
}

template<class T>
Node<T> *LinkedList<T>::getNodeAtIndex(int index) const
{
    /* TODO */
    if ((index<0) || (index > size-1)) return NULL;

    Node<T> *tmp = head;

    for(int i = 0; i<index; i++)
    {
        tmp = tmp->next; 
    }

    return tmp; 
    
}

template<class T>
void LinkedList<T>::append(const T &data)
{
    /* TODO */
    if(isEmpty()) // head = NULL 
    {
        head = new Node<T>(data);
        head->prev = head; 
        head->next = head; 
    }
    else
    {
        Node<T> *prevNode = getLastNode(); 
        Node<T> *nextNode = getFirstNode();

        prevNode->next = new Node<T>(data, prevNode, nextNode);
        nextNode->prev = prevNode->next;
    }

    size++; //increment size
}

template<class T>
void LinkedList<T>::prepend(const T &data)
{
    /* TODO */
    append(data); // append handles size increment
    head = head->prev;
}

template<class T>
void LinkedList<T>::insertAfterNode(const T &data, Node<T> *node)
{
    /* TODO */
    //size++
    if (!(containsNode(node))) return; // if node not in list

    Node<T> *prevNode = node;
    Node<T> *nextNode = node->next;

    prevNode->next = new Node<T>(data, prevNode, nextNode);
    nextNode->prev = prevNode->next;
    size++; 

}

template<class T>
void LinkedList<T>::insertAtIndex(const T &data, int index)
{
    /* TODO */
    //size arrange
    if (index == 0) //always insert if index 0 no need to check size check head
    {
        prepend(data); //prepend arranges size and modifies head
        return;
    }
    else if ((index<0) || (index>size)) return;//check index bounds
    else 
    {
        insertAfterNode(data, getNodeAtIndex(index-1)); //insertAfterNoe arranges size
    }
    
}

template<class T>
int LinkedList<T>::getIndex(Node<T> *node) const
{
    /* TODO */
    if (isEmpty()) return -1; // if empty then head = NULL 
    
    Node<T> *tmp = head;
    int index = 0;

    do
    {
        if (tmp == node) return index;
        tmp = tmp->next; 
        index++;
    } while (tmp != head);

    return -1; 
}

template<class T>
void LinkedList<T>::moveToIndex(int currentIndex, int newIndex)
{
    //maybe arrange old nodes part for all sections //todo
    /* TODO */
    if (isEmpty()) return;
    if (size == 1) return;
    if (currentIndex == newIndex) return;

    int maxIndex = size-1; 

    if((0 <= currentIndex) && (currentIndex <= maxIndex) && (0 <= newIndex)) //valid indexes
    {
        Node<T> *currNode;
        Node<T> *oldPrevNode;
        Node<T> *oldNextNode;
        Node<T> *prevNode;
        Node<T> *nextNode;

        if (currentIndex == 0 ) // head arrange no need to check currIndex = 0 and newIndex = 0 already checked on function start
        {
            
            currNode = getNodeAtIndex(currentIndex);
            head = head->next; 
            if (newIndex >= maxIndex) return; //currNode will be last node
            else 
            {
                oldPrevNode = currNode->prev;
                oldNextNode = currNode->next;
                oldPrevNode->next = oldNextNode;
                oldNextNode->prev = oldPrevNode;
                //connected old nodes and cutted the currNode
                prevNode = getNodeAtIndex(newIndex-1);
                nextNode = prevNode->next;

                prevNode->next = currNode;
                nextNode->prev = currNode;
                currNode->prev = prevNode;
                currNode->next = nextNode; 
            }

        }
        else if(newIndex == 0) // head arrange.. cut node connect before head node head=head->prev 
        {
            currNode = getNodeAtIndex(currentIndex);
            if (currentIndex == maxIndex) head=head->prev; // make last node head
            else 
            {
                oldPrevNode = currNode->prev;
                oldNextNode = currNode->next;
                oldPrevNode->next = oldNextNode;
                oldNextNode->prev = oldPrevNode;
                //connected old nodes and cutted the currNode
                prevNode = getLastNode();
                nextNode = getFirstNode();

                prevNode->next = currNode;
                nextNode->prev = currNode;
                currNode->prev = prevNode;
                currNode->next = nextNode; // move last node change head to prev

                head = head->prev; 
            }

            
        }
        else if(newIndex <= maxIndex) // newIndex == maxIndex move node to end of the list
        {
                currNode = getNodeAtIndex(currentIndex); 
                oldPrevNode = currNode->prev;
                oldNextNode = currNode->next;
                oldPrevNode->next = oldNextNode;
                oldNextNode->prev = oldPrevNode;
                //connected old nodes and cutted the currNode
                prevNode = getNodeAtIndex(newIndex)->prev;
                nextNode = getNodeAtIndex(newIndex);

                prevNode->next = currNode;
                nextNode->prev = currNode;
                currNode->prev = prevNode;
                currNode->next = nextNode; // move last node change head to prev

        }
        else // move node to end of the list
        {
                currNode = getNodeAtIndex(currentIndex); 
                oldPrevNode = currNode->prev;
                oldNextNode = currNode->next;
                oldPrevNode->next = oldNextNode;
                oldNextNode->prev = oldPrevNode;
                //connected old nodes and cutted the currNode
                prevNode = getLastNode();
                nextNode = getFirstNode();

                prevNode->next = currNode;
                nextNode->prev = currNode;
                currNode->prev = prevNode;
                currNode->next = nextNode; // move last node change head to prev
        }
    }

}

template<class T>
void LinkedList<T>::removeNode(Node<T> *node)
{
    /* TODO */
    if (isEmpty()) return;

    if (containsNode(node))
    {
        if (size == 1)
        { 
            head = NULL;
        }
        
        Node<T> *prevNode = node->prev; 
        Node<T> *nextNode = node->next;

        if (node == head)
        {
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
            head = nextNode;
        }
        else
        {
            prevNode->next = nextNode;
            nextNode->prev = prevNode;
        }
        delete node;
        size--; 
    }

}

template<class T>
void LinkedList<T>::removeNode(const T &data)
{
    /* TODO */
    Node<T> *removed;

    while((removed = getNode(data)))
    {
        removeNode(removed); // size handled by removeNode function no need to handle here
    }
}

template<class T>
void LinkedList<T>::removeNodeAtIndex(int index)
{
    /* TODO */
    Node<T> *removed = getNodeAtIndex(index); 
    if (removed) removeNode(removed); // size handled by removeNode()

}

template<class T>
void LinkedList<T>::removeAllNodes()
{
    /* TODO */
    while(head)
    {
        removeNode(head); // size and head handled by removeNode() 
    }
}

template<class T>
void LinkedList<T>::print() const
{
    if (this->isEmpty()) {
        std::cout << "The list is empty." << std::endl;
        return;
    }

    Node<T> *node = this->getFirstNode();

    do {
        std::cout << *node << std::endl;
        node = node->next;
    }
    while (node != this->getFirstNode());
}
