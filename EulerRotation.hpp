#pragma once
// Name: Ivan Ng
// Date: 5/31/2026
// Description: Declaration of the EulerRotation class, representing a 3D rotation using Euler angles (roll, pitch, yaw).

#include "Rotation.hpp"

class EulerRotation : public Rotation {
private:
    double roll_;  // Rotation angle around the x-axis
    double pitch_; // Rotation angle around the y-axis
    double yaw_;   // Rotation angle around the z-axis

public:
    /**
     * @pre: None.
     * @post: Initializes roll_, pitch_, yaw_ to 0.0. Sets type_ to "EULER".
     */
    EulerRotation();

    /**
     * @param roll: The rotation angle around the x-axis.
     * @param pitch: The rotation angle around the y-axis.
     * @param yaw: The rotation angle around the z-axis.
     * @post: Initializes members to the provided values. Sets type_ to "EULER".
     */
    EulerRotation(double roll, double pitch, double yaw);

    /**
     * @pre: None.
     * @return: The value of roll_.
     */
    double getRoll() const;

    /**
     * @pre: None.
     * @return: The value of pitch_.
     */
    double getPitch() const;

    /**
     * @pre: None.
     * @return: The value of yaw_.
     */
    double getYaw() const;
};