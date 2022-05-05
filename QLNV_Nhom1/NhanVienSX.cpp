#include<iostream>
#include<fstream>
#include<string>
#include"NhanVien.cpp"

using namespace std;

class NhanVienSX : public NhanVien
{
	string congDoan;
	float tienTangCa;
	public: 
		NhanVienSX(){}
		~NhanVienSX(){}
		void docFile(ifstream &filein)
		{
			NhanVien::docFile(filein);
			getline(filein, congDoan);
			filein>>tienTangCa;
		}
        float luong()
		{
			return NhanVien::luong() + tienTangCa; 
		}
		void xuat()
		{
			NhanVien::xuat();
			cout << "Cong doan: " << congDoan << endl;
			cout << "Tien tang ca: " << (size_t)tienTangCa <<endl;	
			cout << "Tong tien Luong: " << (size_t)NhanVienSX::luong() <<endl;
		}
		void nhap()
		{
			NhanVien::nhap();
			cout << "Nhap cong doan: ";
			cin.ignore();
			getline(cin, congDoan);
			cout << "Nhap tien tang ca: ";
			cin >> tienTangCa;
		}
		float tienThuongNgoaiGio()
		{
			return tienTangCa;
		}
		string viTriCV()
		{
			return congDoan;
		}
};