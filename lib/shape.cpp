#include "shape.h"

Rectangle::Rectangle(int width, int height) : width_(width), height_(height){}

int Rectangle::GetSize() const{
    // 직사각형의 넓이를 리턴한다.
    return width_ * height_;
}
