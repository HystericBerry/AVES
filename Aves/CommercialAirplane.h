#ifndef COMMERCIAL__AIRPLANE__H
#define COMMERCIAL__AIRPLANE__H
#include "Airplane.h"

/*
 * @Author: Paul Kim
 * Date Created: September 19, 2015
 * Date Modified: September 20, 2015
 */
class CommercialAirplane : public Airplane {
public:
   CommercialAirplane();
   CommercialAirplane(std::string, std::string, int seats);
   ~CommercialAirplane();

   bool Equals(const Airplane &other) const;
   
   long totalCost();
   long fuelCost();
};
#endif