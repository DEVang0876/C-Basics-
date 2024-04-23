//23aiml014_devang_dhandhukiya

#include <iostream>
#include <string>

using namespace std;

class Student {
private:
    string name;
    int rollNumber;
    int age;
    char gender;
    string grade;

public:
    Student() : name(""), rollNumber(0), age(0), gender(' '), grade("-") {}
    Student(string n, int r, int a, char g) : name(n), rollNumber(r), age(a), gender(g), grade("-") {}

    void setName(string n) {
        name = n;
    }

    void setRollNumber(int r) {
        rollNumber = r;
    }

    void setAge(int a) {
        age = a;
    }

    void setGender(char g) {
        gender = g;
    }

    void setGrade(string g) {
        grade = g;
    }

    string getName() const {
        return name;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    int getAge() const {
        return age;
    }

    char getGender() const {
        return gender;
    }

    string getGrade() const {
        return grade;
    }

    void displayStudentDetails() const {
        cout << "Name: " << name << endl;
        cout << "Roll Number: " << rollNumber << endl;
        cout << "Age: " << age << endl;
        cout << "Gender: " << gender << endl;
        cout << "Grade: " << grade << endl;
    }
};

class Course {
private:
    string courseCode;
    string title;
    string description;
    string instructor;

public:
    Course() : courseCode(""), title(""), description(""), instructor("") {}
    Course(string code, string t, string desc, string inst) : courseCode(code), title(t), description(desc), instructor(inst) {}

    void setCourseCode(string code) {
        courseCode = code;
    }

    void setTitle(string t) {
        title = t;
    }

    void setDescription(string desc) {
        description = desc;
    }

    void setInstructor(string inst) {
        instructor = inst;
    }

    string getCourseCode() const {
        return courseCode;
    }

    string getTitle() const {
        return title;
    }

    string getDescription() const {
        return description;
    }

    string getInstructor() const {
        return instructor;
    }

    void displayCourseDetails() const {
        cout << "Course Code: " << courseCode << endl;
        cout << "Title: " << title << endl;
        cout << "Description: " << description << endl;
        cout << "Instructor: " << instructor << endl;
    }
};

class Enrollment {
private:
    string courseCode;
    int rollNumber;

public:
    Enrollment() : courseCode(""), rollNumber(0) {}
    Enrollment(string code, int roll) : courseCode(code), rollNumber(roll) {}

    void setCourseCode(string code) {
        courseCode = code;
    }

    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    string getCourseCode() const {
        return courseCode;
    }

    int getRollNumber() const {
        return rollNumber;
    }
};

class GradingSystem {
private:
    string courseCode;
    int rollNumber;
    string grade;

public:
    GradingSystem() : courseCode(""), rollNumber(0), grade("-") {}
    GradingSystem(string code, int roll, string g) : courseCode(code), rollNumber(roll), grade(g) {}

    void setCourseCode(string code) {
        courseCode = code;
    }

    void setRollNumber(int roll) {
        rollNumber = roll;
    }

    void setGrade(string g) {
        grade = g;
    }

    string getCourseCode() const {
        return courseCode;
    }

    int getRollNumber() const {
        return rollNumber;
    }

    string getGrade() const {
        return grade;
    }
};

class StudentManagementSystem {
private:
    Student students[100];
    Course courses[100];
    Enrollment enrollments[100];
    GradingSystem grades[100];
    int studentCount;
    int courseCount;
    int enrollmentCount;
    int gradeCount;

public:
    StudentManagementSystem() : studentCount(0), courseCount(0), enrollmentCount(0), gradeCount(0) {}

    void addStudent() {
        string name;
        int rollNumber, age;
        char gender;
        cout << "Enter name of the student: ";
        cin >> name;
        cout << "Enter roll number of the student: ";
        cin >> rollNumber;
        cout << "Enter age of the student: ";
        cin >> age;
        cout << "Enter gender of the student (M/F): ";
        cin >> gender;

        students[studentCount] = Student(name, rollNumber, age, gender);
        studentCount++;
        cout << "Student added successfully!" << endl;
    }

    void updateStudent() {
        int rollNumber;
        cout << "Enter roll number of the student whose information you want to update: ";
        cin >> rollNumber;
        int index = findStudentIndex(rollNumber);
        if (index != -1) {
            string name;
            int age;
            char gender;
            cout << "Enter new name of the student: ";
            cin >> name;
            cout << "Enter new age of the student: ";
            cin >> age;
            cout << "Enter new gender of the student (M/F): ";
            cin >> gender;
            students[index].setName(name);
            students[index].setAge(age);
            students[index].setGender(gender);
            cout << "Student information updated successfully!" << endl;
        } else {
            cout << "Student not found!" << endl;
        }
    }

    void deleteStudent() {
        int rollNumber;
        cout << "Enter roll number of the student you want to delete: ";
        cin >> rollNumber;
        int index = findStudentIndex(rollNumber);
        if (index != -1) {
            for (int i = index; i < studentCount - 1; ++i) {
                students[i] = students[i + 1];
            }
            studentCount--;
            cout << "Student deleted successfully!" << endl;
        } else {
            cout << "Student not found!" << endl;
        }
    }

    void displayStudentDetails() {
        int rollNumber;
        cout << "Enter roll number of the student you want to display: ";
        cin >> rollNumber;
        int index = findStudentIndex(rollNumber);
        if (index != -1) {
            students[index].displayStudentDetails();
        } else {
            cout << "Student not found!" << endl;
        }
    }

