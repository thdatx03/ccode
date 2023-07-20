
#include <iostream>
using namespace std;

void nhapmang(int a[],int n)
{
	cout<<"\n\t\t NHAP MANG"<<endl;
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"Nhap phan tu vao mang a["<<i<<"]= ";
		cin>>a[i];
	}
}


void xuatmang(int a[],int n)
{
	cout<<"\n\t\t CAC PHAN TU TRONG MANG LA";
	cout<<endl;
	cout<<endl;
	for(int i=0; i<n; i++)
	{
		cout<<"a["<<i<<"]="<<a[i]<<"   ";
	}
}
 void tongle(int a[], int n)
 {
 	int tongle=0;
 	for(int i=0; i<n;i++)
 	{
 		if(a[i]%2!=0)
 		{
 			tongle+=a[i];	
		}
	}
	cout<<"Tong le la: "<<tongle;
 }
void min(int a[], int n)
 {
 	int min = a[0];
 	int vt = 0;
 	for(int i=0; i<n;i++)
 	{
 		if(a[i]<min)
 		{
 			min=a[i];
 			vt=i;
		}
	}
	cout<<"\nVi tri cua so be nhat: "<<"a["<<vt<<"]= "<<min;
 }


int main()
{
	int n;
	cout<<"\nNhap so luong phan tu trong mang a: ";
	cin>>n;
	int a[100];
	nhapmang(a, n);
	xuatmang(a, n);
	cout<<endl;
	tongle(a,n);
	min(a, n);

}