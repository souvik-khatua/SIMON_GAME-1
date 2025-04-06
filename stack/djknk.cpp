#include <iostream>
#include <string>

// Base class
class Student {
protected:
    std::string name;
    int rollNumber;

public:
    Student(const std::string& n, int roll) : name(n), rollNumber(roll) {}

    void display() {
        std::cout << "Name: " << name << ", Roll Number: " << rollNumber;
    }
};

// Derived classes from Student
class Arts : public Student {
public:
    Arts(const std::string& n, int roll) : Student(n, roll) {}
};

class Engineering : public Student {
public:
    Engineering(const std::string& n, int roll) : Student(n, roll) {}
};

class Medical : public Student {
public:
    Medical(const std::string& n, int roll) : Student(n, roll) {}
};

// Further derived classes from Engineering
class CSE : public Engineering {
public:
    CSE(const std::string& n, int roll) : Engineering(n, roll) {}
};

class CSE_AI : public Engineering {
public:
    CSE_AI(const std::string& n, int roll) : Engineering(n, roll) {}
};

class ECE : public Engineering {
public:
    ECE(const std::string& n, int roll) : Engineering(n, roll) {}
};

int main() {
    // Example usage
    Arts artsStudent("John", 101);
    Engineering engineeringStudent("Alice", 201);
    Medical medicalStudent("Bob", 301);
    CSE cseStudent("Chris", 401);
    CSE_AI cseAIStudent("David", 402);
    ECE eceStudent("Emily", 501);

    // Displaying information
    std::cout << "Arts Student: ";
    artsStudent.display();
    std::cout << std::endl;

    std::cout << "Engineering Student: ";
    engineeringStudent.display();
    std::cout << std::endl;

    std::cout << "Medical Student: ";
    medicalStudent.display();
    std::cout << std::endl;

    std::cout << "CSE Student: ";
    cseStudent.display();
    std::cout << std::endl;

    std::cout << "CSE AI Student: ";
    cseAIStudent.display();
    std::cout << std::endl;

    std::cout << "ECE Student: ";
    eceStudent.display();
    std::cout << std::endl;

    return 0;
}
