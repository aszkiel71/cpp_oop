#include <iostream>
using namespace std;
#ifndef TASK_H
#define TASK_H
class Task {
public:
    string content;
    string answer1, answer2, answer3, answer4;
    int number;
    string correct_answer;
    string user_answer;
    int point;

    Task() : point(0) {}

    void load();
    void display_task();
    void check_answer();
};

#endif