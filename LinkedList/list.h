#ifndef LIST_H
#define LIST_H
#include "../main.h"

class LList
{
public:
  Node *head, *tail;
  LList() : head(nullptr), tail(nullptr) {};

  int nodesCounter(Node *);
  void insertAtPosition(int, int);
  void deleteAtPosition(int position);
  void traversing() {};
  void merge(LList &otherList);
  void sort();
};

#endif