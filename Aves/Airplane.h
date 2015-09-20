#ifndef AIRPLANE__H
#define AIRPLANE__H
#include "IAircraft.h"

/* 
 * Abstract class Airplane implements interface IAircraft.
 */
class Airplane : public IAircraft {
public:
   Airplane() : FAA_NUM("no FAA"), mModel("no Model") { }
   Airplane(std::string faa, std::string model) : FAA_NUM(faa), mModel(model) { }
   virtual ~Airplane() { std::cout << "Destroy Airplane\n"; }

   virtual long totalCost() = 0;
   virtual long fuelCost() = 0;
   virtual std::string getFAA() const = 0;
   virtual std::string getModel() const = 0;

protected:
   /*
   * FAA_NUM - static and unique for each TYPE of Airplane (Boeing 787s all have the same
   * mModel but differ from a Boeing 777)
   * mEfficiency - efficiency of aircraft (fractional value that affects fuel)
   * mWeight - weight of plane (tons)
   * mFuel - amount of fuel (gallons)
   * mSeatCapacity - may be different for every plane, even planes with the same mModels
   */
   std::string FAA_NUM, mModel;
   double mEfficiency, mWeight, mFuel;
   int mSeatCapacity;
};

#endif;