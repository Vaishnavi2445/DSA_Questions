#include <iostream>
using namespace std;

struct node {
  int data;
  node *left;
  node *right;



  node(int data) {
    this->data = data;
    this->left = nullptr;
    this->right = nullptr;
  }

 
};

node *tree() {
  int data;

  cout << "enter Data : " << endl;
  cin >> data;

  if (data == -1) {
    return NULL;
  }

  // Create a new node with the given data.
  node *root = new node(data);

  cout << "Enter left data for " << data << endl;

  root->left = tree();

  cout << "Enter right data for " << data << endl;

  root->right = tree();

  return root;
}

void printPreOrder(node *root) {
  if (root != nullptr) {
    cout << root->data << " ";
    printPreOrder(root->left);
    printPreOrder(root->right);
  }
}


int main() {
  node *root = tree();
  printPreOrder(root);
  return 0;
}
