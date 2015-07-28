/*reverse逆置函数：
reverse函数是一个全局函数，不是成员函数。
它有两个参数：一个是指向要操作的范围的头指针，一个是指向尾的指针。
reverse操作范围可以是数组，容器等。
如  reverse(a,b);

STL算法都包含在头文件：#include<algorithm>
vector中的erase函数和algorithm里面的remove函数：
1. vector中的erase函数是真正删除了元素，迭代器不能访问了。
2. algorithm里面的remove函数的原理是复制不是指针的移动，因为algorithm通过迭代器操作，不知道容器内部的结构。它并不是直接把元素删除，而是用后面的元素替代前面的元素，如1234，remove2则返回序列为1344（3被复制到了2的位置，4被复制到3的位置，元素的个数没变，最后一位还是4没变）。
3. 备注：list中含有remove函数，可以删除元素。与algorithm中的remove算法不同。
list中的调用方式是list.remove(2).algorithm中的调用方式是：remove(list.begin(),list.end(),2);
*/

#include<iostream>
#include<vector>
#include<string>
#include<algorithm>
using namespace std;

int main(){
	int a[4]={1,2,3,4};
	vector<string> v;
	v.push_back("one");
	v.push_back("two");
	v.push_back("three");
	reverse(a,a+4);
	for(int i=0;i<4;++i)cout<<a[i]<<"   ";
	cout<<endl;
	reverse(v.begin(),v.end());
	vector<string>::iterator it;
	v.erase(v.begin());
	for(it=v.begin();it!=v.end();++it)cout<<*it<<"   ";
	cout<<endl;
	cout<<v.size()<<endl;
	it=remove(v.begin(),v.end(),"two");
	vector<string>::iterator it1;
	for(it1=v.begin();it1!=v.end();++it1)cout<<*it1<<"  ";
	cout<<endl;
	cout<<v.size()<<endl;
	return 0;
}
