#include <iostream>
#include <cstdlib>
#include <string>

int main(int argc, char* argv[]) {
    if (argc != 3) {
        std::cerr << "Usage: " << argv[0] << " <p> <r>" << std::endl;
        return 1;
    }

    std::string p(argv[1]);
    std::string r(argv[2]);

    std::string command = "make && ./test -p " + p + " -r " + r + " -c 2048";

    int result = system(command.c_str());

    if (result == 0) {
        std::cout << "Command executed successfully." << std::endl;
    } else {
        std::cerr << "Error: Command returned non-zero exit status." << std::endl;
    }

    return result;
}
