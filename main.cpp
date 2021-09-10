#include <iostream>
#include <string>
#include <fstream>

void OpenEquipmentSubmenu();
void OpenAlarmSubmenu();
void OpenAlarmInterface();
void OpenCRUDInterface();

int main(int argc, char const *argv[])
{
    int option = -1;
    
    do
    {
        std::cout << "\n";
        std::cout << "1 - Equipment CRUD\n";
        std::cout << "2 - Alarm CRUD\n";
        std::cout << "3 - Alarm Interface\n";
        std::cout << "4 - CRUD again? :(\n\n";

        std::cout << "Choose option: ";
        std::cin >> option;   

        switch (option)
        {
        case 1: OpenEquipmentSubmenu();
            break;
        case 2: OpenAlarmSubmenu();
            break;
        case 3: OpenAlarmInterface();
            break;
        case 4: OpenCRUDInterface();
            break;
        default:
            break;
        }
    } while(option != -1);
    
    return 0;
}

void OpenEquipmentSubmenu() {
    std::cout << "\n" << "Opened equipment submenu successfully" << "\n";
}
void OpenAlarmSubmenu() {
    std::cout << "\n" << "Opened alarm submenu successfully" << "\n";
}

void OpenAlarmInterface() {
    std::cout << "\n" << "Opened alarm interface successfully" << "\n";
}

void OpenCRUDInterface() {
    std::cout << "\n" << "Opened CRUD UI successfully" << "\n";
}
