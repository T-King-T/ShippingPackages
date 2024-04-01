#include "Package.h"
#include <iostream>

static int MemberID = 0;

Package::Package()    //default constructor with default values
{
  name = "N/A";
  address = "N/A";
  city = "N/A";
  state = "N/A";
  ZIPcode = 00000;
  weight = 0.0;
  costPerOunce = 0.0;
}


//constructor with user defined values
Package::Package(const std::string & _name, const std::string & _address, const std::string & _city, const std::string & _state, int _ZIPcode, double _weight, double _costPerOunce)
{
  name = _name;
  address = _address;
  city = _city;
  state = _state;
  ZIPcode = _ZIPcode;
  setWeight(_weight);
  setCostPerOunce(_costPerOunce);
  MemberID++;
  
}


//function to set the weight, while checking if the given value is positive
void Package::setWeight(double _weight)
{
if (_weight > 0)    
  weight = _weight;
else
  {  
  std::cout << "Weight must be Postitive!" << std::endl;
  weight = 0;
    }
  }

//function to set the cost per ounce, while checking if the given value is positive
void Package::setCostPerOunce(double _costPerOunce)
{
  if (_costPerOunce > 0)
    costPerOunce = _costPerOunce;
  else
  {
    std::cout << "The Cost Per Ounce must be Postitive!" << std::endl;
    costPerOunce = 0;
    }
}

//return the cost of shipping from given values
double Package::calculateCost() const
{
  return costPerOunce * weight;
}


//return a package shipping label
void Package::printPackageInfo() const
{
  std::cout << "----------------------------------------------" << std::endl << "Package ID " << MemberID << ": " << std::endl << std::endl << name << std::endl << address << std::endl << city << ", " << state << " " << ZIPcode << std::endl << std::endl << "Cost: " << calculateCost() << std::endl <<  "----------------------------------------------" << std::endl;
}