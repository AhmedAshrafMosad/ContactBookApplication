#include <iostream>
#include "ContactBook.h"
#include <string.h>
using namespace std;

int main()
{
    int c=-1;
    ContactBook contact(100);
    while(c)
    {
        cout<<"********************************\n";
        cout<<"1.Show All Contacts            *\n";
        cout<<"2.Add New Contact              *\n";
        cout<<"3.Search about Contact         *\n";
        cout<<"4.Edit Exiting Contact         *\n";
        cout<<"5.Delete Exiting Contact       *\n";
        cout<<"0.Quit                         *\n";
        cout<<"********************************\n";
        cout<<"Enter your choice : ";
        cin>>c;
        cout<<"*******************************\n";
        switch(c)
        {
        case 1:
            {
                  contact.print();
                  break;
            }

        case 2:
            {
                  contact.add_user();
                  break;
            }

        case 3:
            {
                 string key;
                cout<<"Enter your Keyboard to find: ";
                cin.ignore();
                getline(cin,key);
                contact.showAll(key);
                break;
            }

        case 4:
            {
                int edit_id=0;
                cout<<"Enter User Id to Edit: ";
                cin>>edit_id;
                contact.edit_user(edit_id);
                break;
            }

        case 5:
            {
                  int del_id=0;
                 contact.del_user(del_id);
                 break;

            }

        }

    }
    cout<<"Thanks! "<<endl;


    return 0;
}
