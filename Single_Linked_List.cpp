#include "Single_Linked_List.h"

// This function initializes th head and tail of the list to null
template <typename Item_Type>
Single_Linked_List<Item_Type>::Single_Linked_List() {
  headPtr = nullptr;
  tailPtr = nullptr;
  num_items = 0;
}


// This function inserts an item at the front of the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_front(const Item_Type& item){
  Node *newNode = new Node(item);

  // Checks if null
  if (empty()){
    headPtr = newNode;
    tailPtr = newNode;
  }

  else {
    // adds item to front of list
    newNode->next = headPtr;
    headPtr = newNode;
  }

  num_items++;
}

// This function inserts an item at the back of the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::push_back(const Item_Type& item){
  Node* newNode = new Node(item);

  // Checks if null
  if (empty()) {
      headPtr = newNode;
      tailPtr = newNode;
  } 
  
  else {
    // adds item to back of list
      tailPtr->next = newNode;
      tailPtr = newNode;
  }
  
  num_items++;
}

// This function removes the first item on the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_front(){
  //checks if it's not empty
  if (!empty()) {
    Node* tempNode = headPtr;
    headPtr = headPtr->next;
    
    delete tempNode;
    
    num_items--;
  }
}

// This function removes the last item on the list
template <typename Item_Type>
void Single_Linked_List<Item_Type>::pop_back(){
  if (!empty()) {
    //checks if it's not empty
    if (headPtr == tailPtr) {
        //if equal, set head and tail to null
        delete headPtr;
        headPtr = nullptr;
        tailPtr = nullptr;
    } 

    // remove last item
    else {
      Node* temp = headPtr;
    
      while (temp->next != tailPtr) {
          temp = temp->next;
      }
      delete tailPtr;
      tailPtr = temp;
      tailPtr->next = nullptr;
    }
    num_items--;
  }
}

// Returns the item at the front of the list
template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::front() const{
  // checks of list empty
  if (!empty()) {
      return headPtr->data;
  }

  // if empty, return error
  else {
      throw out_of_range("List is empty");
  }
}

// RReturns the item at the back of the list
template <typename Item_Type>
Item_Type Single_Linked_List<Item_Type>::back() const{
  // checks of list empty
  if (!empty()) {
      return tailPtr->data;
  }

  // if empty, return error
  else {
    throw out_of_range("List is empty");
  }
}

// checks if the list is empty
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::empty() const{
  if (num_items == 0){
    return true;
  }
  else{
    return false;
  }
}

// This function inserts data at a specific index
template <typename Item_Type>
void Single_Linked_List<Item_Type>::insert(size_t index, const Item_Type& item){
  if (index < 0 || index > num_items) {
    index = num_items;
  }
  
  if (index == 0) {
    push_front(item);
  } 
    
  else if (index == num_items) {
    push_back(item);
  } 
    
  else {
    Node* newNode = new Node(item);
    Node* tempNode = headPtr;
    
    for (size_t i = 0; i < index - 1; i++) {
        tempNode = tempNode->next;
    }
    
  newNode->next = tempNode->next;
  tempNode->next = newNode;
  num_items++;
    
  }
}

// This function removes data from specific index
template <typename Item_Type>
bool Single_Linked_List<Item_Type>::remove(size_t index){
  if (index >= 0 && index < num_items) {
    if (index == 0) {
      pop_front();
    } 
      
    else {
      Node* currentNode = headPtr;
      for (size_t i = 0; i < index - 1; i++) {
        currentNode = currentNode->next;
    }
      
    Node* tempNode = currentNode->next;
    currentNode->next = tempNode->next;
    if (tempNode == tailPtr) {
        tailPtr = currentNode;
    }
      
    delete tempNode;
    num_items--;
    }
    return true;
  }
  return false;
}

// This function finds the index where the specific data is
template <typename Item_Type>
size_t Single_Linked_List<Item_Type>::find(const Item_Type& item) const{
  Node* tempNode = headPtr;
    size_t index = 0;
    while (tempNode != nullptr) {
      if (tempNode->data == item) {
        return index;
      }
      tempNode = tempNode->next;
      index++;
    }
  return num_items;
}



/*
Work Reference:
- https://ioecapsule.com/linked-list-template-implementation-of-singly-linked-list-using-c/
- https://www.dgp.toronto.edu/~jstewart/270/9798s/notes/Templates.html
- https://www.geeksforgeeks.org/list-cpp-stl/

*/
