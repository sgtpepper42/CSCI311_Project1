/**
 * @file restaurant.h   Declaration of a restaurant.
 *
 * @brief
 *    Simulates seating diners in a restaurant.
 *
 * @author Judy Challinger
 * @date 1/1/16
 */

#ifndef CSCI_311_RESTAURANT_H
#define CSCI_311_RESTAURANT_H

#include <string>
#include <map>
#include "doublylinkedlist.h"
#include "table.h"
#include "party.h"

// Note! Put main() in restaurant.cpp
// It should instantiate a Restaurant object and call functions on it.
// Restaurant myDiner; myDiner.getInput(); myDiner.serveParties();

class Restaurant {
 public:
   void getInput();                    // read the input from cin
   void serveParties();                // mainloop - serve parties of diners
 private:
   DoublyLinkedList<Table> available;  // available tables
   DoublyLinkedList<Table> occupied;   // occupied tables
   DoublyLinkedList<Party> waiting;    // parties waiting for a table
   std::map<std::string,int> servers;  // counts of guests served
};

#endif // CSCI_311_RESTAURANT_H