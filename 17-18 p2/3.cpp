#include<iostream>                       
using namespace std;

struct fraction
{
	int tu, mau;
} fr[100][100]; int n, m;

void input(fraction &fr)
{
	cout<<"numerator: "; cin>>fr.tu;
	cout<<"denominator: "; cin>>fr.mau;
}
void show(fraction fr)
{
	cout<<fr.tu<<"/"<<fr.mau<<endl;
}

void input_arr(fraction fr[][100], int n){
	do{
		cout<<"nhap dong: "; cin>>n;
		cout<<"nhap cot: "; cin>>m;
	}while(n <= 0 || n > 3 );	
	for (int i = 0; i < n; i++)	{
		for(int j = 0; j < m; j++){
			cout<<"\n\tfraction "<<i+1<<endl;
			input(fr[i][j]);			
		}
	}
}

int main(){
	
}