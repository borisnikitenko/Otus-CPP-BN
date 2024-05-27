#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"
#include "Color.hpp"

class Ball {
public:
    void setVelocity(const Velocity& velocity);
    Velocity getVelocity() const;
    void draw(Painter& painter) const;
    void setCenter(const Point& center);
    Point getCenter() const;
    double getRadius() const;
    double getMass() const;
    void setColor(const Color& color);
    Color getColor() const;
};