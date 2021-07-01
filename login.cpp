#include "recover.cpp"


void admin::login()
{
  std::cout << "\n\n\t\tLogin to continue\n ";
  std::cout << "\t\tEnter user name : ";
  std::string us;
  std::cin >> us;
  std::string ps;
   flag = 0;
  std::cout << "\n\t\tEnter your password : ";
  std::cin >> ps;
  while (us != uname || ps != passwd)
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
      inv_key=5;
      break;
    }
    else if(t==1)
    {

      std::cout << "\t\tEnter user name : ";
      std::cin >> us;
      std::cout << "\n\t\tEnter your password : ";
      std::cin >> ps;
    }
    else{
      return ;
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





