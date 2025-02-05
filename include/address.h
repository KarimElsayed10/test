#ifndef ADDRESS_H
#define ADDRESS_H
#include <iostream>
using namespace std;
class address
{
private:
    string street;
    string country;
    string governorate;
    int streetNumber;
public:
    address();
    ~address();
    address(string street, string country, string governorate, int streetNumber);
    void setStreet(string street);
    void setCountry(string country);
    void setGovernorate(string governorate);
    void setStreetNumber(int streetNumber);
    string getStreet();
    string getCountry();
    string getGovernorate();
    int getStreetNumber();
    void print();
};
#endif // ADDRESS_H
