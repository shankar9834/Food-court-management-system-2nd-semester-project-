#include "indian.h"
#include <fstream>
#include<iostream>
#include<string>
void indian::view_iitems()
{
  std::ifstream voi;
  voi.open("indian.txt");
  while(!voi.eof())
  {
      std::string vai;
      getline(voi,vai);
      std::cout<<"\n\t\t"<<vai;

  } 
  voi.close();
}

