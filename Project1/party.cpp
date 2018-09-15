#include <string>

#include "party.h"

Party::Party(){
  reservationName = nullptr;
  numDiners = 0;
  timeRequired = 0;
}

Party::Party(const string& iniName, int iniDiners, int iniTime){
  for(int i = 0; (unsigned)i < iniName.length(); i++){
    *reservationName += iniName[i];
  }
  numDiners = iniDiners;
  timeRequired = iniTime;
}

Party::~Party() {
  reservationName = nullptr;
  numDiners = 0;
  timeRequired = 0;
}
