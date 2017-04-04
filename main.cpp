#include <iostream>
#include <fstream>
#include <cstdlib>
#include <vector>
#include <algorithm>
using namespace std;
int main(){
int a;
int n;
	ifstream infile("file.in",ios::in);
	if(!infile){
		cerr<<"Failed opening"<<endl;
		exit(1);
	}
	infile>>n;
	vector<int>v(n);
	for(int i=0;i<n;i++)
		infile>>v.at(i);
	sort(v.begin(),v.end());
int tmp=0,j;
for(j=n-1;j>n-6;j--)
	tmp=tmp+v.at(j);
cout<<tmp<<endl;
}
