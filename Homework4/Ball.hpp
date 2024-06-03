#pragma once
#include "Painter.hpp"
#include "Point.hpp"
#include "Velocity.hpp"
#include "Color.hpp"

class Ball {
public:
    Ball();
    Ball(Velocity getVelocity, Point getCenter, double getRadius, double getMass, Color getColor); 
    
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
    double rd{}; //what else should be put here?
    double ms{};
};
