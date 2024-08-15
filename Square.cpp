#include <iostream>

class Square
{
private:
	int side_length;
	static int total_squares;	// Counting how many Square objects there are

	//static void incrementTotal()   // Does same thing, just add function to Constructor
	//{
	//	total_squares++;
	//}
public:
	Square() { side_length = 0;}
	Square(int length) 
	{ 
		side_length = length;
		total_squares++;
		//incrementTotal();		//FOR PRIVATE STATIC INT MEMBERS
	}

	int area()
	{
		return side_length * side_length;
	}

	static int getTotal()
	{
		return total_squares;
	}
};

int Square::total_squares = 0;

int main()
{
	Square square1(6);
	std::cout << square1.area() << '\n';
	std::cout << "total squares: " << Square::getTotal() << '\n';	// :: best practice rather than dot operator

	Square square2(4);
	std::cout << square2.area() << '\n';
	std::cout << "total squares: " << Square::getTotal() << '\n';

	return 0;
}
