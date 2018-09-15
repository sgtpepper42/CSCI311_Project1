/**
 * @file doublylinkedlist.h
 *
 * @brief
 *    Template for doubly linked list class.
 *
 * @author Judy Challinger & Your Name Here!
 * @date 1/1/16
 */

#ifndef CSCI_311_DOUBLYLINKEDLIST_H
#define CSCI_311_DOUBLYLINKEDLIST_H

template <class T>
class DoublyLinkedList {
private:
  class Node {
   public:
     Node();
     Node(T* data);
     Node* next;
     Node* prev;
     T* data;
  };
  Node* head;
  Node* tail;
  Node* current;

 public:
   DoublyLinkedList();
   ~DoublyLinkedList();
   void append(T* data);
   bool empty() const { return (head == nullptr); }
   T* remove();
   T* first();
   T* next();
};

/**
 * @brief   Node constructor.
 */
template <class T>
DoublyLinkedList<T>::Node::Node() {

   // Your code here...
   data = nullptr, prev = nullptr, next = nullptr;
}

template <class T>
DoublyLinkedList<T>::Node::Node(T* iniData){

  data = iniData, prev = nullptr, next = nullptr;
}

/**
 * @brief   DoublyLinkedList constructor.
 */
template <class T>
DoublyLinkedList<T>::DoublyLinkedList() {

   // Your code here...
   head = nullptr, tail = nullptr, current = nullptr;
}

/**
 * @brief   DoublyLinkedList destructor.
 */
template <class T>
DoublyLinkedList<T>::~DoublyLinkedList() {

   // Your code here...
   current = first();
   while (head != nullptr){
     head.remove();
   }
}

/**
 * @brief   Appends a new Node at the end of the DoublyLinkedList.
 * @param   data A pointer to the data to be stored in the new Node.
 * @return  Nothing.
 *
 * Creates a new Node to hold the data and appends the Node at the end
 * of the list. The current Node pointer is set to point to the newly
 * appended Node.
 */
template <class T>
void DoublyLinkedList<T>::append(T* data) {

   // Your code here...
   Node newNode = new Node(data);
   if (head == nullptr){
     head = newNode;
     newNode = nullptr;
     return;
   }
   else {
     tail->next = newNode;
     tail = newNode;
     newNode = nullptr;
     return;
   }
}

/**
 * @brief   Get the first thing on the list.
 * @return  A pointer to the data stored in the first Node on the list,
 *          or nullptr if the list is empty.
 *
 * The current pointer is set to point to the first Node in the list,
 * or nullptr if the list is empty.
 */
template <class T>
T* DoublyLinkedList<T>::first() {

   // Your code here...
   if(head != nullptr)
   {
     current = head;
     return current;
   }
   else
   {
     return nullptr;
   }
}

/**
 * @brief   Get the next thing on the list.
 * @return  A pointer to the data stored in the next Node on the list. The next
 *          Node is the one following whatever the current pointer is pointing
 *          to. If there is no next Node then nullptr is returned.
 *
 * The current pointer is set to point to the next Node in the list,
 * or nullptr if there is no next Node.
 */
template <class T>
T* DoublyLinkedList<T>::next() {

   // Your code here...
   if (current != nullptr){
     Node* next = current -> next;
     return next;
   }
   else{
     return nullptr;
   }
}

/**
 * @brief   Remove the Node pointed to by the current pointer.
 * @return  A pointer to the data stored in the next Node on the list. The next
 *          Node is the one following the Node that was removed. If there is
 *          no next Node then nullptr is returned.
 *
 * The current pointer is set to point to the next Node in the list, following
 * the Node that was removed, or nullptr if there is no next Node.
 */
template <class T>
T* DoublyLinkedList<T>::remove() {

   // Your code here...
   if (current == nullptr){
     return nullptr;
   }
   else if(current == tail){
     Node temp = current;
     current = nullptr;
     delete temp;
     return current;
   }
   else{
     Node temp = current;
     current = next();
     delete temp;
     return current;
   }
}

#endif // CSCI_311_DOUBLYLINKEDLIST_H
