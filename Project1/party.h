/**
 * @file party.h
 *
 * @brief
 *    Declaration of a party of diners in a restaurant.
 *
 * @author Judy Challinger
 * @date 1/1/16
 */

#ifndef CSCI_311_PARTY_H
#define CSCI_311_PARTY_H

#include <string>

using std::string;

class Party {

public:
   Party();
   Party(const string& reservationName, int numDiners, int timeRequired);
   ~Party();
   const string* getReservationName() const { return reservationName; }
   int getNumDiners() const { return numDiners; }
   int getTimeRequired() const { return timeRequired; }

private:
   string* reservationName;      // name for this reservation
   int numDiners;                // number of diners in this party
   int timeRequired;             // amount of time a table will be required
};

#endif // CSCI_311_PARTY_H
