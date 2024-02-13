#include <iostream> // Including the input/output stream library
#include <queue> // Added missing angle brackets to include the queue library
using namespace std; // Using the standard namespace for easier access to standard library components

// Defining a structure for a binary tree node
struct Node {
    int data; // Data stored in the node
    struct Node* left, * right; // Pointers to the left and right child nodes
};

// Function to create a new node with the given data
Node* newNode(int data) {
    Node* temp = new Node; // Allocating memory for a new node
    temp->data = data; // Assigning the given data to the node
    temp->left = temp->right = NULL; // Initializing left and right pointers to NULL
    return temp; // Returning the newly created node
}
                
int main() {
    // Creating the binary tree structure
    Node* root = newNode(1); // Creating the root node with data 1
    root->left = newNode(2); // Creating left child node with data 2
    root->right = newNode(3); // Creating right child node with data 3
    root->left->left = newNode(4); // Creating left child of the left child node with data 4
    root->left->right = newNode(5); // Creating right child of the left child node with data 5
    root->right->left = newNode(6); // Creating left child of the right child node with data 6
    root->right->right = newNode(7); // Creating right child of the right child node with data 7
    root->left->right->left = newNode(9); // Creating left child of the right child of the left child node with data 9
    root->right->right->left = newNode(15); // Creating left child of the right child of the right child node with data 15
    
    // Printing the level order traversal of the binary tree
    cout << "Level Order traversal of binary tree is  ";
    queue<Node*> q; // Creating a queue of node pointers
    q.push(root); // Pushing the root node into the queue
    while (!q.empty()) { // Looping until the queue becomes empty
        Node* node = q.front(); // Getting the front node of the queue
        cout << node->data << " "; // Printing the data of the front node
        q.pop(); // Removing the front node from the queue
        if (node->left != NULL) // If the left child of the current node exists
            q.push(node->left); // Pushing the left child into the queue
        if (node->right != NULL) // If the right child of the current node exists
            q.push(node->right); // Pushing the right child into the queue
    }
    return 0; // Indicating successful execution
} // End of the main function