    void addCourse() {
        string courseCode, title, description, instructor;
        cout << "Enter course code: ";
        cin >> courseCode;
        cout << "Enter course title: ";
        cin >> title;
        cout << "Enter course description: ";
        cin >> description;
        cout << "Enter instructor's name: ";
        cin >> instructor;

        courses[courseCount] = Course(courseCode, title, description, instructor);
        courseCount++;
        cout << "Course added successfully!" << endl;
    }

    void removeCourse() {
        string courseCode;
        cout << "Enter course code of the course you want to remove: ";
        cin >> courseCode;
        int index = findCourseIndex(courseCode);
        if (index != -1) {
            for (int i = index; i < courseCount - 1; ++i) {
                courses[i] = courses[i + 1];
            }
            courseCount--;
            cout << "Course removed successfully!" << endl;
        } else {
            cout << "Course not found!" << endl;
        }
    }

    void displayCourseDetails() {
        string courseCode;
        cout << "Enter course code of the course you want to display: ";
        cin >> courseCode;
        int index = findCourseIndex(courseCode);
        if (index != -1) {
            courses[index].displayCourseDetails();
        } else {
            cout << "Course not found!" << endl;
        }
    }

    void enrollStudent() {
        string courseCode;
        int rollNumber;
        cout << "Enter course code: ";
        cin >> courseCode;
        cout << "Enter roll number of the student you want to enroll: ";
        cin >> rollNumber;
        enrollments[enrollmentCount] = Enrollment(courseCode, rollNumber);
        enrollmentCount++;
        cout << "Student enrolled successfully!" << endl;
    }

    void dropStudent() {
        string courseCode;
        int rollNumber;
        cout << "Enter course code: ";
        cin >> courseCode;
        cout << "Enter roll number of the student you want to drop: ";
        cin >> rollNumber;
        int index = findEnrollmentIndex(courseCode, rollNumber);
        if (index != -1) {
            for (int i = index; i < enrollmentCount - 1; ++i) {
                enrollments[i] = enrollments[i + 1];
            }
            enrollmentCount--;
            cout << "Student dropped successfully!" << endl;
        } else {
            cout << "Student not found in the course!" << endl;
        }
    }

    void enterGrades() {
        string courseCode, grade;
        int rollNumber;
        cout << "Enter course code: ";
        cin >> courseCode;
        cout << "Enter roll number of the student: ";
        cin >> rollNumber;
        cout << "Enter grade (A/B/C/D/F): ";
        cin >> grade;
        grades[gradeCount] = GradingSystem(courseCode, rollNumber, grade);
        gradeCount++;
        cout << "Grade entered successfully!" << endl;
    }

    void generateGradeReport() {
        int rollNumber;
        cout << "Enter roll number of the student you want to generate grade report for: ";
        cin >> rollNumber;
        cout << "Grade Report for Roll Number " << rollNumber << ":" << endl;
        for (int i = 0; i < gradeCount; ++i) {
            if (grades[i].getRollNumber() == rollNumber) {
                cout << "Course Code: " << grades[i].getCourseCode() << endl;
                cout << "Grade: " << grades[i].getGrade() << endl;
            }
        }
    }

private:
    int findStudentIndex(int rollNumber) {
        for (int i = 0; i < studentCount; ++i) {
            if (students[i].getRollNumber() == rollNumber) {
                return i;
            }
        }
        return -1;
    }

    int findCourseIndex(string courseCode) {
        for (int i = 0; i < courseCount; ++i) {
            if (courses[i].getCourseCode() == courseCode) {
                return i;
            }
        }
        return -1;
    }

    int findEnrollmentIndex(string courseCode, int rollNumber) {
        for (int i = 0; i < enrollmentCount; ++i) {
            if (enrollments[i].getCourseCode() == courseCode && enrollments[i].getRollNumber() == rollNumber) {
                return i;
            }
        }
        return -1;
    }
};

void showMenu() {
    cout << "\nStudent Management System Menu:" << endl;
    cout << "1. Add New Student" << endl;
    cout << "2. Update Student Information" << endl;
    cout << "3. Delete Student" << endl;
    cout << "4. Display Student Details" << endl;
    cout << "5. Add New Course" << endl;
    cout << "6. Remove Course" << endl;
    cout << "7. Display Course Details" << endl;
    cout << "8. Enroll Student in Course" << endl;
    cout << "9. Drop Student from Course" << endl;
    cout << "10. Enter Grades" << endl;
    cout << "11. Generate Grade Report" << endl;
    cout << "12. Exit" << endl;
    cout << "Enter your choice: ";
}

int main() {
    StudentManagementSystem system;

    int choice;
    while (true) {
        showMenu();
        cin >> choice;
        switch (choice) {
            case 1:
                system.addStudent();
                break;
            case 2:
                system.updateStudent();
                break;
            case 3:
                system.deleteStudent();
                break;
            case 4:
                system.displayStudentDetails();
                break;
            case 5:
                system.addCourse();
                break;
            case 6:
                system.removeCourse();
                break;
            case 7:
                system.displayCourseDetails();
                break;
            case 8:
                system.enrollStudent();
                break;
            case 9:
                system.dropStudent();
                break;
            case 10:
                system.enterGrades();
                break;
            case 11:
                system.generateGradeReport();
                break;
            case 12:
                cout << "Exiting..." << endl;
                return 0;
            default:
                cout << "Invalid choice!" << endl;
        }
    }

    return 0;
}
