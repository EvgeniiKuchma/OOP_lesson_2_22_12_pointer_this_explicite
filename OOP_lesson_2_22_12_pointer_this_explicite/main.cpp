#include <iostream>
#include "point.h"
#include "Tiger.h"
//�������� ����� explicit ������ �� ������ ��������������
int main()
{
	setlocale(LC_ALL, "Russian");
	/*char str[] = "abc";	
	Point my_point(5, 10, str);*/
	
	/*std::cout << my_point.getX() << std::endl;//����� 5
	my_point.move(3, 9);
	std::cout << my_point.getX() << std::endl;//����� 8*/
	
	Tiger t(5, "yellow");
	std::cout << t << std::endl;

	std::cout << t.figth() << std::endl;
	
	return 0;
}