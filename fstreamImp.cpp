/*从文件导入数据，进行处理过后，将数据输出到另一个文件。
*/

#include<iostream>
#include<fstream>
#include<vector>
using namespace std;

int main(){
	vector<int> data;
	ifstream in("data.txt");
	if(!in){
		cout<<"in file error!"<<endl;
		return 1;
	}
	int temp;
	while(!in.eof()){
		in>>temp;
		data.push_back(temp);
	}
	in.close();
	ofstream out("result.txt");
	if(!out){
		cout<<"out file error! \n";
		return 1;
	}
	
	for(int i=0;i<data.size();++i)
		out<<data[i]<<" ";
	out.close();
	return 0;

}

