#pragma once

#include <iostream>
#include <string>

using namespace std;

template <typename Item_Type>

class Single_Linked_List{
  private:
    // Node Structure is used to hold onto the data 
    struct Node{
        Item_Type data;
        Node* next;
        Node(const Item_Type& item) : data(item), next(nullptr) {}
      };

    // Node pointer to the first node on the list, the last, and number of items. 
    Node *headPtr;
    Node *tailPtr;
    size_t num_items;

  public:
    //Constructor
    Single_Linked_List();

    //Functions
    void push_front(const Item_Type& item);
    void push_back(const Item_Type& item);
    void pop_front();
    void pop_back();
    Item_Type front() const;
    Item_Type back() const;
    bool empty() const;
    void insert(size_t index, const Item_Type& item);
    bool remove(size_t index);
    size_t find(const Item_Type& item) const;

};
