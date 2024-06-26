#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"
#include "Color.hpp"

class Ball {
public:
    Ball();
    Ball(
      Velocity mvlct, 
      Point mctr, 
      double mrd, 
      double mms, 
      Color mclr) : 
      m_velocity(mvlct), 
      m_center(mctr), 
      m_color(mclr), 
      m_rd(mrd), 
      m_ms(mms){}; 
    
    //?? what the func should take?
    
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    void setColor(const Color& color);
    Color getColor() const;

private:
    Velocity m_velocity;
    Point m_center;
    Color m_color;
    double m_rd; //what else should be put here?
    double m_ms;
};
