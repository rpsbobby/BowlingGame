//
// Created by robert on 11/23/25.
//

#ifndef BOWLINGGAMEKATA_TESTS_UTILS_HPP
#define BOWLINGGAMEKATA_TESTS_UTILS_HPP

#include <vector>
#include "Frame.hpp"
// ---------------------------------------------
// HELPER FUNCTIONS
// ---------------------------------------------
enum class FrameFactoryHelper {
    STRIKE = 1,
    SPARE,
    COMPLETE,
    INCOMPLETE
};

inline std::vector<Frame> make_strike() {
    return std::vector<Frame>(10, Frame{10, 0});
}

inline std::vector<Frame> make_complete() {
    return std::vector<Frame>(10, Frame{5, 4});
}

inline std::vector<Frame> make_incomplete() {
    return std::vector<Frame>(9, Frame{5, 4});
}

inline std::vector<Frame> make_spare() {
    return std::vector<Frame>(10, Frame{5, 5});
}

inline std::vector<Frame> make_frames(FrameFactoryHelper option) {
    switch (option) {
        case FrameFactoryHelper::STRIKE:
            return make_strike();
        case FrameFactoryHelper::SPARE:
            return make_spare();
        case FrameFactoryHelper::COMPLETE:
            return make_complete();
        case FrameFactoryHelper::INCOMPLETE:
            return make_incomplete();
        default:
            return {};
    }
}

// ---------------------------------------------


#endif //BOWLINGGAMEKATA_TESTS_UTILS_HPP
