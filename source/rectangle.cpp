#define CATCH_CONFIG_RUNNER

#include "rectangle.hpp"
#include "vec2.hpp"
#include <algorithm>
#include <cmath>
#include <iostream>

using namespace std;

Rectangle::Rectangle() : punct1_{0.0f , 0.0f} , punct2_{0.0f , 0.0f} , color_rectangle_{0.0f , 0.0f , 0.0f}
{}
Rectangle::Rectangle(Vec2 punct1 , Vec2 punct2, Color color_rectangle):
  color_rectangle_ {color_rectangle}

{
  max_.x_= max(punct1.x_,punct2.x_);
  max_.y_= max(punct1.y_,punct2.y_);
  min_.x_= min(punct1.x_,punct2.x_);
  min_.y_= min(punct1.y_,punct2.y_);
}

Vec2 Rectangle::get_max()
{
    return max_;
}
Vec2 Rectangle::get_min()
{
    return min_;
}

 float Rectangle::circumference() const
{
    float length;
    float width;
    length =fabs(max_.x_ - min_.x_);
    width = fabs(max_.y_ - min_.y_);
    return 2*length + 2*width;
}
Color Rectangle::get_color_rectangle()
{
    return color_rectangle_;
}
void Rectangle::draw(Window const& w1) const
{
   w1.draw_line(max_.x_,max_.y_,max_.x_,min_.y_,0.0f,0.0f,1.0f);
   w1.draw_line(min_.x_,min_.y_,min_.x_,max_.y_,0.0f,0.0f,1.0f);
   w1.draw_line(min_.x_,min_.y_,max_.x_,min_.y_,0.0f,0.0f,1.0f);
   w1.draw_line(min_.x_,max_.y_,max_.x_,max_.y_,0.0f,0.0f,1.0f);
}

void Rectangle::draw(Window const& w1, Color c1) const
{
   w1.draw_line(max_.x_,max_.y_,max_.x_,min_.y_,c1.r,c1.g,c1.b);
   w1.draw_line(min_.x_,min_.y_,min_.x_,max_.y_,c1.r,c1.g,c1.b);
   w1.draw_line(min_.x_,min_.y_,max_.x_,min_.y_,c1.r,c1.g,c1.b);
   w1.draw_line(min_.x_,max_.y_,max_.x_,max_.y_,c1.r,c1.g,c1.b);
}
bool Rectangle::is_inside(Vec2 punct) const
{
   if(punct.x_<= max_.x_ && punct.x_>= min_.x_ && punct.y_ <= max_.y_ && punct.y_ >= min_.y_)
   {
       return true;
   }
   else
   {
       return false;
   }
}