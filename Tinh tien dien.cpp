#include<iostream>
//bài tập tính tiền điện:
//viết chương trình tính tiền điện đơn giản như sau:
//100kw đầu tiên giá 1242 đồng/kw
//50kw tiếp theo giá 1304 đồng/kw
//50kw tiếp theo giá 1651 đồng/kw
// từ kw thứ 201 trở đi giá 1912 đồng/kw
//nhập vào chỉ số cũ, chỉ số mới. Tính số tiền phải trả ( bao gồm 10% thuế VAT )
using namespace std;
main()
{
	int socu,somoi,a,tong;
	cout<<"Nhap so moi: ";
	cin>>somoi;
	cout<<"Nhap so moi: ";
	cin>>socu;
	a=somoi-socu;
	if(a<=100)
		tong=a*1242; 
	else
		if(a<=150)
			tong=100*1242+(a-100)*1304;
		else
			if(a<=200)
				tong=100*1242+50*1304+(a-150)*1651;
			else
				tong=100*1242+50*1304+50*1651+(a-200)*1912;
	tong=tong*1.1;
	cout<<"So tien dien phai tra la: "<<tong;	
}

