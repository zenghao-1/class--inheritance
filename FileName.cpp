#include <iostream>
#include <string>
using namespace std;

//class Animal 类主体

class Animal
{
public:
	Animal();
	Animal(string name,float health);
private:
	string Name;
	float Health;
};

//class Dog 类主体

class Dog:public Animal
{
public:
	Dog();
	Dog(string name,float health);
};

//class Cat 类主体

class Cat:public Animal
{
public:
	Cat(string name,float health);
};

//main 函数

int main()
{
	Animal animalConstructor;

	cout << "----------------------" << endl;

	Animal animal("Spot", 100.f);

	cout << "----------------------" << endl;

	Dog dog("Alex", 100.f);//使用 初始化列表 定义构造函数，不会使用父类构造函数中接受零个参数的构造函数，即不会打印“A animal is born!";

	cout << "----------------------" << endl;

	Cat cat("Mewn",100.f);//在函数体内对成员赋值，会使用父类构造函数中接受零个参数的构造函数，会打印”A animal is born1“；
}

//class Aniaml 类外函数声明

Animal::Animal()
{
	cout << "A animal is born!" << endl;
}
		
Animal::Animal(string name,float health):Name(name),Health(health)
{	
	cout << "Pet name:" << Name << endl;
	cout << "Pet Health:" << Health << endl;
}

//class Dog 类外函数声明

Dog::Dog(){}

Dog::Dog(string name, float health): Animal(name,health){}

//class Cat 类外函数声明

Cat::Cat(string name, float health)
{
	Animal(name, health);
}



