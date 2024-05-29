#ifndef INCLUDE_FACTORY_H_
#define INCLUDE_FACTORY_H_

#include <iostream>
#include <fstream>
#include <sstream>
#include <cstdlib>
#include <vector>
#include <string>
#include "Personal.h"
#include "Manager.h"


#include <map>


class Factory_Staff {
    public:
        void createStuffFromFile();
        void printStuff();
    private:
        std::vector<Employee *> employees;
};

class Factory_Project {
    public:
        ~Factory_Project();
        void createProjectsFromFile();
        void printProjects();
        std::vector<Project *> getProjects();
    private:
        std::vector<Project *> projects;
};

#endif  // INCLUDE_FACTORY_H_