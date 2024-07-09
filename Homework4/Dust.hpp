#pragma once
#include "Color.hpp"
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"

class Dust {
  public:
    Dust();
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    Color getColor() const;
    double getRadius() const;
    double getLifetime() const;

  private:
    Velocity d_velocity;
    Point d_center;
    Color d_color;
    double d_radius = 0.;
    double d_lifetime = 0.;
};
