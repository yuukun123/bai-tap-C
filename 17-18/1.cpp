#include <iostream>

using namespace std;

int main(){
	int n, s = 0;
	cin>>n;
	for (int i = n; i > 0; i /= 10){
	s += i % 10;
	} cout <<s;
}