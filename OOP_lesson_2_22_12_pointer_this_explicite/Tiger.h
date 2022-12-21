#pragma once
#include <string>
#include <iostream>
//Tiger this
class Animal
{
public: 
	//Конструктор для Animal
	Animal()
	{
		std::cout << "Конструктор для Animal" << std::endl;
	}
	~Animal() 
	{
		std::cout << "Деструктор для Animal" << std::endl;
	}
	int figth()
	{
		return strength;
	}
	int run()
	{
		return speed;
	}
	int  eat()
	{
		std::cout << "Animal have eaten" << std::endl;
	}
private:
	int strength = 10;
	int speed = 5;
};

class Tiger : public Animal//наследование или private Animal - наследование только Tiger
{
public:
	Tiger(int heigth, const std::string& color) 
	{
		std::cout << "Constructor for Tiger" << std::endl;;
		_heigth = heigth;
		_color = color;
	}
	~Tiger()
	{
		std::cout << "Destructor for Tiger" << std::endl;
	}
	int figth ()
	{
		return _strength;
	}
	void setHeigth(int heigth)
	{
		_heigth = heigth;
	}
	int getHeigth() const//константная функция не должна менять поля класса
	{
		//_heigth = 5; - cjmpile error
		//setHiegth(10); - неконстантная функция, compile error
		return _heigth;
	}
	//возможность использования оепратора вывода для класса  Tiger
	const std::string& getColor()
	{
		return _color;
	}
	friend std::ostream& operator << (std::ostream& os, Tiger& t)
	{
		os << t.getHeigth() << " " << t.getColor();
		return os;
	}
private:
	int _heigth;
	std::string _color;
	int _strength = 50;
};

