#ifndef OVERNIGHTPACKAGE_H
#define OVERNIGHTPACKAGE_H
#include <string>
#include "Package.h"

class OvernightPackage : public Package
{
  protected:
//new data member
    double overnightFee;

  public:

//user-defined constructor
    OvernightPackage(const std::string & _name, const std::string & _address, const std::string & _city, const std::string & _state, int _ZIPcode, double _weight, double _costPerOunce, double _overnightFee);


//declare mutator functions
    void setOvernightFee(double _overnightFee);

//declare other funcitions
    double calculateCost() const;
    void printPackageInfo() const;
};



#endif