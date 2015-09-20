#ifndef COMMERCIAL__AIRPLANE__H
#define COMMERCIAL__AIRPLANE__H
#include "Airplane.h"

class CommercialAirplane : public Airplane {
public:
   CommercialAirplane();
   CommercialAirplane(std::string, std::string);
   ~CommercialAirplane();
   //const CommercialAirplane* operator=(const CommercialAirplane*);

   std::string getFAA() const;
   std::string getModel() const;

   long totalCost();
   long fuelCost();
protected:
   //member variables
};
#endif