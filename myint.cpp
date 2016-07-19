
#include "./myint.h"

MyInt::MyInt() {}

MyInt::MyInt(int num)
        :num_(num) {}

void MyInt::set(int num) {
    num_ = num;
}

int MyInt::get() {
    return num_;
}

bool MyInt::isOdd() {
    return (num_ % 2) != 0 ? true : false;
}

bool MyInt::isEven() {
    return isOdd();  //ここにバグがある
}
