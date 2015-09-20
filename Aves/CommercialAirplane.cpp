#include "CommercialAirplane.h"

CommercialAirplane::CommercialAirplane() : Airplane() { std::cout << "Constructing CommercialAirplane\n"; }

CommercialAirplane::CommercialAirplane(std::string faa, std::string model) : Airplane(faa, model) { std::cout << "Constructing CommercialAirplane\n"; }

CommercialAirplane::~CommercialAirplane() { std::cout << "Destroy Commercial Airplane\n"; }

//const CommercialAirplane* CommercialAirplane::operator = (const CommercialAirplane*) {

//}

std::string CommercialAirplane::getFAA() const {
   return this->FAA_NUM;
}

std::string CommercialAirplane::getModel() const {
   return this->mModel;
}

long CommercialAirplane::totalCost() {
   return 0;
}

long CommercialAirplane::fuelCost() {
   return 0;
}