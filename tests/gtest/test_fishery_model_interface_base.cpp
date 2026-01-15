// Test for the default implementation of FisheryModelInterfaceBase::to_json
// Covers lines 82-84 in rcpp_models.hpp

#include "gtest/gtest.h"
#include "interface/rcpp/rcpp_objects/rcpp_models.hpp"


namespace {
    // Minimal derived class for testing that the virtual function works
    class TestFisheryModel : public FisheryModelInterfaceBase {};

    TEST(FisheryModelInterfaceBaseTest, ToJsonDefaultImplementation)
    {
        // TestFisheryModel class will not have a method for string_to_json()
        TestFisheryModel model;
        EXPECT_EQ(model.to_json(), "std::string to_json() not yet implemented.");
    }
} // namespace
