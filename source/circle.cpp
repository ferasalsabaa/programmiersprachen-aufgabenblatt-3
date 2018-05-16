#define CATCH_CONFIG_RUNNER

#include "circle.hpp"
#include "vec2.hpp"
#include <cmath>
#include <iostream>

Circle::Circle() : radius_{0.0f} , center_{0.0f,0.0f} , color_circle_{0.0f,0.0f,0.0f}
{}
Circle::Circle(float radius , Vec2 center , Color color_circle) : radius_{radius}, center_{center}, color_circle_{color_circle}
{}
Circle::Circle(float radius , Vec2 center , string name,Color color_circle) : radius_{radius}, center_{center}, name_{name} ,color_circle_{color_circle} 
{}
Circle::Circle(string name) : radius_{0.0f} , center_{0.0f,0.0f}, name_{name}, color_circle_{0.0f,0.0f,0.0f}
{}
Vec2 Circle::get_center()
{
    return center_ ;
}
 float Circle::get_radius()
 {
     return radius_ ;
 }
float Circle::circumference() const
{
    return 2*M_PI*radius_;
}
Color Circle::get_color_circle()
{
    return color_circle_ ;
}

bool Circle::is_inside(Vec2 punct) const
{
    float distance;
    distance = (punct.x_- center_.x_)*(punct.x_- center_.x_) + (punct.y_- center_.y_)*(punct.y_- center_.y_);  
    if(distance <= radius_ * radius_)
    {
      return true ;
    }
    else
    {
      return false ;
    }
}
string Circle::get_name() const
{
    return name_;
}
std::ostream& Circle::print(std::ostream& os) const
{
    os << "radius : "<<radius_ <<" center :(" << center_.x_ << ", "<< center_.y_ <<")" << "  name: "<<name_ <<" color"<<"( "<<color_circle_.r<<" , "<<color_circle_.g<<" , "<<color_circle_.b<<" )"<<"\n";
    return os;
}
std::ostream& operator<<(std::ostream& os, Circle const& c)
  {
    std::ostream::sentry const ostream_sentry(os);
    return ostream_sentry ? c.print(os) : os;
  }