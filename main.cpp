#include <iostream>
#include <string>



class animal {
protected:
	std::string name;
	int age;
	int weight;
public:
	animal() {
		name = "noname";
		age = 0;
		weight = 0;
	}
	animal(std::string name, int age, int weight) {
		this->name = name;
		this->age = age;
		this->weight = weight;
	}
};

class cat : public animal{
private:
	std::string type;
public:
	cat() : animal() {};
	cat(std::string name, int age, int weight) : animal(name, age, weight) {};

	void voice() {
		std::cout << "Meow\n";
	}
	void eat(std::string food) {
		std::cout << name << " eat " << food;
	}				
};

int main() {	

	cat siam("Busya", 5, 6);

	siam.voice();
	siam.eat("fish");

	return 0;
}