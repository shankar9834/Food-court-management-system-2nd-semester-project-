#ifndef _ADMIN_H
#include <string>
#include <iostream>
#include <conio.h>
#include <vector>
#include <utility>

// logic for the admin class
class admin
{
private:
  std::string uname;
  char passwd[10];


  

public:
bool flag;
std::string mob;
  std::string mail;
  std::string stall_name;
  std::vector<std::pair<std::string, int>> items;
  void login();

  void create_acc();
  void recover();

} ad;


//  logic for guest class
class guest : public admin{
  public :

} g;



// food stall
class food_stall
{
  public:
  void view_stall();
    void food_stall1();
}fs
;
#endif