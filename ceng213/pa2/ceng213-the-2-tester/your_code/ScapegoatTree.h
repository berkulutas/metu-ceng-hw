#ifndef TREE_H
#define TREE_H

#include <iostream>
#include <cmath>

#include "Node.h"
#include "NoSuchItemException.h"

enum TraversalMethod {preorder, inorder, postorder};

template<class T>
class ScapegoatTree {
public: // DO NOT CHANGE THIS PART.
    ScapegoatTree();

    ScapegoatTree(const ScapegoatTree<T> &obj);

    ~ScapegoatTree();

    bool isEmpty() const;

    int getHeight() const;

    int getSize() const;

    bool insert(const T &element);

    bool remove(const T &element);

    void removeAllNodes();

    const T &get(const T &element) const;

    void print(TraversalMethod tp=inorder) const;

    void printPretty() const;

    ScapegoatTree<T> &operator=(const ScapegoatTree<T> &rhs);

    void balance();

    const T &getCeiling(const T &element) const;

    const T &getFloor(const T &element) const;

    const T &getMin() const;

    const T &getMax() const;

    const T &getNext(const T &element) const;

private: // YOU MAY ADD YOUR OWN UTILITY MEMBER FUNCTIONS HERE.
    void print(Node<T> *node, TraversalMethod tp) const;

    void printPretty(Node<T> *node, int indentLevel, bool isLeftChild) const;

    int getHeight(Node<T> *root) const;

    int getSize(Node<T> *root) const;

    const T &getMin(Node<T> *root) const;
    const T &getMax(Node<T> *root) const;

    bool isInside(const T &element);
    bool isInside(Node<T> *root, const T &element);

    void insert(Node<T> *&root, const T &element);

    void remove(Node<T> *&root, const T &element);
    void removeAllNodes(Node<T> *&root);

    void make_copy(Node<T> *&r1, Node<T> *r2);

    void putInArray(Node<T> *&root, T *arr, int &index);
    void makeItBalanced(Node<T> *&root, T *arr, int size, int &i);

    const T &get(Node<T> *root, const T &element) const;

    Node<T> *getNode(Node<T> *root, const T &element) const;
    Node<T> *getParentNode(Node<T> *root, const T &element) const;

    void rebuild(Node<T> *node);

    static float const log32(int n) // buna bak
    {
        return log(n)/log(1.5);
    }

    const T &getCeiling(Node<T> *root, const T &element) const;

    const T &getFloor(Node<T> *root, const T &element) const;
    // const T &getNext(Node<T> *root, const T &element);
    void getNextPutInArray(Node<T> *root, T *arr, int &index) const;

private: // DO NOT CHANGE THIS PART.
    Node<T> *root;

    int upperBound;
};

#endif //TREE_H

template<class T>
ScapegoatTree<T>::ScapegoatTree() {
    /* TODO */
    root = NULL;
    upperBound = 0;
}

template<class T>
ScapegoatTree<T>::ScapegoatTree(const ScapegoatTree<T> &obj) {
    /* TODO */
    if (obj.root == NULL) root = NULL;
    else //*this = obj;
    {
        make_copy(root, obj.root);
        this->upperBound = obj.upperBound;
    }
}

template<class T>
void ScapegoatTree<T>::make_copy(Node<T> *&r1, Node<T> *r2)
{
    if(r2 != NULL)
    {
        r1 = new Node<T>(r2->element, NULL, NULL);
        make_copy(r1->left, r2->left);
        make_copy(r1->right, r2->right);
    }
    else r1 = NULL;
}

template<class T>
ScapegoatTree<T>::~ScapegoatTree() {
    /* TODO */
    removeAllNodes(root);
    upperBound = 0; 
}

template<class T>
bool ScapegoatTree<T>::isEmpty() const {
    /* TODO */
    if (root == NULL) return true;
    else return false; 
}

template<class T>
int ScapegoatTree<T>::getHeight() const {
    /* TODO */
    return getHeight(root);
}

template<class T>
int ScapegoatTree<T>::getHeight(Node<T> *root) const {
    /* TODO */
    if (root == NULL) return -1; // empty tree 
    
    else return (fmax(getHeight(root->left), getHeight(root->right)) + 1);
}

template<class T>
int ScapegoatTree<T>::getSize() const {
    /* TODO */
    return getSize(root);
}

template<class T>
int ScapegoatTree<T>::getSize(Node<T> *root) const {
    /* TODO */
    if (root == NULL) return 0; // empty tree

    return getSize(root->left) + getSize(root->right) + 1;

}

