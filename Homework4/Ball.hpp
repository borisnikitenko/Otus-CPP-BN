#pragma once
#include "Color.hpp"
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Ball {
  public:
    Ball();
    Ball(Point mctr, double mrd, double mms, const Color& mclr, bool iscldbl);
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass();
    Color getColor() const;
    bool isCollidable() const;

  private:
    Velocity m_velocity;
    Point m_center;
    Color m_color;
    double m_rd = 0.;
    double m_ms = 0.;
    bool m_iscldbl = false;
};
