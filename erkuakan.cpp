#include<iostream>
#include<vector>
using namespace std;
vector <int> erkuakan (int number){
	int a=0;
	vector<int>b;
	for (int i=0;number>=2;i++){
		a=number%2;
		number /=2;
		b.push_back(a);
	}
	b.push_back(number);
	return b;
}
