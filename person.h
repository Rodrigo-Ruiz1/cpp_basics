#include <string>
#include <vector>
#ifndef PERSON_H
#define PERSON_H

class Person {
	int age;
	std::string name;
	int income;
	int xCoordinate;
	int yCoordinate;

    public:
    int getAge();
    int getIncome();
    std::string getName();
    std::vector<int> getLocation();
    Person(std::string name, int age, int income, int xCoordinate, int yCoordinate);
};

#endif