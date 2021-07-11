#include "create.cpp"

// for recovering account credentials

void admin::recover()
{
  std::cout << "\n\t\tEnter your mobile number : ";
  std::string m;
  std::cin >> m;

  if (m == mob)
  {
    std::cout << "\t\tusername : " << uname << std::endl;
   
    std::cout << "\t\tpassword : " << passwd << std::endl;
 
  }
  else{
    std::cout<<"\n\t\tInvalid mobile number";rflag=1;flag=1;inv_key=5; return;
  }

}