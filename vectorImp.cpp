/*vector容器支持随机访问，它内部使用动态数组的方式实现，当进行insert或push_back等增加元素的操作时，如果此时动态数组的内存不够用，就要动态的重新分配，一般是当前大小的两倍，然后把原数组的内容拷贝过去。
vector中的size()函数是获得vector中的元素个数，capacity()函数是获得vector的容量，内存大小。*/

#include<iostream>
using namespace std;
#include<vector>

int main(){
	typedef vector<int> IntArray;
	IntArray a;
	a.push_back(1);
	a.push_back(2);
	a.push_back(3);
	a.push_back(2);
	IntArray::iterator it=a.begin();
	for(;it!=a.end();){
		if(*it==2)
			a.erase(it);
		else
			++it;
	}
	it=a.begin();
	while(it!=a.end()){
		cout<<*it++<<"   ";
	}
	return 0;
}
