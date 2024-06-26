#include "Ball.hpp"
#include <cmath>

Ball::Ball() = default;

/**
 * Задает скорость объекта
 * @param velocity новое значение скорости
 */
void Ball::setVelocity(const Velocity& velocity) {
    // TODO: место для доработки
    m_velocity = velocity;
}

/**
 * @return скорость объекта
 */
Velocity Ball::getVelocity() const {
    // TODO: место для доработки
    //Velocity();
    //return Velocity::Velocity();
    return m_velocity;
}

/**
 * Setting the object color
 */

void Ball::setColor(const Color& color) {
    Color::Color();
   }

/**
 * Getting the object color
 */

Color Ball::getColor() const {
    //Color color;
    return Color::Color();
} 

/**
 * @brief Выполняет отрисовку объекта
 * @details объект Ball абстрагирован от конкретного
 * способа отображения пикселей на экране. Он "знаком"
 * лишь с интерфейсом, который предоставляет Painter
 * Рисование выполняется путем вызова painter.draw(...)
 * @param painter контекст отрисовки
 */
void Ball::draw(Painter& painter) const {
    // TODO: место для доработки
    //painter.draw(getCenter, getRadius, getColor);
    painter.draw(getCenter(), getRadius(), getColor());
}


/**
 * Задает координаты центра объекта
 * @param center новый центр объекта
 */
void Ball::setCenter(const Point& center) {
    // TODO: место для доработки
    Point::Point();
}

/**
 * @return центр объекта
 */
Point Ball::getCenter() const {
    // TODO: место для доработки
    //Point center;
    return Point::Point();
}

/**
 * @brief Возвращает радиус объекта
 * @details обратите внимание, что метод setRadius()
 * не требуется
 */
double Ball::getRadius() const {
    // TODO: место для доработки
    //double radius = 0;
    return 30.0;
}

/**
 * @brief Возвращает массу объекта
 * @details В нашем приложении считаем, что все шары
 * состоят из одинакового материала с фиксированной
 * плотностью. В этом случае масса в условных единицах
 * эквивалентна объему: PI * radius^3 * 4. / 3.
 */
double Ball::getMass() const {
    // TODO: место для доработки
    //double PI(3.1415926);
    //double mass = M_PI * getRadius()^3 * 4. / 3;
    double mass(30.0);
    return mass;
}
