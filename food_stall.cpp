#include<fstream>
#include "login.cpp"
/*#include "chinese.cpp"*/
/*#include "indian.cpp"*/



void food_stall::view_stall()
{
  std::cout<<"\n\t\tpress 1 to view chinese items ";
  std::cout<<"\n\t\tpress 2 to view indian items ";
   std::cout<<"\n\t\tpress 3 to view all items ";
std::cout<<"\n\t\tEnter your choice : ";
int rsp;
std::cin>>rsp;

if(rsp==1)
{
   
    c1.view_citem();

}
else if(rsp==2)
{
  
  i1.view_iitems();
}


else if(rsp==3){
   
std::cout<<"\n\t\t"<<stall_name;
std::ifstream vout;
vout.open("stalls.txt");
while(!vout.eof())
{std::string sm;
  getline(vout,sm);
  std::cout<<"\n\t\t"<<sm;
    
   }
  }




}






void food_stall::food_stall1()
{

     ad.login();
     if(ad.rflag==1)
     {
           std::cout<<"\n\t\tsomething wrong with your crendentials ,please create new account";
           return;
     }

  std::cout << "\n\n\t\tpress 1 to add your stall ";
  std::cout <<"\n\t\tpress 2 to view your stall ";
  //std::cout << "\n\t\tpress 3 to view your profile";
  std::cout << "\n\t\tEnter your choice: ";
  int ans;
  std::cin>>ans;
 
  if(ans==1)
  { std::cout<<"\n\t\tname of your stall : ";
      std::cin>>stall_name;
  std::ofstream out;
  out.open("stalls.txt",std::ios::app);
  std::cout<<"\n\t\tHow many items you are going to add in stall : ";
  std::cin>>ans;
  for(int i=0;i<ans;i++)
  {std::string stg;int p;
      std::cout<<"\n\t\tEnter the name of item(without white space) : ";
        std::cin>>stg;
       std::cout<<"\n\t\tEnter the price of added item ";
       std::cin>>p;
       out<<"\n";
       out<<stg<<"     : "<<p<<" Rs"; 

  }
  std::cout<<"\n\t\tItems added succesfully\n";
  out.close();
  }
  else if(ans==2)
  {
   view_stall();
   std::cout<<"\n";  
  }
 /* else if(ans==3)
  {

  }
  */

}