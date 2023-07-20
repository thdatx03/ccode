#include <iostream>
using namespace std;

void nhapmang(int a[][100], int n, int m)
{
	cout<<"\tNHAP MANG"<<endl;
	for(int i=0; i<n; i++)
	for(int j=0; j<m; j++)
	{
		cout<<"Nhap du lieu vao mang a["<<i<<"]["<<j<<"]= ";
		cin>>a[i][j];
	}
}

void xuatmang(int a[][100], int n, int m)
{
	cout<<"\tCAC PHAN TU TRONG MANG LA"<<endl;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			cout<<"a["<<i<<"]["<<j<<"]= "<<a[i][j]<<"  ";
		}
		cout<<endl;
	}
}

bool ktsnt (int n)
{
	if(n<2)
	{
		return false;
	}
	else
	{
		if(n==2)
		{
			return true;
		}
		else
		{
			if(n%2==0)
			{
				return false;
			}
			else
			{
				for(int i=2; i<n;i++)
				{
					if(n%i==0)
					{
						return false;
					}
				}
			}
		}
	}
	return true;
}

void xuatsnt (int a[][100], int n, int m)
{
	cout<<"\nCac so nguyen to la: ";
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(ktsnt(a[i][j])==true)
			{
				cout<<"a["<<i<<"]["<<j<<"]= "<<a[i][j]<<"  ";
			}
		}
	}
}

int tongchan(int a[][100], int n,int m)
{
	int tong = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]%2==0)
			{
				tong+=a[i][j];
			}
		}
	}
	return tong;
}

int tongle(int a[][100], int n,int m)
{
	int tong = 0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]%2!=0)
			{
				tong+=a[i][j];
			}
		}
	}
	return tong;
}

void max(int a[][100], int n, int m)
{
	int max=a[0][0];
	int d=0;
	int c=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]>max)
			{
				max=a[i][j];
				d=i;
				c=j;
			}
		}
	}
	cout<<"\nVi tri cua so lon nhat: "<<"a["<<d<<"]["<<c<<"]= "<<max;
}

void min(int a[][100], int n, int m)
{
	int min=a[0][0];
	int d=0;
	int c=0;
	for(int i=0; i<n; i++)
	{
		for(int j=0; j<m; j++)
		{
			if(a[i][j]<min)
			{
				min=a[i][j];
				d=i;
				c=j;
			}
		}
	}
	cout<<"\nVi tri cua so lon nhat: "<<"a["<<d<<"]["<<c<<"]= "<<min;
}
	
int main()
{
	int n, m;
	cout<<"Nhap dong: ";
	cin>>n;
	cout<<"Nhap cot: ";
	cin>>m;
	int a[100][100];
	nhapmang(a, n, m);
	cout<<endl;
	xuatmang(a, n, m);
	xuatsnt(a, n, m);
	cout<<"\nTong cac so chan la: "<<tongchan(a, n, m);
	cout<<"\nTong cac so le la: "<<tongle(a, n, m);
	max(a, n, m);
	min(a, n, m);
}