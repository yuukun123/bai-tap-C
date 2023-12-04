#include<iostream>
#include<string.h>                             
using namespace std;

struct sach {
	char title[30], author[30];
	double price;
};
sach a[100]; int n, b[100], p, t; double s = 0;

void nhap1sach(sach &x)
{
	cout<<endl<<"ten sach: "; fflush(stdin); gets(x.title); 
	cout<<"tac gia: "; fflush(stdin); gets(x.author);
	cout<<"gia tien: "; cin>>x.price;
}
void xuat1sach(sach x)
{
	cout<<endl<<"ten sach: "<<x.title<<endl;
	cout<<"tac gia: "<<x.author<<endl;
	cout<<"gia tien: "<<x.price;
}
void nhapn(int &n)
{
	do{
		cout<<"nhap so sach trong thu vien: "; cin>>n;
	}while(n <= 0 || n >100 );
}
void nhapmangsach(sach a[], int n)
{
	for (int i = 0 ; i < n; ++i){
		cout<<endl<<"nhap sach thu : "<<i+1;
		nhap1sach(a[i]);
	}
}
void xuatmangsach(sach x[], int n)
{
	for (int i = 0 ; i < n; ++i){
		cout<<endl<<"thong tin sach "<<i+1<<endl;
		cout<<"ma sach: "<<i;
		xuat1sach(x[i]); cout<<endl;
	}
}
void themsach(sach x[], int &n)
{
	cout<<"nhap so sach muon them: "; cin>>t;
	if ( t + n > 100) cout<<"sach trong thu vien da day ";
	else{
		for ( int i = 0; i < t; i++){
			cout<<endl<<"nhap thong tin sach them"<<endl;
			nhap1sach(x[n]);	
			n++;
		}
	}
}
void timkiem(sach x[], int n , char tensach[])
{
	int i;
	for( i = 0; i <= n; ++i)
	{
		if( strcmp(x[i].title,tensach) == 0 || strcmp(x[i].author,tensach) == 0)
		{
			cout<<endl<<"cac sach hoac tac gia co ten: "<<tensach;
			xuat1sach(x[i]);
			break;
		}
	}	if (i > n ) cout<<"khong co sach hoac tac gia muon tim";
}
int gh=0;
void giohang(int n,int m){
        gh+=m;
        if(gh>30){cout<<"Gio hang da dat gioi han!!"<<'\n'<<'\n';}
        else {b[n]+=m;
        s=s+(a[n].price*m);}
}
void dathang(int n)
{
	int i, m, c;
	cin>>p;
	if ( p > n ){
		cout<<"khong du sach de mua";
	}
	else{
		for( i = 0 ; i < p; ++i){
			cout<<"ma sach: ";
			cin>>c;
			if ( c > p) cout<<"khong co sach trong thu vien";
			else{
				cout<<"nhap so luong: "; cin>>m;
				giohang(c,m);
			}
		} cout<<"mua thanh cong!!!";
	}
}
void xemdonhang()
{
	for ( int i = 0 ; i <= p ; i++ )
	{
		if ( b[i] != 0)
		{
			cout<<endl<<"quyen sach "<<i<<endl;
	 		cout<<"ten sach: "<<a[i].title<<endl;
	 		cout<<"tac gia: "<<a[i].author<<endl;
	 		cout<<"gia tien: "<<a[i].price<<endl;
	 		cout<<"so luong: "<<b[i]<<endl;
		}
	} cout<<endl<<"gia tien cua don hang: "<<s;
}
int main() {
	int luaChon;		
	nhapn(n);
	nhapmangsach(a,n);
	do{					

		cout<<"\n\n\t	   ===Menu==="
		<<"\n\t_________________________________"
		<<"\n\t|  1. nhap sach 		|" 				
		<<"\n\t|  2. danh sach quyen sach 	|"
		<<"\n\t|  3. tim kiem sach 		|"
		<<"\n\t|  4. dat hang 			|"
		<<"\n\t|  5. xem don hang 		|"
		<<"\n\t|  0. thoat 			|"
		<<"\n\t|_______________________________|"
		<<"\n\n moi ban chon: "; cin>>luaChon;
		switch( luaChon ) {
			case 0: break;
			case 1:{
				themsach(a,n);
				break;
			}
			case 2:{
				cout<<endl<<"________thong tin sach________"<<endl;
				xuatmangsach(a,n);
				break;
			}
			case 3:{
				cout<<endl<<"_______tim kiem sach________"<<endl;
				char tensachmuontim[20];
				cout<<endl<<"nhap ten sach hoac tac gia: ";
				fflush(stdin); gets(tensachmuontim);
				timkiem(a,n,tensachmuontim);
				break;
			}
			case 4:{
				cout<<endl<<"_______mua sach________"<<endl;
				cout<<"nhap so sach muon mua: ";
				dathang(n);
				break;
			}
			case 5:{
				cout<<endl<<"_______xem don hang________"<<endl;
				xemdonhang();
				break;
			}
		}
	}while (luaChon != 0);
}