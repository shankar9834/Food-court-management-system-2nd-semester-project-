#ifndef _ADMIN_H
#include <string>
#include <iostream>
#include <conio.h>
#include <vector>
#include <utility>
#include "indian.cpp"
#include "chinese.cpp"

// logic for the admin class

class admin
{
private:
  std::string uname;
  char passwd[10];

public:
  bool flag;
  bool rflag=0;
  int inv_key = 0;
  std::string mob;
  std::string mail;
  std::string stall_name;
 
  void login();
  void direct_login();

  void create_acc();
  void recover();

} ad;

//  logic for guest class


class customer : public admin
{
public:
  std::string name;
  std::string mob1;
} g;


// food stall


class food_stall
{
  private:
   indian i1;
    chinese c1;
public:
    std::string stall_name;
   
  void view_stall();
  void food_stall1();
  
} fs;
#endif