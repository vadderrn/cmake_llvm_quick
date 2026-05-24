#include "include/libapp.h"
#include "a.h"

#include <sstream>

std::string buildMessage() {
    std::ostringstream oss;
    oss << "APP: Hello World! "
        << "Return from lib a: 0x"
        << std::hex << getA();
    return oss.str();
}
