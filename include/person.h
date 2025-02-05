#ifndef PERSON_H
#define PERSON_H

#include <iostream>
#include <address.h>
#include <string>

using namespace std;
class person
{
private:

    string firstname;
    string lastname;
    int id;
    string phone;
    address *addr;
    int addressCount;
public:
    person();
    person(string firstname,string lastname,int id,string phone,address add);
    void setId(int id);
    void setFirstName( string firstname);
    void setLastName( string lastname);
    void setPhone( string phone);
    string getFirstName();
    string getLastName();
    int getId();
    string getPhone();
    void input();
    void print();

};
#endif // PERSON_H
