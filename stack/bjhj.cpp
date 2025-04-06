
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

class Course2 {
protected:
    float calculateAveraged(float subject1, float subject2, float subject3, float subject4, float subject5, float subject6, float subject7) {
        return (subject1 + subject2 + subject3 + subject4 + subject5 + subject6 + subject7) / 7.0;
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

class CSE : public Engineering, public Course2 {
public:
     void checkEligibility() {
        float avg = calculateAveraged(E, H, Be, P, C, M, B);
        if (avg >= 75)
            cout << "The student with ID " << id << " is eligible for cse." << endl;
        else
            cout << "The student with ID " << id << " is not eligible for cse." << endl;
    }
};

class CSE_AI : public Engineering, public Course2 {
public:
     void checkEligibility() {
        float avg = calculateAveraged(E, H, Be, P, C, M, B);
        if (avg >= 70)
            cout << "The student with ID " << id << " is eligible for cse_ai." << endl;
        else
            cout << "The student with ID " << id << " is not eligible for cse_ai." << endl;
    }
};

class ECE : public Engineering, public Course2 {
public:
     void checkEligibility() {
        float avg = calculateAveraged(E, H, Be, P, C, M, B);
        if (avg >= 65)
            cout << "The student with ID " << id << " is eligible for ece." << endl;
        else
            cout << "The student with ID " << id << " is not eligible for ece." << endl;
    }
};

int main() {
    Arts artsStudent;
    Medical medicalStudent;
    Engineering engineeringStudent;
    CSE cseStudent;
    CSE_AI aiStudent;
    ECE eceStudent;

    cout << "Enter details for Arts student:" << endl;
    artsStudent.get();
    artsStudent.checkEligibility();

    cout << "\nEnter details for Medical student:" << endl;
    medicalStudent.get();
    medicalStudent.checkEligibility();

    cout << "\nEnter details for Engineering student:" << endl;
    engineeringStudent.get();
    engineeringStudent.checkEligibility();

     cout << "\nEnter details for Engineering student:" << endl;
    cseStudent.get();
    cseStudent.checkEligibility();

     cout << "\nEnter details for Engineering student:" << endl;
    aiStudent.get();
    aiStudent.checkEligibility();

     cout << "\nEnter details for Engineering student:" << endl;
    eceStudent.get();
    eceStudent.checkEligibility();

    return 0;
}