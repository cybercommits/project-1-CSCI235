#pragma once
// Name: Ivan Ng
// Date: 5/31/2026
// Description: Declaration of the QuaternionRotation class, representing a 3D rotation using a quaternion (w, x, y, z).

#include "Rotation.hpp"

class QuaternionRotation : public Rotation {
private:
    double w_; // Scalar component
    double x_; // x component
    double y_; // y component
    double z_; // z component

public:
    /**
     * @pre: None.
     * @post: Initializes w_, x_, y_, z_ to 0.0. Sets type_ to "QUATERNION".
     */
    QuaternionRotation();

    /**
     * @param w: The scalar component.
     * @param x: The x component.
     * @param y: The y component.
     * @param z: The z component.
     * @post: Initializes members to provided values. Sets type_ to "QUATERNION".
     */
    QuaternionRotation(double w, double x, double y, double z);

    /**
     * @pre: None.
     * @return: The value of w_.
     */
    double getW() const;

    /**
     * @pre: None.
     * @return: The value of x_.
     */
    double getX() const;

    /**
     * @pre: None.
     * @return: The value of y_.
     */
    double getY() const;

    /**
     * @pre: None.
     * @return: The value of z_.
     */
    double getZ() const;
};