#include <iostream>
#include <filesystem>
#include <string>
#include <vector>

namespace fs = std::filesystem;
using namespace std;

int main(int, char**) {
    fs::path txtPath("sample.cpp");
    cout << fs::exists(txtPath) << endl;
    cout << fs::absolute(txtPath) << endl;

    std::vector<int> v = {1, 2, 3, 4, 5};

    std::cout << "Hello, world!\n";
    int i = 0;
    while(i < 10){
        std::cout << i++;
    }
}
