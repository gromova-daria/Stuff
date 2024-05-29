#ifndef INCLUDE_ENGINEER_H_
#define INCLUDE_ENGINEER_H_

#include "Personal.h"
#include"Interfaces.h"
#include <string>
#include <vector>

class Engineer : public Personal, public Project_Budget {
public:
    Engineer(int id, const std::string& name, int timing, int payment,
        const std::string& position, int project);
    int calc_budget_part()  override;
    int calc_pro_additions(int bonus)  override;
};

class Programmer : public Engineer {
public:
    Programmer(int id, const std::string& name, int timing, int payment,
        const std::string& position, int project);
    int calc_pro_additions(int bonus)  override;
    int calc_salary()  override;
};

class Tester : public Engineer {
public:
    Tester(int id, const std::string& name, int timing, int payment,
        const std::string& position, int project);
    int calc_pro_additions(int bonus) override;
    int calc_salary()  override;
};

class TeamLeader : public Programmer, public Heading {
public:
    TeamLeader(int id, const std::string& name, int timing, int payment,
        const std::string& position, int project);
    int calc_Heads()  override;
    int calc_salary()  override;
};

#endif  // INCLUDE_ENGINEER_H_