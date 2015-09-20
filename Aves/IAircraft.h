#ifndef IAIRCRAFT__H
#define IAIRCRAFT__H
#include <iostream>
#include <string>

/*
* IAircraft is an interface that will be implemented by any type of aerodynamic
* vehicle, such as Helicopters, Airplanes, Rockets and SpaceShuttles.
* This forces the programmer to create methods in the future.
*/
class IAircraft {
public:
   virtual ~IAircraft() { std::cout << "Destroy IAircraft\n"; }

   virtual long totalCost() = 0;
   virtual long fuelCost() = 0;
};

#endif;