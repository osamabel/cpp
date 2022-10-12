
H~2~O

I need to highlight these ==very important words==.

X^2^

### My Great Heading {#custom-id}

That is so funny! :joy:

- [ ] Write the press release  
- [ ] Update the website  
- [ ] Contact the media
~~The world is flat.~~

term  
: definition
# Exceptions
## Intro
When writing reusable code, error handling is a necessity.
One of the most **common** ways to handle potential errors is via return codes.

```cpp
#include <string>

int findFirstChar(std::string string, char ch)
{
    for (std::size_t index = 0; index < string.length(); ++index)
        if (string[index] == ch)
            return index;
    return -1;
}
```

Using return codes has a number of drawbacks :
> functions can only return **one** value, can be an ( **error** ), or  the ( **valid value** ).
> **so what happens when you need to return both a function result and an error code?**

We can handling error using **if/else** statements, what makes our code "ugly".
```cpp
#include <iostream>

double divide(int x, int y, bool& outSuccess)
{
    if (y == 0) // avoid dividing by Zero
    {
        outSuccess = false;
        return 0.0;
    }
    outSuccess = true;
    return static_cast<double>(x)/y;
}

int main()
{
    bool success;
    double result = divide(5, 3, success);
    
    if (!success) // We can do better with "try {} & catch {}"
        std::cerr << "An error occurred" << std::endl;
    else
        std::cout << "The answer is " << result << '\n';
}
```
Exception
: Exception handling provides a mechanism to decouple **handling of errors** from **the typical control flow of your code**.

## Exception Handling
In C++, we use the **try** keyword to define a block of statements (called a **try block**).
The **try block** acts as an observer, looking for any exceptions that are **thrown**.
We use **throw statement** to signal that an exception or error case has occurred.

- Examples :
```cpp
try
{
	// Examples :
    throw -1;                                            // throw a literal integer value
	throw "Can not take square root of negative number"; // throw a literal C-style (const char*) string
	throw MyException("Fatal Error");                    // Throw an object of class MyException	
}
```

Handling exceptions is the job of the **catch block**.
The **catch** keyword is used to handles exceptions for a **single data type**.
- Examples:
```cpp
catch (int x)
{
    // Handle an exception of type int here
    std::cerr << "We caught an int exception with value" << x << '\n';
}
```

>-- **Try** and **catch** work together.
>-- try block detects any exceptions.
>-- catch block handling it.
>-- A try block must have **at least** one catch block, may have **multiple catch** blocks.
- Examples:
```cpp
try
{
	throw -1;
}
catch (int x)
{
    std::cerr << "We caught an int exception with value" << x << '\n';
}
```
```cpp
try
{
	std::cout << "this is my output befor throw\n";
	if (true)
		throw "Index out of range";
	std::cout << "this is my output after throw\n";
}
catch (std::string str)
{
    std::cerr << "Error : " << x << '\n';
}
```
output :
```
	this is my output befor throw
	Error : Index out of range
```
Note that **“this is my output after throw”** is never printed, because execution jump to handle exception.

## Exceptions and classes
Exceptions are useful in member functions.
```cpp
int& IntArray::operator[](const int index)
{
	if (index => 0 && index < len)
	    return m_data[index];
    else
	    //Error;
}
```
This is the traditional way to handle "Out Of Range" error, but it is better to do it with exception.
```cpp
int& IntArray::operator[](const int index)
{
    if (index => 0 && index < len)
	    return m_data[index];
    throw index;
}
```
---
Constructors are another area of classes in which exceptions can be very useful.
```cpp
#include  <iostream>
class  A
{
	int *x;
	int *y;
public:
	A(int  i, int  j)
	{
		std::cout  <<  "Constractor\n";
		x = new int [i];  // new int [5]  <=> Leak
		y = new int [j];  // new int [-1] <=> Abourt
	}
	~A()
	{
		std::cout  <<  "Deconstractor\n";
		delete  []  x;
	}
};
int  main()
{
	A  a(5,-1);
	return 0;
}
```
Output
```
Constractor.
libc++abi.dylib: terminating with uncaught exception of type std::bad_alloc: std::bad_alloc
[1]    34071 abort      ./a.out
```
when a constructor fail for some reason, it throw an **exception** ( for this example > **std::bad_alloc** ).
the object’s construction called may **abort**, which mean the **destructor** is never called.
>**How do we ensure to clean up the resources that we’ve already allocated properly?**
>you know the answer, why you act like you don't know ?, **Yeah, use Exceptions** .

```cpp
#include  <iostream>

class Except
{
	std::string error;
public:
	except(std::string  error) : error(error) {}
	std::string  msg() { return  error; }
};

class  A
{
	int *x;
public:
	A(int i)
	{
		std::cout  <<  "Constractor\n";
		if (i < 0 || i > 100)
			throw Except("Out of range");
		x = new int [i];
	}
	~A()
	{
		std::cout << "Deconstractor\n";
		delete [] x;
	}
};
int  main()
{
	try
	{
		A  a(-5);
	}
	catch(Except& e)
	{
		std::cerr  <<  e.msg() <<  '\n';
	}
	return  0;
}
```

## Exceptions and inheritance