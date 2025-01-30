#include "task.h"
#include <iostream>
#include <fstream>
#include <cstdlib>
#include <string>

using namespace std;

void Task::load() {
    fstream file;
    file.open("tasks.txt", ios::in);

    if (!file.good()) {
        cout << "File was not found!" << endl;
        exit(1);
    }

    int nr_lines = (number - 1) * 6 + 1;
    int actual_nr = 1;
    string line;

    while (getline(file, line)) {
        if (actual_nr == nr_lines) content = line;
        if (actual_nr == nr_lines + 1) answer1 = line;
        if (actual_nr == nr_lines + 2) answer2 = line;
        if (actual_nr == nr_lines + 3) answer3 = line;
        if (actual_nr == nr_lines + 4) answer4 = line;
        if (actual_nr == nr_lines + 5) correct_answer = line;
        actual_nr++;
    }

    file.close();
}

void Task::display_task() {
    cout << endl << "Question: " << content << endl;
    cout << "1. " << answer1 << endl;
    cout << "2. " << answer2 << endl;
    cout << "3. " << answer3 << endl;
    cout << "4. " << answer4 << endl;
    cout << "---------------" << endl;

    cout << "Your answer (1-4): ";
    cin >> user_answer;
    cout << endl;
}

void Task::check_answer() {
    if (user_answer == correct_answer) {
        point = 1;
        cout << "Correct!" << endl;
    } else {
        point = 0;
        cout << "Incorrect! The correct answer was: " << correct_answer << endl;
    }
}