// @author: Ivan Ng
// @date: 5/31/2026
// @brief: Implementation of the AxisAngleRotation class, representing a 3D rotation using an axis vector and an angle.

#include "AxisAngleRotation.hpp"

/**
 * @pre: None.
 * @post: Initializes axis_ to (0,0,0) and angle_ to 0.0.
 *        Sets type_ to "AXIS_ANGLE".
 */
AxisAngleRotation::AxisAngleRotation() : Rotation("AXIS_ANGLE"), axis_(), angle_(0.0) {
}

/**
 * @param axis: The rotation axis as a Vector3D.
 * @param angle: The rotation angle.
 * @post: Initializes members to the provided values.
 *        Sets type_ to "AXIS_ANGLE".
 */
AxisAngleRotation::AxisAngleRotation(const Vector3D& axis, double angle)
    : Rotation("AXIS_ANGLE"), axis_(axis), angle_(angle) {
}

/**
 * @pre: None.
 * @return: The value of axis_.
 */
Vector3D AxisAngleRotation::getAxis() const {
    return axis_;
}

/**
 * @pre: None.
 * @return: The value of angle_.
 */
double AxisAngleRotation::getAngle() const {
    return angle_;
}