#include <iostream>
#include <string>
using namespace std;

//class Animal ������

class Animal
{
public:
	Animal();
	Animal(string name,float health);
private:
	string Name;
	float Health;
};

//class Dog ������

class Dog:public Animal
{
public:
	Dog();
	Dog(string name,float health);
};

//class Cat ������

class Cat:public Animal
{
public:
	Cat(string name,float health);
};

//main ����

int main()
{
	Animal animalConstructor;

	cout << "----------------------" << endl;

	Animal animal("Spot", 100.f);

	cout << "----------------------" << endl;

	Dog dog("Alex", 100.f);//ʹ�� ��ʼ���б� ���幹�캯��������ʹ�ø��๹�캯���н�����������Ĺ��캯�����������ӡ��A animal is born!";

	cout << "----------------------" << endl;

	Cat cat("Mewn",100.f);//�ں������ڶԳ�Ա��ֵ����ʹ�ø��๹�캯���н�����������Ĺ��캯�������ӡ��A animal is born1����
}

//class Aniaml ���⺯������

Animal::Animal()
{
	cout << "A animal is born!" << endl;
}
		
Animal::Animal(string name,float health):Name(name),Health(health)
{	
	cout << "Pet name:" << Name << endl;
	cout << "Pet Health:" << Health << endl;
}

//class Dog ���⺯������

Dog::Dog(){}

Dog::Dog(string name, float health): Animal(name,health){}

//class Cat ���⺯������

Cat::Cat(string name, float health)
{
	Animal(name, health);
}



