#include "admin.h"


// below is the logic for creation of new account

void admin::create_acc()
{
  std::cout << "\n\t\tEnter your mobile number : ";
  std::cin >> mob;
  std::cout << "\n\t\tEnter user name you want to set : ";
  std::cin >> uname;
  std::cout << "\n\t\tEnter password you want to set(must be 10 charactered ): ";
  for (int i = 0; i <= 9; i++)
  {
    passwd[i] = getch();

    std::cout << "$";
  }

  std::cout << std::endl;
  login();
}