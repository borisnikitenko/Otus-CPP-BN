#include "Dust.hpp"

Dust::Dust() = default;

/*set the velocity of the object*/

void Dust::setVelocity(const Velocity& velocity) {
	d_velocity = velocity;
}

/*return the velocity of the object*/

Velocity Dust::getVelocity() const {
    return d_velocity;
}

/*set the center of the object*/

void Dust::setCenter(const Point& center) {
    d_center = center;
}

/*get the center of the object*/

Point Dust::getCenter() const {
    return d_center;
}

/*get the object color*/

Color Dust::getColor() const {
    return d_color;
}

/*get the object radius*/

double Dust::getRadius() const {
    return d_radius;
}

/*get the lifetime*/

double Dust::getLifetime() const {
    return d_lifetime;
}

/*draw the object*/

void Dust::draw(Painter& painter) const {
    painter.draw(getCenter(), getRadius(), getColor));
}
