#ifndef PACKAGE_H
#define PACKAGE_H
#include <string>

class Package
{
    
//declare protected data members
  protected:
    std::string name, address, city, state;
    int ZIPcode;
    double weight, costPerOunce;
    static int MemberID;

  public:
    Package();    //default constructor

//user-defined constructor
    Package(const std::string & name, const std::string & address, const std::string & city, const std::string & state, int ZIPcode, double weight, double costPerOunce);

//declare mutator functions
    void setWeight(double _weight); 
    void setCostPerOunce(double _costPerOunce);

//declare other funcitions
    double calculateCost() const;
    void printPackageInfo() const;
};


#endif