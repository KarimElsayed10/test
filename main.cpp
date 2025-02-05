#include <iostream>
#include <string.h>
#include <ContactBook.h>
using namespace std;
int main()
{
    ContactBook c(100);
    int ch;
    do
    {
        cout<<"--------------------------------------"<<endl;
        cout<<"\t\t\t\Contact BOOK Application"<<endl;
        cout<<"::::::::::::::: PROGRAM MENU :::::::::::::::"<<endl;
        cout<<"0. Exit\n";
        cout<<"1. Add a New Person"<<endl;
        cout<<"2. Delete a Person"<<endl;
        cout<<"3. Search about Person"<<endl;
        cout<<"4. Edit Person"<<endl;
        cout<<"5. Display All Saved Contacts"<<endl;
        cout<<"Enter Your Choice  "<<endl;
        cin>>ch;
        system ("cls");
        cout<<"-------------------------------------\n";
        cout<<endl<<endl;
        switch(ch)
        {
        case 1:
            c.addContact();
            break;
        case 2:
            c.deleteContact();
            break;
        case 3:
            c.searchContact();
            break;
        case 4:
            c.editContact();
            break;
        case 5:
            c.printAll();
            break;
        }
    }
    while(ch);
    return 0;
}
