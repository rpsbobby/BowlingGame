//
// Created by robert on 11/23/25.
//

#include "frame_counter.hpp"
#include "tests_utils.hpp"
#include "gtest/gtest.h"

struct ScoreTestCases {
    int expected;
};

class ScoreTests : public testing::TestWithParam<ScoreTestCases> {};

TEST_P(ScoreTests, should_validate_final_score) {
    auto const &[expected] = GetParam();
    FrameCounter counter;
    int actual = counter.get_score();
    ASSERT_EQ(expected, actual);
}

static const ScoreTestCases score_cases[] = {
{1},
};

INSTANTIATE_TEST_SUITE_P(
    ScoreTestCases,
    ScoreTests,
    ::testing::ValuesIn(score_cases)
);
