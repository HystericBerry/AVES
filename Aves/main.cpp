#include "IAircraft.h"
#include "Airplane.h"
#include "CommercialAirplane.h"
#include <iostream>
#include <vector>

/*
 * http://www.airlines-inform.com/commercial-aircraft/
 * The AViation Estimation Software will generate an optimized list of ticket requests, that
 * finds the most profitable way to fill flight schedules.
 */
int main(int arc, char* argv[]) {
   std::vector<IAircraft*> *listAircraft = new std::vector<IAircraft*>();
   IAircraft *temp;
   listAircraft->push_back(new CommercialAirplane("DA822A", "Boeing 787"));
   listAircraft->push_back(new CommercialAirplane("DA802A", "Boeing 787"));

   for (IAircraft* getPlane : *listAircraft) {
      if (CommercialAirplane* plane = dynamic_cast<CommercialAirplane*>(getPlane))
         std::cout << "Plane FAA: " << plane->getFAA() << ", Plane Model: " << plane->getModel() << '\n';
      else
         std::cout << "plane is not instance of CommercialAirplane\n";
   }

   for (IAircraft* curr : *listAircraft)
      delete curr;

   system("pause");
   return 0;
}