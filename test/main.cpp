#include <iostream>
#include "factory.h"

int main(int argc, char** argv) {
    std::cout << "hello world" << std::endl;
    Factory* factory = new Factory();
    factory->show("my factory");
    return 0;
}