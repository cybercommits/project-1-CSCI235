// Name: Ivan Ng
// Date: 5/31/2026
// Description: Implementation of the base class Rotation, representing a generic 3D rotation with a type identifier.

#include "Rotation.hpp"

/**
 * @param type: The rotation type string.
 * @post: Initializes type_ to the provided value.
 */
Rotation::Rotation(const std::string& type) : type_(type) {
}

/**
 * @pre: None.
 * @return: The value of type_.
 */
std::string Rotation::getType() const {
    return type_;
}

/**
 * @pre: None.
 * @post: Virtual destructor to ensure proper cleanup of derived
 *        classes when deleted through a base-class pointer.
 */
Rotation::~Rotation() {
}