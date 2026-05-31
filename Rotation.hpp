#pragma once
// @author: Ivan Ng
// @date: 5/31/2026
// @brief: Declaration of the base class Rotation, representing a generic 3D rotation with a type identifier.

#include <string>

class Rotation {
protected:
    std::string type_; // The rotation type: "EULER", "AXIS_ANGLE", or "QUATERNION"

public:
    /**
     * @param type: The rotation type string.
     * @post: Initializes type_ to the provided value.
     */
    Rotation(const std::string& type);

    /**
     * @pre: None.
     * @return: The value of type_.
     */
    std::string getType() const;

    /**
     * @pre: None.
     * @post: Virtual destructor to ensure proper cleanup of derived
     *        classes when deleted through a base-class pointer.
     */
    virtual ~Rotation();
};