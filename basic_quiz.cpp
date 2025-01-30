#include <iostream>
#include "task.h"

using namespace std;

int main() {
    Task p1;
    p1.number = 1;
    p1.load();
    p1.display_task();
    p1.check_answer();

    cout << "Your score: " << p1.point << " points" << endl;


    cout << "Press Enter to exit...";
    cin.ignore();
    cin.get();

    return 0;
}
