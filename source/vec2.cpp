#define CATCH_CONFIG_RUNNER

#include "vec2.hpp"

#include <cmath>
#include <iostream>

  Vec2::Vec2() : x_{0.0}, y_{0.0}
  {}

  Vec2::~Vec2()
   {}

  Vec2::Vec2(float x, float y) 
  {
    x_ = x;
    y_ = y;
  }

    Vec2& 
    Vec2::operator +=( Vec2 const& v )
    {
      x_ +=  v.x_;
      y_ +=  v.y_;
      return *this;
    }
    Vec2& 
    Vec2::operator -=( Vec2 const& v )
    {
      x_ -=  v.x_;
      y_ -=  v.y_;
      return *this;
    }
    
    Vec2&
    Vec2::operator *= (float s)
    {
      x_ *= s;
      y_ *= s;
      return *this;
    }

    Vec2&
    Vec2::operator /= (float s)
    {
      if(s == 0)
      {
        std :: cout << "die Zahl soll grosser als 0 sein" ;
      }
      else
      {
      x_ /= s ;
      y_ /= s ;
      }
      return *this;
    }
Vec2 operator+( Vec2 const & u , Vec2 const & v )
{
  Vec2 vector (u);
  vector += v;
  return vector;
}
Vec2 operator-( Vec2 const & u , Vec2 const & v )
{
  Vec2 vector(u);
  vector -= v;
  return vector;
}
Vec2 operator *( Vec2 const & v , float s )
{
  Vec2 vector (v);
  vector *= s;
  return vector;
}
Vec2 operator /( Vec2 const & v , float s )
{
  Vec2 vector (v);
  vector /= s;
  return vector;
}
Vec2 operator *( float s , Vec2 const & v )
{
  return v*s;
}
