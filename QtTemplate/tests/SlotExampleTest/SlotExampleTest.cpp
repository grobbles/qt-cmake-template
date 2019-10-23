#include <Module.hpp>
#include <QObject>
#include <SlotExample.hpp>
#include <gtest/gtest.h>
#include <vector>

using namespace std;

TEST(SlotExampleTests, simpleTest) {
    SlotExample a, b;
    QObject::connect(&a, &SlotExample::valueChanged, &b, &SlotExample::setValue);

    a.setValue(12); // a.setValue push the value to b --> a == b

    EXPECT_EQ(a.value(), b.value());
}
