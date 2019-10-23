#include <iostream>
#include <fstream>
#include <cstring>

int main(){
    const int BLOCK_SIZE = 16 * 1024;
    const char* file_name = "C:\\Users\\aluno\\Downloads\\dadanw.dat.txt";
    int i = 0;
    std::ifstream ifs;
    ifs.open(file_name, std::ifstream::binary | std::ifstream::in);

    char buffer[BLOCK_SIZE];

    memset(buffer, 0, BLOCK_SIZE);
    ifs.read(buffer, BLOCK_SIZE);

    std::cout << i << " | buffer size: " << ifs.gcount() << std::endl;

    return 0;
}
