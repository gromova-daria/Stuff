#ifndef INCLUDE_PERSONAL_H_
#define INCLUDE_PERSONAL_H_

#include <iostream>
#include <string>
#include <utility>
#include "Employee.h"
#include"Interfaces.h"
#include <vector>

class Personal : public Employee, public Work_Base_Time {
public: 
    Personal(int id, const std::string& name, int timing, int payment, 
          const std::string& position, int project);
    int calc_base_salary()  override;
    int calc_bonus_salary(int bonus)  override;
};

class Cleaner : public Personal {
public:
    Cleaner(int id,const std::string& name, int timing, int payment, 
        const std::string& position, int project);
    int calc_salary()  override;  
};

class Driver : public Personal {
public:
    Driver(int id, const std::string& name, int timing, int payment, 
        const std::string& position, int project);
    int calc_salary() override; 
};

#endif  // INCLUDE_PERSONAL_H_