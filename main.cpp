#include <iostream>
#include "foo.h"
#include "shape.h"

using namespace std;

int main(){
    // std::cout << "hello, cmake" << std::endl;
    //int i;
    //std::cout << "Foo : " << foo() << std::endl;
	Rectangle rect = Rectangle(3,4);
	cout << rect.GetSize() << endl;
	
    return 0;
}
