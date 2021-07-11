#include "chinese.h"
#include <fstream>
#include<iostream>
#include<string>
void chinese::view_citem()
{
  std::ifstream vou;
  vou.open("chinese.txt");
  while(!vou.eof())
  {
      std::string val;
      getline(vou,val);
      std::cout<<"\n\t\t"<<val;

  } 
  vou.close();
}
