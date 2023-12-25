#include <iostream>
using namespace std;

int a, b, c, d, e, f, D, Dx, Dy, x, y;
cout<<"he pt ";
cout<<"nhap a, b, c, d, e, f "; cin>>a>>b>>c>>d>>e>>f;

int main(){
	D = a * e - b * d;
	D1 = c * e - b * f;
	D2 = a * f - c * d;

	if ( D == 0 )
	{
		if( Dx == 0 && Dy == 0 )
			cout<<"pt vo so nghiem";
		else cout<<"pt vo nghiem";
	}

	else{
		x = Dx/D; cout<<x;
		y = Dy/D; cout<<y;
	}
}