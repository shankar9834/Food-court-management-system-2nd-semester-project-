#include "recover.cpp"

#include <fstream>

void admin::login()
{
  std::cout << "\n\n\t\tLogin to continue\n ";
  std::cout << "\t\tEnter user name : ";
  std::string us;
  std::cin >> us;
  std::string ps;
  std::ifstream hin;
  hin.open("user_name.txt");
  std::string unm;
  hin>>unm;
  hin.close();
  std::ifstream hout;
  hout.open("created_acc.txt");
  std::string pass;
  hout>>pass;
  hout.close();
  
  flag = 0;
  std::cout << "\n\t\tEnter your password : ";
  std::cin >> ps;
  while (us != unm || ps != pass)
  {  
    std::cout << "\n\t\tinvalid username or password\n";
    std::cout << "\n\t\tif you want to recover account press 2  ";
    std::cout << "\n\t\tpress 1 to try again ";
    std::cout << "\n\t\tpress 0 to exit ";
    std::cout << "\n\t\tyour response : ";
    int t;

    std::cin >> t;
    if (t == 2)
    {
      recover();
      flag = 1;
      inv_key = 5;
      break;
    }
    else if (t == 1)
    {

      std::cout << "\t\tEnter user name : ";
      std::cin >> us;
      std::cout << "\n\t\tEnter your password : ";
      std::cin >> ps;
    }
    else
    { rflag=1;
      return;
    }
  }
  if (flag == 1)
  {
    return;
  }
  /*  if(flag==0)
  {
    return;
  }*/
  std::cout << "\n\n\t\tlogged in succesfully........ \n";
}

void admin::direct_login()
{

  std::cout << "\n\n\t\tLogin to continue\n ";
  std::cout << "\t\tEnter user name : ";
  std::string us1;
  std::cin >> us1;
  std::string ps1;
  flag = 0;
  std::cout << "\n\t\tEnter your password : ";
  std::cin >> ps1;

  std::ifstream hin, hin2;
  hin.open("user_name.txt");
  std::string nm, psw;
  hin >> nm;
  hin2.open("created_acc.txt");
  hin2 >> psw;
  

  if (us1== nm&&ps1==psw)
  {
    
    
    std::cout << "\n\n\t\tlogged in succesfully........ \n";
  }

  else
  {
    while (us1 != nm || ps1 != psw)
    {
      std::cout << "\n\t\tinvalid username or password ";
      std::cout << "\n\t\tpress 1 to try again ";
      std::cout << "\n\t\tpress 0 to exit ";
      std::cout << "\n\t\tyour response : ";
      int t;
      std::cin >> t;
      if (t == 1)
      {
        std::cout << "\t\tEnter user name : ";
        std::cin >> us1;
        std::cout << "\n\t\tEnter your password : ";
        std::cin >> ps1;
      }
      else if (t == 0)
      {  
        flag = 0;
        inv_key = 5;
        return;
      }
    }

    std::cout << "\n\n\t\tlogged in succesfully........ \n";
  }
}
