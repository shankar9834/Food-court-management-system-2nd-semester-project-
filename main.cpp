#include<iostream>
#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
#include<fstream>
#include "admin.h"
using namespace std;
int main()
{int choice;

    cout<<"\n\n\n\t\tWelcome to Food Court Management system  ";
    cout<<"\n\n\n\t\tPlease press enter to continue ";
    getch();
    cout<<"\n\n\t\t******************************************";
    cout<<"\n\n\t\tPress 1 for Admin portal ";
    cout<<"\n\t\tPress 2 for Food stall portal ";
    cout<<"\n\t\tPress 3 for Customer portal ";
    cout<<"\n\n\t\tEnter your choice : ";

             cin>>choice;
             
                cout<<"\n\n\t\t******************************************";
     // create logic for entered choice
   if(choice==1)
   {cout<<"\n\n\t\tWELCOME TO ADMIN PORTAL ";
   
   
   
   
    cout<<"\n\n\t\tPress 1 to create acoount ";
    cout<<"\n\t\tPress 0 to exit ";
    cout<<"\n\t\tEnter your choice : ";
    int tmp;
    cin>>tmp;
    if(tmp==1)
    {   ad.create_acc();
        ad.food_stall();
          
  
            
    }
    if(tmp==0) return 0;
    
   }
   else if(choice==3)
   {
     cout<<"\n\n\t\tWELCOME TO GUEST PORTAL ";
     cout<<"\n\t\tEnter your mobile number to continue : ";
     string mbe;
     cin>>mbe;

   }
}