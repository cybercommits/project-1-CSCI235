#pragma once
// @author: Ivan Ng
// @date: 5/31/2026
// @brief: Declaration of the AxisAngleRotation class, representing a 3D rotation using an axis vector and an angle.

#include "Rotation.hpp"
#include "Vector3D.hpp"

class AxisAngleRotation : public Rotation {
private:
    Vector3D axis_; // The axis of rotation
    double angle_;  // The angle of rotation

public:
    /**
     * @pre: None.
     * @post: Initializes axis_ to (0,0,0) and angle_ to 0.0.
     *        Sets type_ to "AXIS_ANGLE".
     */
    AxisAngleRotation();

    /**
     * @param axis: The rotation axis as a Vector3D.
     * @param angle: The rotation angle.
     * @post: Initializes members to the provided values.
     *        Sets type_ to "AXIS_ANGLE".
     */
    AxisAngleRotation(const Vector3D& axis, double angle);

    /**
     * @pre: None.
     * @return: The value of axis_.
     */
    Vector3D getAxis() const;

    /**
     * @pre: None.
     * @return: The value of angle_.
     */
    double getAngle() const;
};