#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cstdlib>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
#include <iterator>

std::vector<unsigned int> numbers(100); 
bool is_multiple_of_3(int i)            //fot test
{
  return (i % 3) == 0;  
}
bool is_not_multiple_of_3(int i)
{
  return (i % 3) != 0;  
}

//3.13
template <typename T, typename F> 
T filter(T container,F praedikat)
{
    T result;
    for(auto& i: container)
    {
        if(praedikat(i)==true)
        {
            result.push_back(i);
        }
    }
    return result;
  //  std::copy_if(container.begin(),container.end(),result.begin(),Praedikat);
  //  return result;
}

std::vector <int> v {1,2,3,4,5,6};
bool is_even(int n) {return n % 2 == 0; }



TEST_CASE ("filter alle vielfache von drei","[ erase ]")
{
REQUIRE (std::all_of(numbers.begin() ,numbers.end() , is_multiple_of_3 ));
}
TEST_CASE ("aufgabe_13","[ aufgabe_13 ]")
{
std::vector<int> all_even = filter(v,is_even);
REQUIRE (std::all_of(all_even.begin() ,all_even.end() , is_even ));
}

int main ( int argc , char * argv [])
{
    for( auto& i : numbers)
      {
        i = rand() % 100 +1;
      }
  numbers.erase( std::remove_if(numbers.begin(), numbers.end(), is_not_multiple_of_3), numbers.end() );
 for( auto& i : numbers)
      {
      std::cout << i << ", ";
      }
 std::vector<int> all_even = filter(v,is_even);
 std::cout<<"\n aufgabe 3.13 \n";
 for(auto& t:all_even)
 {  
    std::cout<<" "<< t;
 }

return Catch :: Session (). run ( argc , argv );
}