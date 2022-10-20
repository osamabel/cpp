# STL

The standard Template Library is a part of C++ standard. it provides  **containers** , **iterators**  and  **algorithms**

> ***Container*** are used to store data
> ***iterators*** are used to move on this container. (every container have special iterator)
> - in Array we need random access iterator.
> - in List for example we traverse on each node.
> 
> ***Algorithm*** may used for *sorting*, *searching*, *reversing* containers.

# Containers
The Containers library is a generic collection of class templates and algorithms that allow programmers to easily implement common data structures like queues, lists and stacks. There are two classes of containers:
>  sequence containers,
>  associative containers,

- **Sequence containers** implement data structures which can be accessed sequentially.
 
[array](https://en.cppreference.com/w/cpp/container/array): static contiguous array
[vector](https://en.cppreference.com/w/cpp/container/vector): dynamic contiguous array
[deque](https://en.cppreference.com/w/cpp/container/deque): double-ended queue
[list](https://en.cppreference.com/w/cpp/container/list): doubly-linked list
[forward_list](https://en.cppreference.com/w/cpp/container/forward_list): singly-linked list (c++ 11)

> [video-1](https://www.youtube.com/watch?v=gxZJ5JNuWMY)

- **Associative containers** implement sorted data structures that can be quickly searched (O(log n) complexity).

[set](https://en.cppreference.com/w/cpp/container/set): collection of unique keys, sorted by keys
[map](https://en.cppreference.com/w/cpp/container/map): collection of key-value pairs, sorted by keys, keys are unique
[multiset](https://en.cppreference.com/w/cpp/container/multiset): collection of keys, sorted by keys
[multimap](https://en.cppreference.com/w/cpp/container/multimap): collection of key-value pairs, sorted by keys

> [video-1](https://www.youtube.com/watch?v=TCu76SYmVCg)
> [video-2](https://www.youtube.com/watch?v=6iyzPed7FrM)
> [video-3](https://www.youtube.com/watch?v=87nl4J5mc-s)

### Array
```cpp
#include <array>
//is a container that encapsulates fixed size arrays.
//std::array<T, N> arr;
//Access:
//	at(). -> throw exeption "out of bounds"
//	[]
//	front()
//	back()

int main()
{
	std::array<int, 3> myArr;
	myArr = {1,2,3};
	//or by index
	myArr[0] = 1;
}
```

### Vector
```cpp
#include <vector>
//is a container have a Dynamic size
//std::vector<T> vec;
//Access:
//	at(). -> throw exeption "out of bounds"
//	[]
//	front()
//	back()
//	data()

int main()
{
	std::vector<int> myVec;
	//initialization
	//std::vector<int> myVec = {1,2,3};
	//std::vector<int> myVec {1,2,3};
	//std::vector<int> myVec (5, 20); // [ 20 | 20 | 20 | 20 | 20 ]
	for (int i = 0; i <= 32; i++)
	{
		std::cout << "Size = " << myVec.size() << " Capacity = " << myVec.capacity() << std::endl;
		myVec.push_back(i);
	}
}
```

output
```
Size = 0 Capacity = 0
Size = 1 Capacity = 1
Size = 2 Capacity = 2
Size = 3 Capacity = 4
Size = 4 Capacity = 4
Size = 5 Capacity = 8
Size = 6 Capacity = 8
Size = 7 Capacity = 8
Size = 8 Capacity = 8
Size = 9 Capacity = 16
Size = 10 Capacity = 16
Size = 11 Capacity = 16
Size = 12 Capacity = 16
Size = 13 Capacity = 16
Size = 14 Capacity = 16
Size = 15 Capacity = 16
Size = 16 Capacity = 16
Size = 17 Capacity = 32
Size = 18 Capacity = 32
Size = 19 Capacity = 32
Size = 20 Capacity = 32
Size = 21 Capacity = 32
Size = 22 Capacity = 32
Size = 23 Capacity = 32
Size = 24 Capacity = 32
Size = 25 Capacity = 32
Size = 26 Capacity = 32
Size = 27 Capacity = 32
Size = 28 Capacity = 32
Size = 29 Capacity = 32
Size = 30 Capacity = 32
Size = 31 Capacity = 32
Size = 32 Capacity = 32
```
> capacity of vector double every his full.
> to avoid allocation/copy, use **" vector<int> vec; vec.reserve(120) "**.

### Set
**std::set<T>** is an Associative Container that. contains a **sorted** set of **unique** objects of key type.
It implemented by **Red-black tree**.
```cpp
set<int,std::less> <=> set<int> = default; //  1 2 3 4 5 6
set<int,std::greater>                      //  6 5 4 3 2 1

set<int> s = {1, 5, 9, 3, 6, 4, 7, 8, 5, 9, 8, 7} ; // 1 2 3 4 5 6 7 8 9
set<int,std::greater> s = {1, 5, 9, 3, 6, 4, 7, 8, 5, 9, 8, 7} ; // 9 8 7 6 5 4 3 2 1  
```

# iterators

## 1 . random access iterator : vector, deque, array

## 2 . bidirectional iterator : lit, set/multi , map/ multi

## 3 . forward iterator : forward_list

## 4 . input iterator
```cpp
	int x = *itr;
```

## 5 . output iterator
```cpp
	*itr = 10;
```
- https://www.youtube.com/c/CppNuts/search
- https://www.youtube.com/watch?v=vO2AlrBf5rQ&list=PL5jc9xFGsL8G3y3ywuFSvOuNm3GjBwdkb&index=8
- https://www.youtube.com/watch?v=WK97Pj0wa7A&list=PL1w8k37X_6L9NXrP1D31hDTKcdAPIL0cG&index=10
- https://www.youtube.com/watch?v=uGWeixb7HMo&list=PLk6CEY9XxSIA-xo3HRYC3M0Aitzdut7AA&index=16
- https://www.learncpp.com/
- https://en.cppreference.com/w/
- https://www.linkedin.com/learning/search?entityType=ALL&keywords=c%2B%2B%20stl&language=en_US&spellcheck=true



