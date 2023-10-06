#include <iostream>
#include <vector>
using namespace std;
int main(){
	vector<int> A;
	for(int i=0;i<10;i++){
		A.push_back(i);
	}
	for(auto x : A)
		cout<<x<<" ";
	return 0;
}
