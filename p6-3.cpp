#include <iostream>
#include <fstream>
#include <string>

int main() {

    cout<<"student name->thumar prince"<<endl;
		cout<<"en. no->220130318005"<<endl;
		
    std::ifstream file;
    char character;
    int character_count = 0;
   
    file.open("test.txt");

   
    if (!file.is_open()) {
        std::cout << "Unable to open the file.." << std::endl;
        return 1; 
    }

   
    while (file.get(character)) {
        character_count++;
    }

    
    file.close();

    
    std::cout << "Number of characters in the file-> " << character_count << std::endl;

    return 0; 
}

