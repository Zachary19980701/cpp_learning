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
	//复制构造函数
	Route(Route& another) // 是对同类型对象的引用**&**
	{
		another.point_1 = point_1;
		another.point_2 = point_2;
		std::cout<<"copy value to this......" << std::endl;
	};

	// 赋值构造函数
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
	//  标准类型的定义初始化
	// 赋值 assign
	int a = 3;
	int b = 4;
	std::cout << a << b << std::endl;
	// 复制 copy
	int c(5);
	int d(6);
	std::cout << c << d << std::endl;

	// 类的通过赋值与复制进行初始化
	Route route_1;
	Route route_2(route_1);
	Route route_3;
	route_3 = route_1;
	return 0;

}