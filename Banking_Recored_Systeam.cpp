/* This is a Banking Recored Systeam--->>
   Where we can store customer random account number(11 digits)
   How much blance customer have there account
   They can access there account individually
*/


// Header Files for each program --->>
#include <iostream>
#include <fstream>
#include <string>
#include <stdlib.h>
using namespace std;
int main(){

    // Declear All Varible ---->>
    string user_name,luser_name, password, lpassword, First_name, Last_name,address,filename, filename2;
    long int addhar_card, phone_number; int times=3;
    string option;
    fstream myfile;
    ifstream fileih;
    string usern, line,pw;

    cout<<"\nCentral Bank of C++ ------->> \n\n";

    cout<<"Wecome to Central Bank of C++,\n Choose Option --- >> Register / Login / Exit"<<endl;
    cout<<" -->>";
    cin>>option;

        if(option == "Register" || option == "register"){
            cout<<"First Name : ";
            cin>>First_name;
            cout<<"Last Name : ";
            cin>>Last_name;
            cout<<"Adhar Number : ";
            cin>>addhar_card;
            fflush(stdout);
            cout<<"Phone Number :";
            cin>>phone_number;

            // For Generating Random Account Number --->>
            // for(int i =0; i<10;i++){
            //     cout<<i.rand()<<endl;
            // }

            cout<<"User Name : ";
            cin>>user_name;
            cout<<"Password : ";
            cin>>password;

            filename = user_name +".txt";

            
            myfile.open(filename, ios::app);
            if(myfile.is_open()){
                myfile<<user_name<<endl;
                myfile<<password<<endl;
                myfile.close();
            }

        }else if(option == "Login" || option == "login"){
            cout<<"User Name : ";
            cin>>luser_name;
            
            filename2 = luser_name+".txt";
            cout<<"Password : ";
            cin>>lpassword;

            fileih.open(filename2.c_str());
            getline(fileih,usern);
            getline(fileih,pw);
            if(luser_name == usern && lpassword == pw ){
                cout<<"You Succes fully loged in"<<endl;
            }else {
            cout<<"File is not exits"<<endl;
            }
        }
    return 0;
}