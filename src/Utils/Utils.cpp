#include "Utils.hpp"

void Utils::printErrorCode(const std::exception& e, const std::string& log) {
    std::cout << log << " Error: " << e.what() << std::endl;
    exit(-1);
}
