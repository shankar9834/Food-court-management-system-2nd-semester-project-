#include<fstream>
#include "login.cpp"



void food_stall::view_stall()
{

std::ifstream vout;
vout.open("stalls.txt");
while(!vout.eof())
{std::string sm;
  getline(vout,sm);
  std::cout<<"\n\t\t"<<sm;
    
}





}






void food_stall::food_stall1()
{
  std::cout << "\n\n\t\tpress 1 to add your stall ";
  std::cout <<"\n\t\tpress 2 to view your stall ";
  //std::cout << "\n\t\tpress 3 to view your profile";
  std::cout << "\n\t\tEnter your choice: ";
  int ans;
  std::cin>>ans;
  /*int res;
  std::cin >> res;
  if (res == 1)
  {
    std::cout << "\n\n\t\tEnter stall name you want to add : ";
    std::cin >> stall_name;
    std::cout << "\n\t\tEnter number of food items you want to add in stall : ";
    int res2;
    std::string s;
    std::cin >> res2;
    std::cout << "\n";
    std::cout << "\n\t\tEnter food items with price\n";
    int pr;
    for (int i = 0; i < res2; i++)
    {
      std::cin >> s;
      std::cin >> pr;
      items.push_back(make_pair(s, pr));
    }
    std::cout << "\n\n\t\titems added succesfully\n";
  }*/
  if(ans==1)
  {
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