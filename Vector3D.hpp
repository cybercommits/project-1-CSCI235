#pragma once
// @author: Ivan Ng
// @date: 5/30/2026
// @brief: Declaration of the Vector3D class, representing a 3D vector with x, y, z components.

#include <string>

class Vector3D {
private:
    double x_;
    double y_;
    double z_;

public:
    /**
     * @pre: None.
     * @post: Initializes x_, y_, and z_ to 0.0.
     */
    Vector3D();

    /**
     * @param x: The value to set for x_.
     * @param y: The value to set for y_.
     * @param z: The value to set for z_.
     * @post: Initializes x_, y_, and z_ to the provided values.
     */
    Vector3D(double x, double y, double z);

    /**
     * @pre: None.
     * @return: The value of x_.
     */
    double getX() const;

    /**
     * @param x: The new value for x_.
     * @post: Updates x_.
     */
    void setX(double x);

    /**
     * @pre: None.
     * @return: The value of y_.
     */
    double getY() const;

    /**
     * @param y: The new value for y_.
     * @post: Updates y_.
     */
    void setY(double y);

    /**
     * @pre: None.
     * @return: The value of z_.
     */
    double getZ() const;

    /**
     * @param z: The new value for z_.
     * @post: Updates z_.
     */
    void setZ(double z);

    /**
     * @pre: None.
     * @return: The Euclidean magnitude: sqrt(x_^2 + y_^2 + z_^2).
     */
    double calculateMagnitude() const;

    /**
     * @pre: None.
     * @post: If magnitude > 0, divides each component by the magnitude
     *        to produce a unit vector. If magnitude == 0, does nothing.
     */
    void normalize();

    /**
     * @pre: None.
     * @post: Prints the vector in the format:
     *        Vector[x, y, z]
     *        with values to 2 decimal places, followed by a newline.
     */
    void display() const;
};