#include<iostream>
#include<fstream>
#include<string>
#include"NhanVienSX.cpp"

using namespace std;

class NhanVienQL:public NhanVien {
	private:
		string boPhan;
		float tienTangCa;
		float tienThuongThem;
	public: 
		NhanVienQL(){}
		~NhanVienQL(){}
		void docFile(ifstream &filein)
		{
			NhanVien::docFile(filein);
			getline(filein,boPhan);
			filein >> tienTangCa;
			filein>>tienThuongThem;
		}
		void xuat()
		{
			NhanVien::xuat();
			cout<<"Bo phan: "<< boPhan << endl;
			cout<<"Tien tang ca: "<<(size_t)tienTangCa << endl;
			cout<<"Tien thuong them: "<< (size_t)tienThuongThem <<endl;
			cout << "Tong tien Luong: " << (size_t)NhanVienQL::luong() <<endl;
		}
		float luong()
		{
			return NhanVien::luong() + tienThuongThem; 
		}
		void nhap()
		{
			NhanVien::nhap();
			cout << "Nhap bo phan: ";
			cin.ignore();
			getline(cin,boPhan);
			cout << "Nhap tien tang ca: ";
			cin >> tienTangCa;
			cout << "Nhap tien thuong them: ";
			cin >> tienThuongThem;
		}
		float thuongThem()
		{
			return tienThuongThem;
		}
		string viTriCV()
		{
			return boPhan;
		}
		float tienThuongNgoaiGio()
		{
			return tienTangCa;
		}

};
