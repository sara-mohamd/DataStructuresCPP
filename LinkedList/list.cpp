#include "list.h"
using namespace std;

/**
 * Counts the number of nodes in the linked list starting from the given node.
 *
 * @param node Pointer to the starting node of the linked list (typically the head).
 * @return The total number of nodes in the list.
 */

int LList::nodesCounter(Node *node)
{
  if (!node)
    return 0;

  int counter = 0;
  Node *temp = node; // start from the given node

  // Traverse the linked list until temp is nullptr
  while (temp)
  {
    counter++;
    temp = temp->next;
  }
  return counter;
}

/**
 * Inserts a new node with the given value at a specific position in the linked list.
 *
 * @param value The data value to be stored in the new node.
 * @param position The 0-based index at which to insert the new node.
 *                 If the position is 0 or empty list the new node is inserted at the head.
 *                 If the position is greater than the list length, the node is appended at the end.
 */

void LList::insertAtPosition(int value, int position)
{
  Node *newNode = Node::createNode(value);
  newNode->next = nullptr;

  // If list is empty or position is zero, insert at head
  if (position <= 0 || !nodesCounter(head))
  {
    newNode->next = head;
    head = newNode;
    if (!tail)
    { // If the list was empty
      tail = newNode;
    }
    return;
  }

  // Traverse to the position just before where the new node should be inserted
  Node *current = head;
  Node *prev = nullptr;
  int counter = 0;

  // Traverse until the desired position or end of list
  while (!current && counter < position)
  {
    prev = current;          // Keep track of the previous node
    current = current->next; // Move to the next node
    counter++;
  }

  // Insert the new node at the desired position
  newNode->next = current;
  if (prev != nullptr)
  {
    prev->next = newNode;
  }

  // If we're inserting at the end, update the tail
  if (current == nullptr)
  {
    tail = newNode;
  }
}

/**
 * Deallocating
 */
void LList::deleteFirst()
{
  if (head)
  {
    Node *temp = head; // catch first Node
    head = head->next;
    delete temp; // deallocating the memory
  }
  else
    cout << "It's already Empty List!\n";
}
void LList::traversing()
{
  Node *temp = Node::createNode();
  temp = head;
  while (temp)
  {
    cout << temp->data << " -> ";
    temp++;
  }
}
