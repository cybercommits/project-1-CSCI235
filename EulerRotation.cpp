// @author: Ivan Ng
// @date: 5/31/2026
// @brief: Implementation of the EulerRotation class, representing a 3D rotation using Euler angles (roll, pitch, yaw).

#include "EulerRotation.hpp"

/**
 * @pre: None.
 * @post: Initializes roll_, pitch_, yaw_ to 0.0. Sets type_ to "EULER".
 */
EulerRotation::EulerRotation() : Rotation("EULER"), roll_(0.0), pitch_(0.0), yaw_(0.0) {
}

/**
 * @param roll: The rotation angle around the x-axis.
 * @param pitch: The rotation angle around the y-axis.
 * @param yaw: The rotation angle around the z-axis.
 * @post: Initializes members to the provided values. Sets type_ to "EULER".
 */
EulerRotation::EulerRotation(double roll, double pitch, double yaw)
    : Rotation("EULER"), roll_(roll), pitch_(pitch), yaw_(yaw) {
}

/**
 * @pre: None.
 * @return: The value of roll_.
 */
double EulerRotation::getRoll() const {
    return roll_;
}

/**
 * @pre: None.
 * @return: The value of pitch_.
 */
double EulerRotation::getPitch() const {
    return pitch_;
}

/**
 * @pre: None.
 * @return: The value of yaw_.
 */
double EulerRotation::getYaw() const {
    return yaw_;
}