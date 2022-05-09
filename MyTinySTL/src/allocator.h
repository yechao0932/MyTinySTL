#pragma once
//allocator.hӦ����ɷ����ڴ�Ĺ���
//�����ռ�mystl
namespace mystl {

//allocatorģ��
template <typename T>
class allocator {
public:
	//��������traits��ȡ��һ���ǵ�����iterator_traits����ĳ��ȷ��������������value_type��ͨ��traits�Ϳ��Եõ�����
	//allocator�ƺ����Բ�����ɡ�����
	typedef T value_type; 
	typedef T* pointer;
	typedef T& reference;
	typedef const T* const_pointer;
	typedef size_t size_type;
	typedef ptrdiff_t difference_type;
public:
	static T* allocate();//Ϊʲô��static�ģ���Ϊ����Ҫ���������ã���һ�����ߺ���
	static T* allocate(size_type n);//����������int


};

}