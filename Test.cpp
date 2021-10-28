#include<iostream>
using namespace std;
class SV{
	private:
		string Ten,Lop,Gioitinh,MaSV;
		int Ngaysinh;
		float Toan,Van,Anh,dtb; 
	public:
		friend istream& operator >> (istream &is, SV &sv);
		friend ostream& operator << (ostream &os,const SV &sv);		
		friend void Nhap(SV sv[], int n);
        friend void Xuat(SV sv[], int n);
        friend void SapXepDTB(SV sv[], int n);
        friend void SapXepTen(SV sv[], int n);
        friend void ThongKe(SV sv[], int n);
       		
};

 istream& operator >> (istream &is, SV &sv){
    cout<<"Nhap ho ten: ";
    fflush(stdin);
	getline(is,sv.Ten);
	cout<<"Nhap gioi tinh: ";
	fflush(stdin);
	is>>sv.Gioitinh;
    cout<<"Ma sinh vien: ";
    fflush(stdin);
	getline(is,sv.MaSV);
    cout<<"Nam sinh: ";
    is>>sv.Ngaysinh;
    cout<<"Lop: ";
    fflush(stdin);
	getline(is,sv.Lop);
    cout<<"Diem Toan: ";
    is>>sv.Toan;
    cout<<"Diem Van: ";
    is>>sv.Van;
    cout<<"Diem Anh: ";
    is>>sv.Anh;
    
	return is;
}
ostream& operator << (ostream &os,const SV &sv){
    cout<<"Ho ten: ";
	os<<sv.Ten;
	cout<<"\nGioi tinh: ";
	os<<sv.Gioitinh;
    cout<<"\nMa sinh vien: ";
	os<<sv.MaSV;
    cout<<"\nNam sinh: ";
    os<<sv.Ngaysinh;
    cout<<"\nlop: ";
    os<<sv.Lop;
    cout<<"\nDiem Toan: ";
	os<<sv.Toan;
	cout<<"\nDiem Van: ";
	os<<sv.Van;
	cout<<"\nDiem Anh: ";
	os<<sv.Anh;
	return os;
}
đaadadfjiwnef
void Nhap(SV sv[], int n){
    for(int i=0; i<n; i++)
    cin>>sv[i];
}
void Xuat(SV sv[], int n){
    for(int i=0; i<n; i++)
    cout<<sv[i];
}

int main(){
	float DTB();
	SV sv[200];
	int n;
	cout<<"Nhap so luong sinh vien: ";
   	cin>>n;
   	Nhap(sv,n);
   	Xuat(sv,n);
}
