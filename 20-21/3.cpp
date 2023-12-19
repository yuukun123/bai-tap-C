#include <iostream>
#include <climits>
using namespace std;

struct fraction
{
	int tu, mau;
} fr[3]; int n;

void input(fraction &fr)
{
	cout<<"numerator: "; cin>>fr.tu;
	cout<<"denominator: "; cin>>fr.mau;
}
void show(fraction fr)
{
	cout<<fr.tu<<"/"<<fr.mau<<endl;
}

void input_arr(fraction fr[], int &n)
{
	
	do{
		cout<<"nhap phan tu: "; cin>>n;
	}while(n <= 0 || n > 3 );	
	for (int i = 0; i < n; i++)
	{
		cout<<"\n\tfraction "<<i+1<<endl;
		input(fr[i]);
	}
}

void show_arr(fraction fr[], int n){
	for (int i = 0; i < n; i++)
	{
		cout<<"\nfraction "<<i+1<<"\t"; show(fr[i]);
	}
}

void max_num(fraction fr[], int &n){
	double temp = INT_MIN;
	for(int i = 0; i < n; i++){
		if ( ((fr[i].tu) / (fr[i].mau)) > temp ){
			temp = (fr[i].tu) / (fr[i].mau) ;
		}
	}
	cout<<endl<<"phan so lon nhat ";
	for(int i = 0; i < n; i++){
		if( ((fr[i].tu) / (fr[i].mau)) == temp ){
			cout<<fr[i].tu<<"/"<<fr[i].mau;
		}
	} 
}

fraction Tinh_Tong_2_Phan_So(fraction x, fraction y)
{
	fraction sum;
	if (x.mau != y.mau)
	{
		sum.tu = (x.tu * y.mau) + (y.tu * x.mau);
		sum.mau = x.mau * y.mau;
	}
	else
	{
		sum.tu = x.tu + y.tu;
		sum.mau = x.mau;
	}
	return sum;
}
fraction Tinh_Tong_Tat_Ca_Phan_So(fraction fr[])
{

	fraction sum = fr[0];
	for (int i = 1; i < n; i++)
	{
		sum = Tinh_Tong_2_Phan_So(sum, fr[i]);
	}
	return sum;
}

int UCLN(int x, int y)
{
	if (x < 0)
	{
		x *= -1;
	}
	if (y < 0)
	{
		y *= -1;
	}
    int r;
    while (x%y!=0)
    {
        r=x%y;
        x=y;
        y=r;
    }
	return y;
}
void Rut_Gon_Phan_So(fraction &fr)
{
	if (fr.mau == 0) ;
	else
	{
		int ucln = UCLN(fr.tu, fr.mau);
		fr.tu = fr.tu / ucln;
		fr.mau = fr.mau / ucln;
	}
}

int main(){
	input_arr(fr,n);
	show_arr(fr,n);

	max_num(fr,n);

	fraction sum;
	sum = Tinh_Tong_Tat_Ca_Phan_So(fr);
	Rut_Gon_Phan_So(sum);
	cout<<endl<<"tong phan so "; show(sum);


}