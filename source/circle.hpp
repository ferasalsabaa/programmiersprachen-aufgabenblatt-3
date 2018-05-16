#ifndef Circle_HPP
#define Circle_HPP
#include "vec2.hpp"
#include "color.hpp"
class Circle
{
  private:
  const float radius_;
  const Vec2 center_;
  const std::string name_;
  
  

  public:
  Color color_circle_;
  Circle();
  Circle(float radius, Vec2 center, Color color_circle_); 
  Circle(float radius, Vec2 center, string name_ , Color color_circle_);
  Circle(string name_);  
  Vec2 get_center();
  float get_radius ();
  float circumference() const;
  std::string get_name() const;
  Color get_color_circle();
  bool is_inside(Vec2 punct) const;
  std::ostream& print(std::ostream& os) const;

  
};
std::ostream& operator <<(std::ostream& os, Circle const& c);






#endif