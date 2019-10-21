#include <Module.hpp>
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(ModuleTest, test_example) {
    Module* module = new Module();

    EXPECT_EQ(4, module->add(2, 2));
}
