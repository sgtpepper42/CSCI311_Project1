#include <string>
#include "party.h"

#include "table.h"

Table::Table(){
  *tableID = "";
  numSeats  = 0;
  *serverName = "";
  timer = 0;
  party = nullptr;
}

Table::Table(const string& iniID, int iniSeats, const string& iniServer){
  *tableID = iniID;
  numSeats = iniSeats;
  *serverName = iniServer;
  timer = 0;
  party = nullptr;
}

Table::~Table(){
  tableID = nullptr;
  numSeats  = 0;
  serverName = nullptr;
  timer = 0;
  party = nullptr;
}

void Table::seatParty(const Party* newParty){
  party = newParty;
  timer = newParty -> getTimeRequired();
}
