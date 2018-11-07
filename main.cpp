#include<iostream>
#include"box.h"
using namespace std;

int main(int argc, char const *argv[])
{
  box obj(3,6,8);
  obj.setbox();
  cout<<"value of area ="<<obj.getbox();
  return 0;
}
