#define CATCH_CONFIG_RUNNER
#include <catch.hpp>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>

bool ten (int x)
{
   return (x==10);
}

std::vector <int> v_1 {1 ,2 ,3 ,4 ,5 ,6 ,7 ,8 ,9};
std::vector <int> v_2 {9 ,8 ,7 ,6 ,5 ,4 ,3 ,2 ,1};
std::vector <int> v_3 (9);

TEST_CASE ("filter alle vielfache von drei","[ erase ]")
{   
REQUIRE (std::all_of(v_3.begin() ,v_3.end() , ten ));
}

int main ( int argc , char * argv [])
{   
    auto plus = [](int a,int b) -> int {return a+b;};
    std::transform(v_1.begin(),v_1.end(),v_2.begin(),v_3.begin(),plus);
    return Catch :: Session (). run (argc,argv);
    }