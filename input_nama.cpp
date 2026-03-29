#include <iostream>
#include <string>

int main() {
    std::string nama;


    std::cout << "Silahkan input nama Anda: ";
    
 
    std::getline(std::cin, nama);


    std::cout << "Hello " << nama << std::endl;

    return 0;
}