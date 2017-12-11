#include <iostream>
#include "Node.h"

//Node Constructor
Node::Node(Student* newStudent) {
  student = newStudent;
}
//Node deconstructor
Node::~Node() {
  delete student;
}
//get the next node
Node* Node::getNext() {
  return next;
}
//get the student
Student* Node:: getStudent() {
  return student;
}
//set the next node
void Node::setNext(Node* newNode) {
  next = newNode;
}
