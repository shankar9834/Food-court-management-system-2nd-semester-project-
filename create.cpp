#include "admin.h"

#include <fstream>

// below is the logic for creation of new account

void admin::create_acc()
{
  std::ofstream hout;
  hout.open("user_name.txt");
  std::cout << "\n\t\tEnter your mobile number : ";
  std::cin >> mob;
  std::cout << "\n\t\tEnter user name you want to set : ";
  std::cin >> uname;
  hout << uname;
  std::cout << "\n\t\tEnter password you want to set(must be 10 charactered ): ";
  hout.close();
  std::ofstream sout;
  sout.open("created_acc.txt");

  for (int i = 0; i <= 9; i++)
  {
    passwd[i] = getch();
    sout << passwd[i];
    std::cout << "$";
  }
    sout.close();
  std::cout << std::endl;
  
}