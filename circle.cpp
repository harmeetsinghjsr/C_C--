#include <iostream>
using namespace std;
class Circle
{   

private: int r;
public:float find_area()
{
	r=1;
	return 3.14*r*r;
};
main()
{
	Circle Ob;
	Ob.find_area();
	return 0;
}
};
