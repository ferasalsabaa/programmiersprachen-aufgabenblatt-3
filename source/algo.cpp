#include<vector>
#include <iostream>
#include <array>
using namespace std;


void swap(int list [],int x,int y)
{
  int hilf = list[y];
  list[y] = list[x];
  list[x] = hilf;
}
void sort(int list [],int left,int right)
{
  int x=left;
  int y=right;
  int povit = (left + right) / 2;
if(left<right){
  while(x<=y)
  { 
     while(list[x]<list[povit]){x++;}
     while(list[y]>list[povit]){y--;}

     if(x<=y)
    {
      swap(list,x,y);
      x++;
      y--;
    }
  }
  sort(list,left,y);
  sort(list,x,right);}
}

int main()
{
  int list [] {50,9,6,7,8,6,0,77,2,0};
  sort(list,0,9);
  for(auto& a:list)
  {
    std::cout<<a<<" , ";
  }
  return 0;
}