#include <iostream>
using namespace std;

class Marks {
    float marks[5];
    float total = 0;

public:
    void input() {
        cout << "Enter marks for 5 subjects: ";
        for (int i = 0; i < 5; i++) {
            cin >> marks[i];
        }
    }

    float Total() {
        total = 0; 
        for (int i = 0; i < 5; i++) {
            total += marks[i];
        }
        return total;
    }

    float Percentage() {
        return total / 5;
    }

    char Grade(float percentage) {
        if (percentage >= 90)
            return 'A';
        else if (percentage >= 70)
            return 'B';
        else
            return 'F';
    }
};

int main() {
    Marks m;
    m.input();

    float total = m.Total();
    float perc = m.Percentage();
    char grade = m.Grade(perc);

    cout << "Total Marks: " << total << endl;
    cout << "Percentage: " << perc << "%" << endl;
    cout << "Grade: " << grade << endl;

    return 0;
}
