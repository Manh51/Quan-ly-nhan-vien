#include<iostream>
#include<fstream>
#include<string>
#include"NhanVienQL.cpp"

using namespace std;

class NhanVienVP:public NhanVien {
	private:
		string phongBan;
		float tienThuongThem;
	public: 
		NhanVienVP(){}
		~NhanVienVP(){}
		void docFile(ifstream &filein)
		{
			NhanVien::docFile(filein);
			getline(filein,phongBan);
			filein>>tienThuongThem;
		}
        float luong()
		{
			return NhanVien::luong() + tienThuongThem;
		}
		void xuat()
		{
			NhanVien::xuat();
			cout<<"Phong ban: "<< phongBan <<endl;
			cout<<"Tien thuong them: "<< (size_t)tienThuongThem <<endl;
			cout << "Tong tien luong: "<< (size_t)NhanVienVP::luong() <<endl;
		}
		void nhap()
		{
			NhanVien::nhap();
			cout << "Nhap phong ban: ";
			getline(cin,phongBan);
			cin.ignore();
			cout << "Nhap tien thuong them: ";
			cin >> tienThuongThem;
		}
		float thuongThem()
		{
			return tienThuongThem;
		}
		string viTriCV()
		{
			return phongBan;
		}
};
