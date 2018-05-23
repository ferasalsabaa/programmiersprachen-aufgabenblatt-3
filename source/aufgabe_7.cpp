#define CATCH_CONFIG_RUNNER
#include"circle.hpp"
#include "vec2.hpp"
#include "color.hpp"
#include<catch.hpp>
#include<algorithm>
#include<iostream>
#include<vector>
using namespace std;
bool operator <(Circle const& c1,Circle const& c2)
{
    return (c1.get_radius() < c2.get_radius()? true:false);
}
Vec2 v1 {2.2f,2.2f};
Color color1 {0.0f};
Circle circle1 {22,v1,"circle1",color1};
Circle circle2 {5,v1,"circle2",color1};

std::vector<Circle> sorted_circles {circle1,circle2};


TEST_CASE ("test_sorted_circle","[sorted_circle]")
{
  REQUIRE (std::is_sorted(sorted_circles.begin(),sorted_circles.end()));
}
int main()
{
    sort(sorted_circles.begin(), sorted_circles.end(), 
    [](const Circle & a, const Circle & b) -> bool
  { 
    return (a < b? true:false); 
  }
       );

    return Catch::Session().run();
    return 0;
}