#include "circle.hpp"
#include "vec2.hpp"
#include"color.hpp"
#include<algorithm>
#include<vector>
#include<set>
#include<iostream>
bool operator <(Circle const& c1,Circle const& c2)   //wir brauchen immer dieese funktion für set
{
    return (c1.get_radius() < c2.get_radius()? true:false);
}
bool equal_name(string name,set<Circle> set_circle)
{
      bool test = false;
      for(auto& i : set_circle)
      {
        if(i.get_name() == name)
        {
            test = true;
            break;
        }
      }
    return test;  
}
/* bool another ()
{
    int i = 0;
    bool end;
    std::cout<<" Moeschten Sie anderen Name eingeben ? wenn ja geben Sie bitte 1 ein , wenn nein andern nummer bitte  ";
    std::cin>>i;
    if(i == 1){
        end = true;
    }
    else{
        end =false;
    }
    return end;
} */
int main()
{
    Circle c1;
    Vec2 v1{1,1};
    Vec2 v11{19,19};
    Color color1{1,0,0};
    Color color11{1,1,0};
    float r = 0.0f;
    float r1 = 0.1f;
   Circle c5{r, v1, "hhk" , color1};
    Circle c2{r1,v11,"hhk",color11};
  //  Circle c3{"ff"};
    //Circle c4{"hh"};
    std::cout<<c1;
   // std::cout<<c2;

set<Circle> set_circle;

vector<Circle> v2 {c2,c5};
for(auto& i :v2)
{
   auto s=set_circle.find(i);
   if(set_circle.end()!= s)
   {
       std::cout<<" es gibt zwei Circle haben den gleichen Name \n";
   }
   else
   {
       set_circle.insert(i);
   }
}

string input="";
std::cout << "Please enter a name for circle :\n>";
std::cin>>input;
if(equal_name(input,set_circle)==true)
{
  std:: cout<<"Sie haben schon diesen Name \n";
}
else
{   Circle newcircle (input);
    set_circle.insert(newcircle);
    cout<<"Neue Circle wurde schon erstellt ";

}


/*while(end==false)
{
 string input = "";
 cout << "Please enter a name for circle :\n>";
 getline(cin, input);
 if(equal_name(input,set_circle)==false)
 {
   int i = 0;
   std::cout<<"Sie haben diesn Name schon : \n"<<"wollen Sie anderen Name eingeben geben Sie bitte 1 ein";
   std::cin>>i;
   if(i==1)
   {
       end = false;
   }
   else
   {
       end = true;
   }
 }
 else
 {
   int i = 0;
   std::cout<<"wollen Sie anderen Name eingeben geben Sie bitte 1 ein \n";
   std::cin>>i;
   if(i==1)
   {
       end = false;
   }
   else
   {
       end = true;
   }
 }

} */


   

    return 0;
}

