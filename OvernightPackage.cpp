#include "OvernightPackage.h"
#include <iostream>


//package shipping constructor that now includes the overnight fee
OvernightPackage::OvernightPackage(const std::string & _name, const std::string & _address, const std::string & _city, const std::string & _state, int _ZIPcode, double _weight, double _costPerOunce, double _overnightFee)
{
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  ZIPcode = _ZIPcode;
  setWeight(_weight);
  setCostPerOunce(_costPerOunce);
  setOvernightFee(_overnightFee);  
  MemberID++;
}


//function to set the fee for overnight shipping, while checking if the given value is positive
void OvernightPackage::setOvernightFee(double _overnightFee)
{
   if (_overnightFee > 0)
    overnightFee = _overnightFee;
  else  
  {
    std::cout << "The Overnight Fee must be a positive number! " << std::endl;
    overnightFee = 0;
    }
}


//function redifining
double OvernightPackage::calculateCost() const
{
  return (costPerOunce * weight) + overnightFee;
}


//function redifining
void OvernightPackage::printPackageInfo() const
{
   std::cout << "----------------------------------------------" << std::endl << "Package ID " << MemberID << ": " << std::endl << std::endl << name << std::endl << address << std::endl << city << ", " << state << " " << ZIPcode << std::endl << std::endl << "Cost: " << calculateCost() << std::endl <<  "----------------------------------------------" << std::endl;
}