#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>



TEST_CASE ("filter alle vielfache von drei","[ erase ]")
{
    
// ihre Loesung :
// ...
//REQUIRE (std::all_of(v.begin() ,v.end() , is_multiple_of_3 ));
}
int main ( int argc , char * argv [])
{
     vector<unsigned int> numbers(100);   
     for( auto& i : numbers)
      {
        i = rand() % 100 +1;
      // cout << i << ", ";
      }
return Catch :: Session (). run ( argc , argv );
}