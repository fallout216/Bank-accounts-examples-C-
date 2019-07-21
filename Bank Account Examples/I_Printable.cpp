#include "I_Printable.h"
#include <iostream>

std::ostream &operator<<( std::ostream &os, const I_Printable &printable) {
    printable.print(os);
    return os;
}