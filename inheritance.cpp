#include<iostream>
using namespace std;
class A
{
	public:
		int apple;
	protected:
		int lemon;
	private:
		void banana()
		{
			cout<<"APPLE";
			cout<<"BANANA";
			cout<<"LEMON";
		}
};
class B: public A
{
	public: int dapple;
	protected: int dlemon;
//	private: void  dbanana();
};
int main()
{
	B obj;
//	obj.dbanana();
}
