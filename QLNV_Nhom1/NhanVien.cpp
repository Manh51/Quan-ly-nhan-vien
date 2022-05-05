#include<iostream>
#include<fstream>
#include<string>
#include"NgaySinh.cpp"

using namespace std;

class NhanVien 
{
    protected:
        string manv; 
        string hten;
        NgaySinh ngaysinh;
        string dchi;
        string trinhDo;
        float hesoluong;
        float luongcb;
        float thuongthem;
        float phuCap;
        string vitri;
        float tienTangCa;
    public:
        NhanVien(){}
        ~NhanVien(){}
        //ham nhap thong tin nhan vien
        virtual void nhap()
        {
            cout << "Nhap ma nhan vien: ";
            cin >> manv;
            cin.ignore();
            cout << "Nhap ho ten nhan vien: ";
            getline(cin, hten);
            cout << "Nhap dia chi: ";
            getline(cin, dchi );
            //cin.ignore();
            cout << "Nhap trinh do: ";
            getline(cin, trinhDo);
            //cin.ignore();
            ngaysinh.nhap();
            cout << "Nhap he so luong: ";
            cin >> hesoluong;
            cout << "Nhap luong co ban: ";
            cin >> luongcb;
            cout << "Nhap phu cap: ";
            cin >> phuCap;
        }

        //cai dat phuong thuc doc file lop cha
        virtual void docFile(ifstream &filein)
        {
            getline(filein, manv);
            //filein.ignore(1); 
            getline(filein, hten );
            int ngay, thang, nam;
            filein >> ngay;
            ngaysinh.setNgay(ngay);
            filein.ignore(1); 
            filein >> thang;
            ngaysinh.setThang(thang);
            filein.ignore(1);
            filein >> nam;
            ngaysinh.setNam(nam);
            filein.ignore(1); 
            getline(filein, dchi);
            //filein.ignore(1);
            getline(filein, trinhDo);
            filein >> hesoluong; 
            //filein.ignore(1);
            filein >> luongcb;
            filein >> phuCap;
            filein.ignore(1);
        }

        //ham xuat thong tin nhan vien
        virtual void xuat()
        {
            cout << "\nMa nhan vien: " << manv << endl;
            cout<< "Ho ten nhan vien: " << hten << endl;
            cout << "Ngay sinh: " << ngaysinh.getNgay() << "/ " << ngaysinh.getThang() << "/ " << ngaysinh.getNam() <<endl;
            cout << "Dia chi: " << dchi << endl;
            cout << "Trinh do: " << trinhDo << endl;
            cout << "He so luong: " << hesoluong << endl;
            cout << "Luong co ban: " << (size_t)luongcb << endl;
            cout << "Phu cap: " << (size_t)phuCap << endl;
        }
        float luong()
        {
            float luong = 0;
            luong = hesoluong*luongcb + phuCap;
            return luong;
        }
        virtual float thuongThem()
        {
            return thuongthem;
        }
        virtual string viTriCV()
        {
            return vitri;
        }
        virtual float tienThuongNgoaiGio()
        {
            return tienTangCa;
        }
        friend class CongTy;
};