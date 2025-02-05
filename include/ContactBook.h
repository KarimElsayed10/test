#ifndef CONTACTBOOK_
#define CONTACTBOOK_
#include <iostream>
#include <person.h>
#include <string>
class ContactBook
{
private:
    int count,size,delete1,edit1,Search;
     person *users;
public:
    ContactBook();
    ContactBook(int count);
    void addContact();
    void deleteContact();
    void searchContact();
    void editContact();
     void printAll();
    void setCount(int count);
    int getCount();
    virtual ~ContactBook();

};

#endif
