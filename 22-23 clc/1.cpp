#include <iostream>
using namespace std;

double t, m; int tongtien;

void cauA(){
	cout<<"nhap tien muon: "; cin>>t;
	cout<<"nhap thoi han vay: "; cin>>m;
	int tien_goc_hang_thang = t / m; 
	int tien_lai_thang_dau = t / 100;
	double tien_lai_thang_t2;
	int s = 0;
	for( int i = 1; i <= m; i++)
	{
		tien_lai_thang_t2 = (t - tien_goc_hang_thang * i) / 100;
		s += tien_lai_thang_t2;
	} tongtien = t + s + tien_lai_thang_dau;
	cout<<"tong tien khach phai tra ngan hang "tongtien<<endl;
}
void cauB(){
	cout<<"nhap tien muon: "; cin>>t;
	cout<<"nhap thoi han vay: "; cin>>m;
	int tien_goc_hang_thang = t / m; 
	int tien_lai_thang_dau = t / 100;
	double tien_lai_thang_t2;
	int s = 0;
	for( int i = 1; i <= m; i++)
	{
		tien_lai_thang_t2 = (t - tien_goc_hang_thang * i) / 100;
		s += tien_lai_thang_t2;
	} tongtien = t + s + tien_lai_thang_dau;
	cout<<"tong tien khach tra ngan hang khi het thoi han vay "tongtien<<endl;
}

int main(){
	cauA();
	cout<<endl;
	cauB();
}