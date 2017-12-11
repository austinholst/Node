#include <iostream>
#include "Node.h"

using namespace std;

void nextNode(Node*, Node*);

int main() {
  //Creates a student
  Student* student = new Student;
  //Creates a node with a student in it
  Node* node = new Node(student);
  //Print out first node
  cout << node->getStudent()->getValue() << endl;
  Node* node2 = new Node(student);
  //Sets the first nodes next node to be the second node
  nextNode(node, node2);
  //Print out the next node
  cout << node->getNext()->getStudent()->getValue() << endl;
  return 0;
}

//Method for setting the next node
void nextNode(Node* n, Node* n2){
  n->setNext(n2);
}
