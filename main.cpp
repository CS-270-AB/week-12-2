#include <iostream>
#include "binary_search_tree.hpp"
#include "binary_node.hpp"


int main(){
    
    BinarySearchTree<int> binarySearchTree;
    std::cout << "Inserting" << std::endl;
    binarySearchTree.insert(5);
    binarySearchTree.insert(10);
    binarySearchTree.insert(7); 
    binarySearchTree.insert(7); 
    std::cout << "Traversal" << std::endl;
    binarySearchTree.inOrderTraversal(); 
    std::cout << " " << std::endl;
    std::cout << "Search" << std::endl;
    std::cout << binarySearchTree.search(7) << std::endl;
    std::cout << binarySearchTree.search(8) << std::endl;
    binarySearchTree.remove(7);
    binarySearchTree.inOrderTraversal();

    return 0;
} 