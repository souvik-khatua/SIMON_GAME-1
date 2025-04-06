
#include<iostream>
using namespace std;

class Student {
protected:
    int id;
    float E, H, Be, P, C, M, B;
public:
    void get() {
        cout << "Enter the id: ";
        cin >> id;
        cout << "Enter marks for English, History, Biology, Physics, Chemistry, Math, and Bengali: ";
        cin >> E >> H >> Be >> P >> C >> M >> B;
    }
};

class Course {
protected:
    float calculateAverage(float subject1, float subject2, float subject3) {
        return (subject1 + subject2 + subject3) / 3.0;
    }
};

class Arts : public Student, public Course {
public:
    void checkEligibility() {
        float avg = calculateAverage(E, H, Be);
        if (avg >= 50)
            cout << "The student with ID " << id << " is eligible for Arts." << endl;
        else
            cout << "The student with ID " << id << " is not eligible for Arts." << endl;
    }
};

class Medical : public Student, public Course {
public:
    void checkEligibility() {
        float avg = calculateAverage(P, C, B);
        if (avg >= 75)
            cout << "The student with ID " << id << " is eligible for Medical." << endl;
        else
            cout << "The student with ID " << id << " is not eligible for Medical." << endl;
    }
};

class Engineering : public Student, public Course {
public:
    void checkEligibility() {
        float avg = calculateAverage(P, C, M);
        if (avg >= 70)
            cout << "The student with ID " << id << " is eligible for Engineering." << endl;
        else
            cout << "The student with ID " << id << " is not eligible for Engineering." << endl;
    }
};

int main() {
    Arts artsStudent;
    Medical medicalStudent;
    Engineering engineeringStudent;

    cout << "Enter details for Arts student:" << endl;
    artsStudent.get();
    artsStudent.checkEligibility();

    cout << "\nEnter details for Medical student:" << endl;
    medicalStudent.get();
    medicalStudent.checkEligibility();

    cout << "\nEnter details for Engineering student:" << endl;
    engineeringStudent.get();
    engineeringStudent.checkEligibility();

    return 0;
}