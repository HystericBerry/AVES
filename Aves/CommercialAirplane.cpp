#include <sstream>
#include "CommercialAirplane.h"

/*
 * @Author: Paul Kim
 * Date Created: September 19, 2015
 * Date Modified: September 20, 2015
 */

CommercialAirplane::CommercialAirplane() : Airplane() { std::cout << "Constructing CommercialAirplane\n"; }

CommercialAirplane::CommercialAirplane(std::string faa, std::string model, int seats) 
   : Airplane(faa, model, seats) { std::cout << "Constructing CommercialAirplane\n"; }

CommercialAirplane::~CommercialAirplane() { std::cout << "Destroy Commercial Airplane\n"; }

/*
 * polymorphically called by the absctract class Airplane
 */
 bool CommercialAirplane::Equals(const Airplane &other) const {
   const CommercialAirplane& o = dynamic_cast<const CommercialAirplane&>(other);
   return this->getFAA() == o.getFAA() && this->getModel() == o.getModel();
}

long CommercialAirplane::totalCost() {
   return 0;
}

long CommercialAirplane::fuelCost() {
   return 0;
}