#include <iostream>
#include <string>
#include <vector>
#include "person.h"


Person buildPerson() {
	std::cout << "Within buildPerson function" << std::endl;
		std::string name;
		int age;
		int income;
		int x;
		int y;

		std::cout << "Enter your name: " << std::endl;
		std::cin >> name;
		std::cout << "Enter your age: " << std::endl;
		std::cin >> age;
		std::cout << "Enter your salary: " << std::endl;
		std::cin >> income;
		std::cout << "Enter your x coordinate: " << std::endl;
		std::cin >> x;
		std::cout << "Enter your y coordinate: " << std::endl;
		std::cin >> y;

		Person person = Person(name, age, income, x, y);
		return person;
}

void printPersonInfo(Person person) {
	std::cout << "Within printPersonInfo function" << std::endl;
		std::cout << "Name: " << person.getName() << ", Age: " << person.getAge() << ", Income: " << person.getIncome() << ", Coordinates: ";
	for (int i = 0; i<person.getLocation().size(); i++) {
		std::cout << person.getLocation()[i] << ", ";
	}
}


int main()
{
	printPersonInfo(buildPerson());
	return 0;
}