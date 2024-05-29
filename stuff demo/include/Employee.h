#ifndef INCLUDE_EMPLOYEE_H_
#define INCLUDE_EMPLOYEE_H_

#include <string>
#include <vector>
#include <cstdlib> 
#include <ctime>


class Project {
 public:
    Project(int id, int budget, int number_of_employees);
    int get_num_of_employees();
    int get_budget();
    int getID();
 private:
    int id;
    int budget;
    int number_of_employees;
};

class Employee {
    public:
        virtual ~Employee() = default;
        Employee(int id, const std::string& name, int timing, int payment, const std::string& position, int project);
        virtual int calc_salary();
        void print_info();
        int id;
        int project;
        int payment;
        int timing;
        const std::string name;
        const std::string position;
};

#endif  // INCLUDE_EMPLOYEE_H_