#ifndef AIRPORT__H
#define AIRPORT__H
#include <string>

/*
 * @Author: Paul Kim
 * Date Created: September 20, 2015
 * Date Modified: 
 * Abstractly, an Airport is a node that within a network flow of flights.
 * All information of every Airport will be associated with one "Airline."
 */
class Airport {
public:
   std::string getIATA() const;

   int getNumPort() const;

private:
   std::string mIATA;
   int mNumPorts;
};

#endif;