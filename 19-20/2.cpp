#include <iostream>
#include <math.h>
using namespace std;
int i, n, u, count = 0; 

bool kiemtra(int &n)
{
    if (n < 2)
        return false;
    for (int i = 2; i <= sqrt(n); i++)
    {
        if (n % i == 0)
        {
            return false;
        }
    }
    return true;
}
int snt(){
	int count = 0;
    for (int i = 0; i < n; i++)
    {
        if (kiemtra(i) == true)
        {
            count++;
        }
    }
    return count;
}
void tongn()
{
	int t = n % 10;
	int o = n / 10;
	u = t + o;
	cout<<"tong cua n: "<<u;
}
int main(){
	cout<<"nhap n: ";
	cin>>n; 
	cout<<"co tat ca: "<<snt()<<" so nguyen to"<<endl;
	tongn(); cout<<endl;

	for ( i = n + 1; ;i++)
	{
		if ( kiemtra(i) == true )
		{
			cout<<"snt nho nhat lon hon n: "<<i<<endl;
			break;
		}
	}
}