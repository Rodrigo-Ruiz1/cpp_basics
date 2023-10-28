#include <iostream>
#include <vector>
#include <string>
#include "person.h"

Person::Person(std::string name, int age, int income, int xCoordinate, int yCoordinate) {
	this->name = name;
	this->age = age;
	this->income = income;
	this->xCoordinate = xCoordinate;
	this->yCoordinate = yCoordinate;
}
std::vector<int> Person::getLocation () {
	std::vector<int> location = {this->xCoordinate, this->yCoordinate};
	return location;
}

int Person::getAge () {
	return this->age;
}

int Person::getIncome () {
	return this->income;
}

std::string Person::getName() {
	return this->name;
}