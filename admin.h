#ifndef _ADMIN_H
#include <string>
#include <iostream>
#include <conio.h>
#include <vector>
#include <utility>
class admin
{
private:
  std::string uname;
  char passwd[10];

protected:
  std::string mob;
  std::string mail;

public:
  std::string stall_name;
  std::vector<std::pair<std::string, int>> items;
  void login();
  void food_stall();

  void create_acc()
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
  void recover()
  {
    std::cout << "\n\t\tEnter your mobile number : ";
    std::string m;
    std::cin >> m;
    if (m == mob)
    {
      std::cout << "\t\tusername : " << uname << std::endl;
      std::cout << "\t\tpassword : " << passwd << std::endl;
    }
  }

} ad;



//logic for login
void admin::login()
{
  std::cout << "\n\n\t\tLogin to continue\n ";
  std::cout << "\t\tEnter user name : ";
  std::string us;
  std::cin >> us;
  std::string ps;
  bool flag = 0;
  std::cout << "\n\t\tEnter your password : ";
  std::cin >> ps;
  while (us != uname || ps != passwd)
  {
    std::cout << "\n\t\tinvalid username or password\n";
    std::cout << "if you want to recover account press 2 : ";
    int t;
    std::cin >> t;
    if (t == 2)
    {
      recover();
      flag = 1;
      break;
    }
    else
    {

      std::cout << "\t\tEnter user name : ";
      std::cin >> us;
      std::cout << "\n\t\tEnter your password : ";
      std::cin >> ps;
    }
  }
  if (flag == 1)
  {
    return;
  }
  std::cout << "\n\n\t\tlogged in succesfully........ \n";
}


// food stall logic
void admin::food_stall()
{
  std::cout << "\n\n\t\tpress 1 to add your stall ";
  std::cout << "\n\t\tpress 2 to view your profile";
  std::cout << "\n\t\tEnter your choice: ";
  int res;
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
  }
}

// add logic for guest class
class guest : public admin{
  public :

} g;

#endif