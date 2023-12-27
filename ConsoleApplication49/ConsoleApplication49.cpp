#include <iostream> 
using namespace std;

class Student
{
private:

    int name;
    int surname;
    int father_name;
    int birth_date;
    int home_address;
    int phone_number;
    int age;

    int* practice_grades = nullptr;
    int practice_grades_count = 0;

    int* hometask_grades = nullptr;
    int hometask_grades_count = 0;

    int* exam_grades = nullptr;
    int exam_grades_count = 0;


public:
    Student();
    Student(int name, int surname, int father_name, int birth_date, int home_address, int phone_number);

    ~Student()
    {
        if (practice_grades != nullptr)
        {
            delete[] practice_grades;
            practice_grades = nullptr;
        }
        if (hometask_grades != nullptr)
        {
            delete[] hometask_grades;
            hometask_grades = nullptr;
        }
        if (exam_grades != nullptr)
        {
            delete[] exam_grades;
            exam_grades = nullptr;
        }
    }

    void SetName(int name)
    {
        this->name = name;
    }

    int GetName() const
    {
        return name;
    }

    void SetSurname(int surname)
    {
        this->surname = surname;
    }

    int GetSurname() const
    {
        return surname;
    }

    void SetFatherName(int father_name) {
        this->father_name = father_name;
    }

    int GetFatherName() const {
        return father_name;
    }

    void SetBirthDate(int birth_date) {
        this->birth_date = birth_date;
    }

    int GetBirthDate() const {
        return birth_date;
    }

    void SetAddress(int home_address) {
        this->home_address = home_address;
    }

    int GetAddress() const {
        return home_address;
    }

    void SetPhoneNumber(int phone_number) {
        this->phone_number = phone_number;
    }

    int GetPhoneNumber() const {
        return phone_number;
    }

    void SetAge(int age)
    {
        this->age = age;
    }

    int GetAge() const
    {
        return age;
    }

    void AddPracticeGrade(unsigned int grade)
    {
        if (grade < 1 || grade > 12)
        {
            cout << "Incorrect value for parameter grade. Value must be from 1 to 12\n";
            throw "ERROR!";
        }

        if (practice_grades_count == 0)
        {
            practice_grades = new int[1];
            practice_grades[0] = grade;
        }
        else
        {
            cout << "Add yet another grade\n";

            int* temp = new int[practice_grades_count + 1];

            for (int i = 0; i < practice_grades_count; i++)
            {
                temp[i] = practice_grades[i];
            }
            temp[practice_grades_count] = grade;

            delete[] practice_grades;

            practice_grades = temp;
        }

        practice_grades_count++;
    }

    int GetPracticeGradesCount() const
    {
        return practice_grades_count;
    }
    int* GetPracticeGrades() const
    {
        return practice_grades;
    }

    void AddHometaskGrade(unsigned int grade)
    {
        if (grade < 1 || grade > 12)
        {
            cout << "Incorrect value for parameter grade. Value must be from 1 to 12\n";
            throw "ERROR!";
        }

        if (hometask_grades_count == 0)
        {
            hometask_grades = new int[1];
            hometask_grades[0] = grade;
        }
        else
        {
            cout << "Add yet another grade\n";

            int* temp = new int[hometask_grades_count + 1];

            for (int i = 0; i < hometask_grades_count; i++)
            {
                temp[i] = hometask_grades[i];
            }
            temp[hometask_grades_count] = grade;

            delete[] hometask_grades;

            hometask_grades = temp;
        }

        hometask_grades_count++;
    }

    int GetHometasksGradesCount() const
    {
        return hometask_grades_count;
    }
    int* GetHometaskGrades() const
    {