# Template

## The Bad Old Days Without templates:
we write a function **min()** for int :
```cpp
int min(int a, int b){ return (a < b) ? a : b; }
```
if we want if for **double**:
```cpp
double min(double a, double b){ return (a < b) ? a : b; }
```
for **string**:
```cpp
string min(string a, string b){ return (a < b) ? a : b; }
```
> **Problem** is there are a lot of cut & paste == more Error.
---

First, what is **Generic Programming** ?
**Generic Programming** is implemented to increase the efficiency of the code, but how ?
it allow the programmer to write a **general algorithm** which will work with all data types, It **eliminates** the need to create different algorithms for different data type.
(So that we don’t need to write the same code for different data types.)

>Code Reusability
>Avoid Function Overloading
>Once written it can be used for multiple times and cases.
>**Templates**  are the way to apply **Generic Programming**.
## Template categorie:

### Functions  Template
**Function Templates**: We write a generic function that can be used for different data types. Examples of function templates are sort(), max(), min(), printArray()
```cpp
//Exemple
#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y)
{
	return (x > y) ? x : y;
}

int main()
{
	cout << myMax<int>(3, 7) << endl;        // Call myMax for int
	cout << myMax<double>(3.0, 7.0) << endl; // call myMax for double
	cout << myMax<char>('g', 'e') << endl;   // call myMax for char
	return 0;
}
```
```
	7
	7
	g
```

>T, is nothing but a placeholder, that hold a specific data type.

```cpp
//Exemple
#include <iostream>
using namespace std;

template <typename T> T myMax(T x, T y)
{
	return (x > y) ? x : y;
}
int main()
{
	const char *a = "foo";
	const char *b = "bar";
	const char *c = myMax<const char *>(a, b);
	//or we can write:
	//const char *c = myMax(a, b);
	// the compiler can deduce the type
	cout << "max is " << c << endl;
	return 0;
}
```
```
	max is bar
```
but why? even **'b'** come before **'f'**.
because here we compare pointers **" const char * "** not values.
address of **a** come before **b**

### Class Template
**Class Templates**: useful when a class defines something that is independent of the data type. 
Can be useful for classes like LinkedList, BinaryTree, Stack, Queue, Array, etc.
```cpp
//Exemple
#include <iostream>
using namespace std;

template <typename T> class Array {
private:
	T* ptr;
	int size;
public:
	Array(T arr[], int s);
	void print();
};

template <typename T> Array<T>::Array(T arr[], int s)
{
	ptr = new T[s];
	size = s;
	for (int i = 0; i < size; i++)
		ptr[i] = arr[i];
}

template <typename T> void Array<T>::print()
{
	for (int i = 0; i < size; i++)
		cout << " " << *(ptr + i);
	cout << endl;
}

int main()
{
	int arr[5] = { 1, 2, 3, 4, 5 };
	Array<int> a(arr, 5);
	a.print();
	return 0;
}
```
C++ adds two new keywords to support templates: **‘template’** and **‘typename’**.
The second keyword can be replaced by the keyword **‘class’**.


- **Can there be more than one argument to templates?**

Yes, like normal parameters, we can pass more than one data type as arguments to templates.

```cpp
//Exemple
#include <iostream>
using namespace std;

template <class T, class U>  class A {
private:
	T x;
	U y;
public:
	A() { cout << "Constructor Called" << endl; }
};

int main()
{
	A<char, char> a;
	A<int, double> b;
	return 0;
}
```

>Can we specify a default value for template arguments :
> `template <class T, class U = char>`

- **Useful exemples** :
What if we want to compare **int** with **double** ?

```cpp
#include <iostream>
using namespace std;

template <class RT, class T1, class T2> RT myMax(T1 a, T2 b)  // RT for the return type
{
	return (a > b) ? a : b;
}
int main ()
{
	// <double> here for the first template argument "RT", T1 and T2 will be deduced by compiler.
	cout << myMax<double>(20, 30.5) << endl;
	cout << myMax<double>(30.5, 20) << endl;
	return 0;
}
```
```
	30.5
	30.5
```

- better way using **auto** keyword :

The auto keyword is **a simple way to declare a variable that has a complicated type**. For example, you can use auto to declare a variable where the initialization expression involves templates, pointers to functions, or pointers to members.
```cpp
#include <iostream>
using namespace std;

template <class T1, class T2> auto myMax(T1, T2); // prototype
int main ()
{
	cout << myMax(20, 30.5) << endl;
	cout << myMax(30.5, 20) << endl;
	return 0;
}

template <class T1, class T2> auto myMax(T1 a, T2 b)
{
	return (a > b) ? a : b;
}
```
```
	30.5
	30.5
```

## Template Specialization in C++

With Template, We write code once and use it for any data type including user defined data types, but _What if we want a different code for a particular data type?_
- here is an exemple of code that give a special functionality :

```cpp
#include <iostream>
using namespace std;

template <class T> T addAll(vector<T> list)
{
	T count = 0;
	for (auto &e : list)
		count += e;
	return count;
}

template <> string addAll(vector<string> list) // <> is empty, cause we alredy know the type "string"
{
	int count = 0;
	for (string &e : list){
		for (char &c : e)
			count += c;
	}
	// convert number to string format
	ostringstream out;
	out << count;
	string result = out.str();
	return result;
}
int main ()
{
	vector<int> v1 = {1,2,3,4,5,6};
	vector<double> v2 = {1.0,2,3.2,4.1,5.0,6.3};
	vector<string> v3 = {"abc", "def", "ghi"};
	cout << addAll(v1) << endl;
	cout << addAll(v2) << endl;
	cout << addAll(v3) << endl;
	return 0;
}
```
```
	21
	21.6
	909
```

