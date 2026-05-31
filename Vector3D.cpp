// Name: Ivan Ng
// Date: 5-30-2026
// Description: Implementation of the Vector3D class, representing a 3D vector with x, y, z components.

#include "Vector3D.hpp"
#include <cmath>
#include <iostream>
#include <iomanip>

/**
 * @pre: None.
 * @post: Initializes x_, y_, and z_ to 0.0.
 */
Vector3D::Vector3D() : x_(0.0), y_(0.0), z_(0.0) {
}

/**
 * @param x: The value to set for x_.
 * @param y: The value to set for y_.
 * @param z: The value to set for z_.
 * @post: Initializes x_, y_, and z_ to the provided values.
 */
Vector3D::Vector3D(double x, double y, double z) : x_(x), y_(y), z_(z) {
}

/**
 * @pre: None.
 * @return: The value of x_.
 */
double Vector3D::getX() const {
    return x_;
}

/**
 * @param x: The new value for x_.
 * @post: Updates x_.
 */
void Vector3D::setX(double x) {
    x_ = x;
}

/**
 * @pre: None.
 * @return: The value of y_.
 */
double Vector3D::getY() const {
    return y_;
}

/**
 * @param y: The new value for y_.
 * @post: Updates y_.
 */
void Vector3D::setY(double y) {
    y_ = y;
}

/**
 * @pre: None.
 * @return: The value of z_.
 */
double Vector3D::getZ() const {
    return z_;
}

/**
 * @param z: The new value for z_.
 * @post: Updates z_.
 */
void Vector3D::setZ(double z) {
    z_ = z;
}

/**
 * @pre: None.
 * @return: The Euclidean magnitude: sqrt(x_^2 + y_^2 + z_^2).
 */
double Vector3D::calculateMagnitude() const {
    // Sum the squares of each component then take the square root
    return std::sqrt(x_ * x_ + y_ * y_ + z_ * z_);
}

/**
 * @pre: None.
 * @post: If magnitude > 0, divides each component by the magnitude
 *        to produce a unit vector. If magnitude == 0, does nothing.
 */
void Vector3D::normalize() {
    double magnitude = calculateMagnitude();
    // Only divide if the vector has non-zero length to avoid division by zero
    if (magnitude > 0) {
        x_ /= magnitude;
        y_ /= magnitude;
        z_ /= magnitude;
    }
}

/**
 * @pre: None.
 * @post: Prints the vector in the format:
 *        Vector[x, y, z]
 *        with values to 2 decimal places, followed by a newline.
 */
void Vector3D::display() const {
    // Set fixed-point notation with 2 decimal places
    std::cout << std::fixed << std::setprecision(2);
    std::cout << "Vector[" << x_ << ", " << y_ << ", " << z_ << "]" << std::endl;
}