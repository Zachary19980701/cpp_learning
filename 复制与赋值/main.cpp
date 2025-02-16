#include <iostream>


class Point
{
public:
	double x, y;
};

class Route
{
public:
	Route();
	~Route();
	Point point_1, point_2;
	//���ƹ��캯��
	Route(Route& another) // �Ƕ�ͬ���Ͷ��������**&**
	{
		another.point_1 = point_1;
		another.point_2 = point_2;
		std::cout<<"copy value to this......" << std::endl;
	};

	// ��ֵ���캯��
	Route& operator=(Route& another_route) {
		point_1 = another_route.point_1;
		point_2 = another_route.point_2;
		std::cout << "assign value to this......" << std::endl;
		return *this;
	}
private:

};

Route::Route()
{
}

Route::~Route()
{
}

int main() 
{
	//  ��׼���͵Ķ����ʼ��
	// ��ֵ assign
	int a = 3;
	int b = 4;
	std::cout << a << b << std::endl;
	// ���� copy
	int c(5);
	int d(6);
	std::cout << c << d << std::endl;

	// ���ͨ����ֵ�븴�ƽ��г�ʼ��
	Route route_1;
	Route route_2(route_1);
	Route route_3;
	route_3 = route_1;
	return 0;

}