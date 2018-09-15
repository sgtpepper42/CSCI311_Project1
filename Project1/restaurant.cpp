#include<iostream>
#include <string>
#include <map>
#include<cstdlib>
#include<fstream>
using namespace std;

#include"restaurant.h"
#include"table.cpp"
#include"party.cpp"
//#include"doublylinkedlist.h"

void getInput(){
  ifstream in;
  in.open("s3t6-cmds.txt");
  if(!in){
    cout << "Error: Can't open file s3t3-cmds.txt.\n";
    exit(1);
  }
  string type; //To see if item is a table or object being read

  string tableID; //Info for table item
  int tableSeats;
  string serverName;

  int numDiners; //Info for party item
  string partyName;
  int timeReq;

  while(!in.eof()){
    in >> type;
    if(type == "table"){
      in >> tableID;
      in >> tableSeats;
      in >> serverName;
      Table temp = Table(tableID, tableSeats, serverName);
      available.append(temp);
    }
    else if (type == "party"){
      in >> numDiners;
      in >> partyName;
      in >> timeReq;
      Party temp = Party(partyName, numDiners, timeReq);
      waiting.append(temp);
    }
    else{
      cout << "type = " << type << endl;
    }
  }
  in.close();
  in.clear();
}

void serveParties(){
  occupied->current = occupied->head;
  if(occupied->current != nullptr){
    occupied->current->data(decrementTimer);
    occupied->current = occupied->next;
  }
  else{
    return;
  }
}

int main(){
 Restaurant myDiner;

  return 0;
}
