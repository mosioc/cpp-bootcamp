#pragma once
#include <compare>

struct MyInt {
    int value;
    explicit MyInt(int val) : value{ val } { }
    auto operator<=>(const MyInt& rhs) const = default;
};
