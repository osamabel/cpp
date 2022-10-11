#include  <iostream>

class except
{
	std::string error;
public:
	except(std::string error)
	{
		this->error = error;
	}
	std::string msg()
	{
		return error;
	}
};

class  A
{
	int *x;
public:
	A(int i)
	{
		std::cout  <<  "Constractor\n";
		if (i < 0 || i > 100)
			throw except("Out of range");
		x = new int [i];
	}
	~A()
	{
		std::cout  <<  "Deconstractor\n";
		delete [] x;
	}
};
int  main()
{
	try
	{
		A  a(5);
	}
	catch(except& e)
	{
		std::cerr << e.msg() << '\n';
	}
	return 0;
}