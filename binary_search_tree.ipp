template <typename T>
BinarySearchTree<T>::BinarySearchTree(): root(NULL){}

template <typename T>
BinarySearchTree<T>::~BinarySearchTree(){
    deleteTree(root);
}


template <typename T>
bool BinarySearchTree<T>::search(const T& value) const{
    
}

template <typename T>
bool BinarySearchTree<T>::searchRecursive(BinaryNode<T>* node, const T& value) const{
    
}

template <typename T>
void BinarySearchTree<T>::inOrderTraversal() const {
    inOrderTraversal(root);
}

template <typename T>
void BinarySearchTree<T>::inOrderTraversal(BinaryNode<T>* node) const {
    if (node != NULL) {
        inOrderTraversal(node->getLeft());
        std::cout << node->getValue() << " ";
        inOrderTraversal(node->getRight());
    }
}

template <typename T>
void BinarySearchTree<T>::insert(const T& value){
     
}

template <typename T>
BinaryNode<T>* BinarySearchTree<T>::insertRecursive(BinaryNode<T>* node, const T& value){
    
}

template <typename T>
void BinarySearchTree<T>::deleteTree(BinaryNode<T>* node) {
    if (node != NULL) {
        deleteTree(node->getLeft());
        deleteTree(node->getRight());
        delete node;
    }
}

template <typename T>
void BinarySearchTree<T>::remove(const T& value){
    
}

template <typename T>
BinaryNode<T>* BinarySearchTree<T>::removeRecursive(BinaryNode<T>* node, const T& value){
 
  
}


template <typename T>
BinaryNode<T>* BinarySearchTree<T>::findMin(BinaryNode<T>* node) {
   
}



