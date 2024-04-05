#include <iostream>
using namespace std;
class result{

void result::display()
{
	total=part1+part2+score;
	put_number();
	put_marks();
	put_score();
	cout<<"Total Score:"<<total<<"\n";
}
};
int main()
{
	result student_1;
	student_1.get_number(1234);
	student_1.get_marks(27.5,33.2);
	student_1.get_score(6.6);
	student_1.display();
	return 0;
}

