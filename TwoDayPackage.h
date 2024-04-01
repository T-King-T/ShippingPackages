#ifndef TWODAYPACKAGE_H
#define TWODAYPACKAGE_H
#include <string>
#include "Package.h"

class TwoDayPackage : public Package
{
  protected:
//new data member
    double twoDayFee;    

  public:

//user-defined constructor
    TwoDayPackage(const std::string & _name, const std::string & _address, const std::string & _city, const std::string & _state, int _ZIPcode, double _weight, double _costPerOunce, double _twoDayFee);


//declare mutator functions
  void setFlatFee(double _twoDayFee);

//declare other funcitions
  double calculateCost() const;
  void printPackageInfo() const;
};



#endif