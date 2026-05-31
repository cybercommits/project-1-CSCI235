// Name: Ivan Ng
// Date: 5/31/2026
// Description: Implementation of the QuaternionRotation class, representing a 3D rotation using a quaternion (w, x, y, z).

#include "QuaternionRotation.hpp"

/**
 * @pre: None.
 * @post: Initializes w_, x_, y_, z_ to 0.0. Sets type_ to "QUATERNION".
 */
QuaternionRotation::QuaternionRotation()
    : Rotation("QUATERNION"), w_(0.0), x_(0.0), y_(0.0), z_(0.0) {
}

/**
 * @param w: The scalar component.
 * @param x: The x component.
 * @param y: The y component.
 * @param z: The z component.
 * @post: Initializes members to provided values. Sets type_ to "QUATERNION".
 */
QuaternionRotation::QuaternionRotation(double w, double x, double y, double z)
    : Rotation("QUATERNION"), w_(w), x_(x), y_(y), z_(z) {
}

/**
 * @pre: None.
 * @return: The value of w_.
 */
double QuaternionRotation::getW() const {
    return w_;
}

/**
 * @pre: None.
 * @return: The value of x_.
 */
double QuaternionRotation::getX() const {
    return x_;
}

/**
 * @pre: None.
 * @return: The value of y_.
 */
double QuaternionRotation::getY() const {
    return y_;
}

/**
 * @pre: None.
 * @return: The value of z_.
 */
double QuaternionRotation::getZ() const {
    return z_;
}