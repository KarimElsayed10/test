#include "person.h"

person::person()
{
    addr=new address;
    addressCount=0;
}
person::person(string firstname,string lastname,int id,string phone,address add)
{
    addr=new address;
    addressCount=0;
    this->firstname=firstname;
    this->lastname=lastname;
    this->id=id;
    this->phone=phone;

}
void person::setFirstName( string firstname)
{
    this->firstname=firstname;
}
void person::setLastName( string lastname)
{
    this->lastname=lastname;
}
void person::setId(int id)
{
    this->id=id;
}
void person::setPhone( string phone)
{
    this->phone=phone;
}
string person::getFirstName()
{
    return firstname;
}
string person::getLastName()
{
    return lastname;
}
int person::getId()
{
    return id;
}
string person::getPhone()
{
    return phone;
}
void person::input()
{
    cout<<"Enter Person First Name   : "<<endl;
    cin>>firstname;
    cout<<"Enter Person Last Name   : "<<endl;
    cin>>lastname;
    cout<<"Enter your id Number : "<<endl;
    cin>>id;
    string street;
    string country;
    string governorate;
    int streetNumber;
    cout<< "Enter Your Street :"<<endl;
    cin>>street;
    cout<< "Enter  Country :"<<endl;
    cin>>country;
    cout<< "Enter  Governorate :"<<endl;
    cin>>governorate;
    cout<< "Enter  Street Number :"<<endl;
    cin>>streetNumber;
    address *new_address =new address(street,country,governorate,streetNumber);
    addr[addressCount]=*new_address;
    addressCount++;
    cout<<"\nRecord Saved to File......"<<endl<<endl<<endl<<endl;
}
void person::print()
{
    cout << "First Name: " << firstname << endl;
    cout << "Last Name: " << lastname << endl;
    addr->print();
}
