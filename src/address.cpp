#include "address.h"
address::address()
{

}
address::~address()
{

}
address::address(string street, string country, string governorate, int streetNumber)
{
    this->street = street;
    this->country = country;
    this->governorate = governorate;
    this->streetNumber = streetNumber;
}
void address::setStreet(string street)
{
    this->street = street;
}
void address::setCountry(string country)
{
    this->country = country;
}
void address::setGovernorate(string governorate)
{
    this->governorate = governorate;
}
void address::setStreetNumber(int streetNumber)
{
    this->streetNumber = streetNumber;
}
string address::getStreet()
{
    return street;
}
string address::getCountry()
{
    return country;
}
string address::getGovernorate()
{
    return governorate;
}
int address::getStreetNumber()
{
    return streetNumber;
}
void address::print()
{
    cout << "Street Name: " << street << endl;
    cout << "country Name: " << country << endl;
    cout << "governorate Name: " << governorate << endl;
    cout << "StreetNumber: " << streetNumber << endl;
}
