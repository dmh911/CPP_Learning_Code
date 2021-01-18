#include <iostream>
#include <vector>

std::vector<unsigned int> count_lower(const std::string &s) {
    std::vector<unsigned int> vect(26);
    for (char const &letter : s)
    {
        if (islower(letter))
        {
            vect[(int(letter)-97)] = vect[(int(letter)-97)] + 1;
        }
    }
    return vect;
}

void display_lower_occ(const std::vector<unsigned int> vect){
    for (int i = 0; i < 26; i++)
    {
        std::cout << char(97+i) << ": " << vect[i] << std::endl;
    }
    
}

int main() {
    std::vector<unsigned int> tab;
    std::string str;
    std::cin >> str;
    tab = count_lower(str);
    display_lower_occ(tab);
    return 0;
}