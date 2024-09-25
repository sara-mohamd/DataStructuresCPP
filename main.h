#ifndef MAIN_H
#define MAIN_H
struct Node
{
  int data;
  Node *next;
  Node(int value = 0) : data(value), next(nullptr) {};
  /**
   *  helper function designed to create new node dynamically
   * @param value: The data value to be stored in the new node.
   * @return newNode
   */
  static Node *createNode(int value = 0)
  {
    Node *newNode = new Node(value);
    return newNode;
  }
};
#endif