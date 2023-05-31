#include <iostream>
#include <thread>

#include "shape.h"

using namespace std;

Rectangle::Rectangle(int width, int height) : width_(width), height_(height){}

int Rectangle::GetSize() const{

    thread t([this]() { cout << "Calculate .. " << endl;});
    t.join();

    // 직사각형의 넓이를 리턴한다.
    return width_ * height_;
}
