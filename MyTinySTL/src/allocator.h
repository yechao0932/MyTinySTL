#pragma once
//allocator.h应该完成分配内存的工作
//命名空间mystl
namespace mystl {

//allocator模板
template <typename T>
class allocator {
public:
	//以下用来traits萃取，一般是迭代器iterator_traits。当某个确定的容器定义了value_type，通过traits就可以得到类型
	//allocator似乎可以不定义吧。。。
	typedef T value_type; 
	typedef T* pointer;
	typedef T& reference;
	typedef const T* const_pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
public:
	static T* allocate();//为什么是static的？因为不需要对象来调用，是一个工具函数
	static T* allocate(size_type n);//不能轻易用int


};

}