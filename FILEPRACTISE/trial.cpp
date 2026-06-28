#include <iostream>
#include <string>
using namespace std;

class student {
public:
    string reg_no;
    string name;
    string stream;
    int math;
    int eng;
    int sci;
    int swa;
    int marks; // sum of all

    // Default constructor
    student() {
        math = eng = sci = swa = marks = 0;
    }

    // Parameterized constructor
    student(int Math, int Eng, int Swa, int Sci) {
        math = Math;
        eng = Eng;
        swa = Swa;
        sci = Sci;
        marks = 0;
    }

    // Function to calculate total marks
    void mark() {
        marks = math + eng + sci + swa;
        cout << "Your total marks: " << marks << endl;
    }

    // Function to calculate and display average
    void avrg() {
        cout << "Your average score: " << (marks / 4.0) << endl;
    }

    /*void rank() {
        // future code
    }*/
};

int main() {
    student std[6] = {
        student(100, 90, 80, 40),
        student(88, 96, 89, 80),
        student(98, 79, 82, 45),
        student(100, 56, 78, 49),
        student(50, 92, 80, 41),
        student(10, 67, 81, 30)
    };

    for (int i = 0; i < 6; i++) {
        std[i].mark();
        std[i].avrg();
        cout << "***************************************" << endl;
    }

    int n;
    cout << "Enter value of N: ";
    cin >> n;
    
    return 0;
}
