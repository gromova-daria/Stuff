#ifndef INCLUDE_MANAGER_H_
#define INCLUDE_MANAGER_H_

#include <string>
#include <vector>
#include "Employee.h"
#include "Interfaces.h"

class ProjectManager : public Employee, public Heading {
    public:
        ProjectManager(int id, const std::string& name, int timing, int payment, 
            const std::string& position, int project);
        int calc_Heads() override;
        int calc_salary()  override;
};

class SeniorManager : public Employee {
    public: 
        SeniorManager(int id, const std::string& name, int timing, int payment, 
            const std::string& position, int project);
        int calc_salary()  override;

};

#endif  // INCLUDE_MANAGER_H_