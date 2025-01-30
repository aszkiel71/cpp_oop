#include <iostream>
#include "task.cpp"
using namespace std;

int main() {
    Task p1;
    p1.number = 1;
    p1.load();
    p1.display_task();
    p1.check_answer();
    int result = 0;
    result += p1.point;
    cout << "Your score: " << p1.point << " points" << endl;
    cin.ignore();
    cin.get();

    return 0;
}