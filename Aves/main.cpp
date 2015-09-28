#include "IAircraft.h"
#include "Airplane.h"
#include "CommercialAirplane.h"
#include <iostream>
#include <vector>

/*
 * @Author: Paul Kim
 * Date Created: September 19, 2015
 * Date Modified: September 20, 2015
 * http://www.airlines-inform.com/commercial-aircraft/
 * The AViation Estimation Software will generate an optimized list of ticket requests, that
 * finds the most profitable way to fill flight schedules.
 */
int main(int arc, char* argv[]) {
   IAircraft *temp;
   std::vector<IAircraft*> listAircraft;
   
   //Test IAircraft type:
   listAircraft.push_back(new CommercialAirplane("DA822A", "Boeing 787", 250));
   listAircraft.push_back(new CommercialAirplane("DA802A", "Boeing 787", 290));

   //Iterate through vector of IAircraft* and print information
   for (IAircraft* getPlane : *listAircraft) {
      //The "instanceof" if statement is not necessary since all Airplanes have an FAA_NUM, but it will be 
      //necessary when other forms of Aircrafts are implemented with the interface
      if (CommercialAirplane* plane = dynamic_cast<CommercialAirplane*>(getPlane))
         std::cout << "Plane Information - FAA: " << plane->getFAA() << ", Model: " << plane->getModel() 
         << ", Capacity: " << plane->getCapacity() << '\n';
      else
         std::cout << "plane is not instance of CommercialAirplane\n";
   }

   //Test IAircraft destructor
   for (IAircraft* curr : *listAircraft)
      delete curr;

   system("pause");
   return 0;
}