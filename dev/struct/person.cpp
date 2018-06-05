#include<iostream>
#include<string>

struct Person {
	std::string name;
	int age;
	std::string gender;
	std::string email;
};

void input_data (Person& man) {
	man.name = "Levon";
        man.age = 28;
        man.gender = "male";
        man.email = "levonhar8yan@gmail.com";

}

void print_data (const Person& man) {
	std::cout<<"Person name is  "<<man.name<<std::endl;
	std::cout<<"Person age is  "<<man.age<<std::endl;
	std::cout<<"Person gender is  "<<man.gender<<std::endl;
	std::cout<<"Person email is  "<<man.email<<std::endl;

	
	
	
}

int main () {
	Person man;
	input_data ( man);
	print_data ( man);  
}
