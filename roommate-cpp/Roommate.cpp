#include <iostream>
#include <string>

class Roommate {
public:
    std::string name;
    int age;
    std::string personality;
    std::string hobby;

    Roommate(std::string nm, int ag, std::string pers, std::string hob)
        : name(nm), age(ag), personality(pers), hobby(hob) {}

    void display_info() const {
        std::cout << "Roommate Details:\n";
        std::cout << "Name: " << name << std::endl;
        std::cout << "Age: " << age << std::endl;
        std::cout << "Personality: " << personality << std::endl;
        std::cout << "Hobby: " << hobby << std::endl;
    }
};

int main() {
    Roommate r("Brian", 20, "Calm and organized", "Watching football");
    r.display_info();
    return 0;
}