template<class T>
bool ScapegoatTree<T>::isInside(const T &element)
{
    return isInside(root, element);

}

template<class T>
bool ScapegoatTree<T>::isInside(Node<T> *root, const T &element)
{
    if (root == NULL) return false;

    if (root->element == element) return true;

    return (isInside(root->left, element) || isInside(root->right, element)); 
}

template<class T>
bool ScapegoatTree<T>::insert(const T &element) {
    /* TODO */
    if(isInside(element)) return false;
    else
    {
        insert(root, element);
        upperBound++;

        // check tree unbalanced ?
        // std::cout << "height = " << getHeight() << std::endl;
        // std::cout << "log32(upperBound)" << log32(upperBound) <<std::endl;
        if (getHeight() > log32(upperBound))
        {
            Node<T> *node = getNode(root, element);
            Node<T> *parentNode = getParentNode(root,element);
            // std::cout << "finded node = " << node->element << std::endl;
            // std::cout << "finded parent = "  << parentNode->element << std::endl;

            // find scapegoat
            while (3*getSize(node) <= 2*getSize(parentNode))
            {
                node = parentNode;
                parentNode = getParentNode(root, node->element);
            
            } 

            // std::cout << "unbalanced node = " << node->element << std::endl;
            // std::cout << "scapegoat = "  << parentNode->element << std::endl;

            rebuild(parentNode);
        }
        return true;
    }
}

template<class T>
void ScapegoatTree<T>::rebuild(Node<T> *node)
{
    int size = getSize(node);
    Node<T> *parent = getParentNode(root, node->element);
    T *arr;
    arr = new T [size];
    int index = 0; 
    putInArray(node, arr, index);
    

    int i = 0;
    if (parent == NULL)
    {
        makeItBalanced(root, arr, size, i);
    }
    else if (parent->right == node)
    {
        makeItBalanced(parent->right, arr, size, i);
    }
    else
    {
        makeItBalanced(parent->left, arr, size, i);
    }

    delete [] arr;
    removeAllNodes(node);

    
    

}



template<class T>
void ScapegoatTree<T>::insert(Node<T> *&root, const T &element) {
    /* TODO */
    if(root == NULL) // add node to empty tree
    {
        root = new Node<T>(element, NULL, NULL);
    }
    else if(root->element > element)
    {
        insert(root->left, element);
    }
    else if(root->element < element)
    {
        insert(root->right, element);
    }
    // else duplicate

}

template<class T>
bool ScapegoatTree<T>::remove(const T &element) {
    /* TODO */
    if (isInside(element))
    {
        remove(root, element);
        int size = getSize();
        // condition 1 from pdf
        
        if (((upperBound > 2*size) || (size > upperBound)))
        {
            // std::cout << "violation condition 1" << std::endl;
            balance();
            upperBound = size; //reset the upper bound to the number of nodes
        }
        return true;
    }
    else return false;
}

template<class T>
void ScapegoatTree<T>::remove(Node<T> *&root, const T &element) {
    if (root == NULL) return;
    else if (root->element > element) remove(root->left, element);
    else if (root->element < element) remove(root->right, element);
    else //root->element == element; remove this node
    {
        if (root->left != NULL && root->right != NULL)
        {
            root->element = getMax(root->left); // both children replace with max from left
            remove(root->left, root->element);
        }
        else 
        {
            Node<T> *oldNode = root; // only one child
            root = (root->left != NULL)? root->left : root->right;
            delete oldNode;
        }
    }
}


template<class T>
void ScapegoatTree<T>::removeAllNodes() {
    /* TODO */
    removeAllNodes(root);
    upperBound = 0; 

}
template<class T>
void ScapegoatTree<T>::removeAllNodes(Node<T> *&root) {
    /* TODO */
    if (root == NULL) return; 

    removeAllNodes(root->left);
    removeAllNodes(root->right);
    delete root; 
    root = NULL;  

}

template<class T>
const T &ScapegoatTree<T>::get(const T &element) const {
    /* TODO */
    return get(root, element);
}

template<class T>
const T &ScapegoatTree<T>::get(Node<T> *root, const T &element) const {
    /* TODO */
    if (root == NULL) throw NoSuchItemException();

    if (root->element == element) return root->element;
    else if (element > root->element)
    {
        return get(root->right, element);
    }
    else
    {
        return get(root->left, element);
    }
    
}

template<class T>
Node<T> *ScapegoatTree<T>::getNode(Node<T> *root, const T &element) const
{
    if (root == NULL) return NULL;

    if (root->element == element) return root;
    else if (element > root->element)
    {
        return getNode(root->right, element);
    }
    else
    {
        return getNode(root->left, element);
    }
}

