#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>
std::vector<unsigned int> numbers(100); 
bool is_multiple_of_3(int i)
{
  return (i % 3) == 0;  
}
bool is_not_multiple_of_3(int i)
{
  return (i % 3) != 0;  
}

TEST_CASE ("filter alle vielfache von drei","[ erase ]")
{
    
// ihre Loesung :
// ...
REQUIRE (std::all_of(numbers.begin() ,numbers.end() , is_multiple_of_3 ));
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
return Catch :: Session (). run ( argc , argv );
}