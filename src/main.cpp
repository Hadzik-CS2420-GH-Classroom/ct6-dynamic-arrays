#include <iostream>

#include "dynamic_arrays.h"
#include "new_and_delete.h"
#include "two_dimensional_arrays.h"

int main() {
    std::cout << "CT6 - Building a Simple Dynamic Array (Resize + Copy)" << '\n';
    std::cout << "======================================================" << '\n';

    // Topic 1: The new and delete operators (shared_ptr and unique_ptr allowed)
    newAndDelete();

    // Topic 2: Two dimensional arrays
    twoDimensionalArrays();

    // Topic 3: Dynamic arrays (resize + copy)
    dynamicArrays();

    std::cout << "\n======================================================" << '\n';
    std::cout << "CT6 Complete!" << '\n';

    return 0;
}