template<class T>
Node<T> *ScapegoatTree<T>::getParentNode(Node<T> *root, const T &element) const
{
    if (root == NULL) return NULL; // buna bak

    if (root->right && (root->right->element == element)) return root;
    else if (root->left && (root->left->element == element)) return root; 
    else if (element > root->element)
    {
        return getParentNode(root->right, element);
    }
    else
    {
        return getParentNode(root->left, element);
    }
}

template<class T>
void ScapegoatTree<T>::print(TraversalMethod tp) const {

    if (tp == preorder) {
        /* TODO */
        // check if the tree is empty?
        if (isEmpty()) {
            // the tree is empty.
            std::cout << "BST_preorder{}" << std::endl;
            return;
        }

        // the tree is not empty.

        // recursively output the tree.
        std::cout << "BST_preorder{" << std::endl;
        print(root, tp);
        std::cout << std::endl << "}" << std::endl;
        
    } else if (tp == inorder) {
        // check if the tree is empty?
        if (isEmpty()) {
            // the tree is empty.
            std::cout << "BST_inorder{}" << std::endl;
            return;
        }

        // the tree is not empty.

        // recursively output the tree.
        std::cout << "BST_inorder{" << std::endl;
        print(root, tp);
        std::cout << std::endl << "}" << std::endl;
    } else if (tp == postorder) {
        /* TODO */
        // check if the tree is empty?
        if (isEmpty()) {
            // the tree is empty.
            std::cout << "BST_postorder{}" << std::endl;
            return;
        }

        // the tree is not empty.

        // recursively output the tree.
        std::cout << "BST_postorder{" << std::endl;
        print(root, tp);
        std::cout << std::endl << "}" << std::endl;
    }
}

template<class T>
void ScapegoatTree<T>::print(Node<T> *node, TraversalMethod tp) const {

    if (tp == preorder) {
        /* TODO */
        // check if the node is NULL?
        if (node == NULL)
          return;
        
        // first, output the node.
        std::cout << "\t" << node->element;
        
        // then, output left subtree
        if (node->left) {
            std::cout << "," << std::endl; 
        }
        print(node->left, preorder);
        
        // finally, output right subtree
        if (node->right)
        {
            std::cout << "," << std::endl;
        }
        print(node->right, preorder);
    } else if (tp == inorder) {
        // check if the node is NULL?
        if (node == NULL)
          return;

        // first, output left subtree and comma (if needed).
        print(node->left, inorder);
        if (node->left) {
            std::cout << "," << std::endl;
        }

        // then, output the node.
        std::cout << "\t" << node->element;

        // finally, output comma (if needed) and the right subtree.
        if (node->right) {
            std::cout << "," << std::endl;
        }
        print(node->right, inorder);
    } else if (tp == postorder) {
        /* TODO */

        // check if the node is NULL?
        if (node == NULL)
          return;

        // first output left tree, print comma if needed
        print(node->left, postorder);
        if (node->left)
        {
            std::cout << "," << std::endl;
        }

        // then output right tree
        print(node->right, postorder);
        if (node->right)
        {
            std::cout << "," << std::endl; 
        }

        // finally print root node print comma if right or left exits
        std::cout << "\t" << node->element;

        
    }
}

template<class T>
void ScapegoatTree<T>::printPretty() const {

    // check if the tree is empty?
    if (isEmpty()) {
        // the tree is empty.
        std::cout << "BST_pretty{}" << std::endl;
        return;
    }

    // the tree is not empty.

    // recursively output the tree.
    std::cout << "BST_pretty{" << std::endl;
    printPretty(root, 0, false);
    std::cout << "}" << std::endl;

}

template<class T>
void ScapegoatTree<T>::printPretty(Node<T> *node, int indentLevel, bool isLeftChild) const {

    // check if the node is NULL?
    if (node == NULL)
        return;

    // output the indentation and the node.
    std::cout << "\t";
    for (int i = 0; i < indentLevel; ++i) {
        std::cout << "---";
    }
    std::cout << (indentLevel == 0 ? "root:" : (isLeftChild ? "l:" : "r:")) << node->element << std::endl;

    // first, output left subtree with one more indentation level.
    printPretty(node->left, indentLevel + 1, true);

    // then, output right subtree with one more indentation level.
    printPretty(node->right, indentLevel + 1, false);
}

template<class T>
ScapegoatTree<T> &ScapegoatTree<T>::operator=(const ScapegoatTree<T> &rhs) {
    /* TODO */
    if (this != &rhs)
    {
        removeAllNodes();
        make_copy(root, rhs.root);
        upperBound = rhs.upperBound;
    }
    return *this;
}

