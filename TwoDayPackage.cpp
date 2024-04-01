#include "TwoDayPackage.h"
#include <iostream>


//package shipping constructor that now includes the two day shipping fee
TwoDayPackage::TwoDayPackage(const std::string & _name, const std::string & _address, const std::string & _city, const std::string & _state, int _ZIPcode, double _weight, double _costPerOunce, double _twoDayFee)
{
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  ZIPcode = _ZIPcode;
  setWeight(_weight);
  setCostPerOunce(_costPerOunce);
  setFlatFee(_twoDayFee);  
  MemberID++;
}


//function to set the Flat fee for 2 day shipping, while checking if the given value is positive
void TwoDayPackage::setFlatFee(double _twoDayFee)
{
  if (_twoDayFee > 0)
    twoDayFee = _twoDayFee;
  else  
  {
    std::cout << "The Flat Fee must be a positive number! " << std::endl;
    twoDayFee = 0;
  }
}


//function redifining
double TwoDayPackage::calculateCost() const
{
  return (costPerOunce * weight) + twoDayFee;
}


//function redifining
void TwoDayPackage::printPackageInfo() const
{
   std::cout << "----------------------------------------------" << std::endl << "Package ID " << MemberID << ": " << std::endl << std::endl << name << std::endl << address << std::endl << city << ", " << state << " " << ZIPcode << std::endl << std::endl << "Cost: " << calculateCost() << std::endl <<  "----------------------------------------------" << std::endl;
}