#define CATCH_CONFIG_RUNNER
#include"circle.hpp"
#include <catch.hpp>
#include <cmath>
#include <vector>
#include <algorithm>
#include <iostream>


std::vector <Circle> circles {{5.0f },{3.0f},{8.0f},
{1.0f} ,{5.0f}};
std::vector <Circle> result(circles.size());
 auto gr = [](Circle a) -> bool{return a.get_radius()>=4;};
   

TEST_CASE ("aufgabe_14","[ aufgabe_14 ]")
{   
REQUIRE (std::all_of(result.begin() ,result.end() , gr ));
}

int main ( int argc , char * argv [])
{
    auto i = std::copy_if(circles.begin(),circles.end(),result.begin(),gr);
    result.resize(std::distance(result.begin(),i));
    return Catch :: Session (). run (argc,argv);
}