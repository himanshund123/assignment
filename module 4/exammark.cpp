#include<iostream>
#include<string>
using namespace std;

class Students {
protected:
    int rollNumber;

public:
    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    int getRollNumber() {
        return rollNumber;
    }
};

class Test {
protected:
    int subject1Marks;
    int subject2Marks;

public:
    void setTestMarks(int s1, int s2) {
        subject1Marks = s1;
        subject2Marks = s2;
    }

    int getSubject1Marks() {
        return subject1Marks;
    }

    int getSubject2Marks() {
        return subject2Marks;
    }
};

class Result : public Students, public Test {
public:
    int getTotalMarks() {
        return getSubject1Marks() + getSubject2Marks();
    }

    void displayResult() {
        cout << "Roll Number: " << getRollNumber() <<endl;
        cout << "Subject 1 Marks: " << getSubject1Marks() <<endl;
        cout << "Subject 2 Marks: " << getSubject2Marks() <<endl;
        cout << "Total Marks: " << getTotalMarks() <<endl;
    }
};

int main() {
    Result studentResult;

    studentResult.setRollNumber(101);
    studentResult.setTestMarks(85, 92);

    studentResult.displayResult();

    return 0;
}