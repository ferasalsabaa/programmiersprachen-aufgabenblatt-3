#ifndef Circle_HPP
#define Circle_HPP
#include "vec2.hpp"
#include "color.hpp"
class Circle
{
  private:
  float radius_;
  Vec2 center_;
  string name_;
  
  
  

  public:
  Color color_circle_;
  
  Circle();
  Circle(float radius, Vec2 const& center, Color const& color_circle_); 
  Circle(float radius, Vec2 const& center, string const& name_ , Color const& color_circle_);
  Circle(string const& name_);  
  Circle(float radius);
  Vec2 get_center();
  float get_radius () const;
  float circumference() const;
  std::string get_name() const;
  Color get_color_circle();
  bool is_inside(Vec2 punct) const;
  std::ostream& print(std::ostream& os) const;

  
};
std::ostream& operator <<(std::ostream& os, Circle const& c);






#endif