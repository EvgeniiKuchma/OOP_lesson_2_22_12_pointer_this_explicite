#pragma once
#include <string>
#include <iostream>
//Tiger this
class Animal
{
public: 
	//����������� ��� Animal
	Animal()
	{
		std::cout << "����������� ��� Animal" << std::endl;
	}
	~Animal() 
	{
		std::cout << "���������� ��� Animal" << std::endl;
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

class Tiger : public Animal//������������ ��� private Animal - ������������ ������ Tiger
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
	int getHeigth() const//����������� ������� �� ������ ������ ���� ������
	{
		//_heigth = 5; - cjmpile error
		//setHiegth(10); - ������������� �������, compile error
		return _heigth;
	}
	//����������� ������������� ��������� ������ ��� ������  Tiger
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