template<class T>
void ScapegoatTree<T>::balance() {
    /* TODO */
    T *arr;
    int size = getSize();
    arr = new T [size];
    int index = 0;
    putInArray(root, arr, index);
    removeAllNodes();
    int i =0; 
    makeItBalanced(root, arr, size, i);
    delete [] arr; 

    // std::cout << "after putted arr" << std::endl;
    // std::cout << "size = " << size << std::endl;
    // std::cout << "index = " << index << std::endl;
    // std::cout << "printing arr" << std::endl;
    // index = 0; 
    // while(index < size)
    // {
    //     std::cout << arr[index] << " ";
    //     index ++; 
    // }
}

template<class T>
void ScapegoatTree<T>::makeItBalanced(Node<T> *&root, T *arr, int size, int &i)
{
    if (size>0)
    {
        root = new Node<T>;
        makeItBalanced(root->left, arr, (size-1)/2, i);
        root->element = arr[i];
        i++;
        makeItBalanced(root->right, arr, (size)/2, i);
    }
}

template<class T>
void ScapegoatTree<T>::putInArray(Node<T> *&root, T *arr, int &index)
{
    if (root != NULL)
    {
        putInArray(root->left, arr, index);
        arr[index++] = root->element;
        putInArray(root->right, arr, index);
    }
}


template<class T>
const T &ScapegoatTree<T>::getCeiling(const T &element) const {
    /* TODO */
    // if element greater than max element in tree
    if (element > getMax()) throw NoSuchItemException();
    return getCeiling(root, element);
}

template<class T>
const T &ScapegoatTree<T>::getCeiling(Node<T> *root, const T &element) const {
    // base
    if (root == NULL) return getMin();
    // if equal 
    if (root->element == element) return root->element;
    // if element greater than root search in right
    if (element > root->element) return getCeiling(root->right, element);
    // else , in left or root is ceil
    Node<T> *ceil = NULL;
    if (root->left)
    {
        ceil = getNode(root ,getCeiling(root->left, element));
        // std::cout << "root left var ceil is " << ceil <<std::endl;
    }
    else ceil = root;

    return (ceil && (ceil->element >= element)) ? ceil->element : root->element;
}



template<class T>
const T &ScapegoatTree<T>::getFloor(const T &element) const {
    /* TODO */
    if (element < getMin()) throw NoSuchItemException();
    return getFloor(root, element);
    
}

template<class T>
const T &ScapegoatTree<T>::getFloor(Node<T> *root, const T &element) const {
    if (root == NULL) return getMax();
    // if equal 
    if (root->element == element) return root->element;
    // if element greater than root search in left
    if (element < root->element) return getFloor(root->left, element);
    // else , in right or root is ceil
    Node<T> *floor = NULL; 
    if (root->right) floor = getNode(root, getFloor(root->right, element));
    else floor = root;
    
    return (floor && (floor->element <= element)) ? floor->element : root->element;
}


template<class T>
const T &ScapegoatTree<T>::getMin() const {
    /* TODO */
    if (root == NULL)
    {
        throw NoSuchItemException();
    }
    return getMin(root);
}

template<class T>
const T &ScapegoatTree<T>::getMin(Node<T> *root) const 
{
    if (root->left == NULL) return root->element;
    else return getMin(root->left);
}

template<class T>
const T &ScapegoatTree<T>::getMax() const {
    /* TODO */
    if (root == NULL)
    {
        throw NoSuchItemException();
    }
    return getMax(root);
}

template<class T>
const T &ScapegoatTree<T>::getMax(Node<T> *root) const 
{
    if (root->right == NULL) return root->element;
    else return getMax(root->right);
}

template<class T>
const T &ScapegoatTree<T>::getNext(const T &element) const {
    /* TODO */
    if (element >= getMax()) throw NoSuchItemException();
    else if (element < getMin()) return getMin();
    else
    {
        T * arr = new T [getSize()];
        int i = 0; 
        getNextPutInArray(root, arr, i);
        // std::cout << "putted in arr" << std::endl; 
        int index = 0; 
        while (arr[index] <= element) index++; 
        T el = arr[index];
        delete [] arr;
        return get(el); 

    }

}

template<class T>
void ScapegoatTree<T>::getNextPutInArray(Node<T> *root, T *arr, int &index) const
{
    if (root != NULL)
    {
        getNextPutInArray(root->left, arr, index);
        arr[index++] = root->element;
        getNextPutInArray(root->right, arr, index);
    }
}
