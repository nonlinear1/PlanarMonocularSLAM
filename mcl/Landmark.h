#pragma once
#include <Eigen/Dense>
#include "utils.h"

namespace mcl {
    struct Landmark {
        unsigned int id;
        Eigen::Vector3f position;
        Eigen::Matrix<float, mcl::APPEARANCE_SIZE, 1> appearance;
    };
}
