#pragma once

struct MyInt {
    int value;

    explicit MyInt(int val) : value{ val } { }
    
    bool operator < (const MyInt& rhs) const {
        return value < rhs.value;
    }
    bool operator==(const MyInt& rhs) const {
        return value == rhs.value;
    }
    bool operator!=(const MyInt& rhs) const {
        return !(*this == rhs);
    }
    bool operator<=(const MyInt& rhs) const {
        return !(rhs < *this);
    }
    bool operator>(const MyInt& rhs)  const {
        return rhs < *this;
    }
    bool operator>=(const MyInt& rhs) const {
        return !(*this < rhs);
    }
};