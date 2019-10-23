#include <Module.hpp>
#include <gtest/gtest.h>
#include <vector>
#include <QObject>
#include <SlotExample.hpp>

using namespace std;

TEST(SlotExampleTests, simpleTest) {
    SlotExample a, b;
    QObject::connect(&a, &SlotExample::valueChanged, &b, &SlotExample::setValue);

    a.setValue(12);     // a.setValue push the value to b --> a == b

    EXPECT_EQ(a.value(), b.value());
}
