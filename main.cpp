#include <iostream>
#include "menu.h"

using namespace std;
using namespace lab;
int main() {
    setlocale(LC_ALL, "Russian");
    Menu menu{};
    menu.menuOutput();
    int choice;
    cin >> choice;
    menu.setChoice(choice);
    menu.functionCall();
    return 0;
}
