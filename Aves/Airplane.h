#ifndef AIRPLANE__H
#define AIRPLANE__H
#include "IAircraft.h"

/* 
 * @Author: Paul Kim
 * Date Created: September 19, 2015
 * Date Modified: September 20, 2015
 * Abstract class Airplane implements interface IAircraft.
 */
class Airplane : public IAircraft {
public:
   Airplane() : FAA_NUM("no FAA"), mModel("no Model") { std::cout << "Constructing Airplane"; }
   Airplane(std::string faa, std::string model, int seats) 
      : FAA_NUM(faa), mModel(model), mCapacity(seats), mWeight(), mFuel() { }
   virtual ~Airplane() { std::cout << "Destroy Airplane\n"; }
   
   
   //public mutator methods for private member variables
   //when possible, it is best to make a toString method that calls these functions
   //then the functions can be made protected
   int getCapacity() const { return mCapacity; }
   std::string getFAA() const { return FAA_NUM; }
   std::string getModel() const { return mModel; }


   //public abstract method that will calculate fuel cost
   virtual long totalCost() = 0;
   virtual long fuelCost() = 0;
   virtual bool Equals(const Airplane &other) const = 0;

   /*
   Helper method for doing == comparison on derived Airplane types. This method
   will be called any time you use == to compare two Airplane objects; the
   operator will in turn call the virtual Equals method to support base-class
   comparisons.
   */
   friend bool operator==(const Airplane &lhs, const Airplane &rhs) {
      return lhs.Equals(rhs);
   }

/*
 * Listing the member variables as private retains "safe" code. Protected member variables may 
 * allow insertion of third party code to potentially "inherit" from the base Airplane class, 
 * then add mutator methods. This ensures that from the time that AVES receives information from 
 * the external database, that the software itself did not alter the inputs.
 */
private:
   /*
   * FAA_NUM - unique for every Airplane (Boeing 787s all have the same mModel but differ
   * in FAA_NUM)
   * mEfficiency - efficiency of aircraft (fractional value that affects fuel)
   * mWeight - weight of plane (kg)
   * mFuel - amount of fuel (gallons)
   * mCapacity - may be different for every plane, even planes with the same mModels
   */
   std::string FAA_NUM, mModel;
   double mEfficiency, mFuel;
   int mWeight, mCapacity;

   //member variables to add: MaximumGrossTakeOffWeight (MGTOW), MaximumTakeOffMass (MTOM), 
   //GrossLiftOffMass (GLOW)

   //having too much weight (including fuel), costs more fuel to move the plane. it also makes 
   //the plane more unstable and susceptable to accidents
};

#endif;