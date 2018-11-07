#include<iostream>
#include<box.h>

box::box()
{length=0;
width=0;
height=0;}

box::box(int l,int w,int h)
{
  length=l;
  width=w;
  height=h;
}

box::void setbox()
{
  area =length*width*height;
}

box::int getbox()
{
  return area;
}
