#include<iostream>
#include<fstream>
#include<string>
#include"NhanVienVP.cpp"

using namespace std;

class CongTy 
{
    NhanVien **NV;
    int n;
public:
    CongTy(){}
    ~CongTy(){}
    void timKiem(NhanVien **NV, int n)
    {
        string manv;
        cout << "Nhap ma nhan vien can tim: ";
        cin >> manv;
        for (int i = 0; i < n; i++)
        {
            if (manv == NV[i]->manv)
            {
                NV[i]->xuat();
                break;
            }
            else
            {
                cout << "Khong tim thay ket qua!" << endl;
                break;
            }
        }
    }

    void RemoveStaff(NhanVien **NV, int &n)
    {
        string manv;
        cout << "Nhap ma nhan vien can xoa: ";
        cin >> manv;
        for(int i = 0; i < n; i++)
        {
            if(NV[i]->manv == manv)
            {
                for(int j = i; j < n; j++)
                {
                    NV[j] = NV[j+1];
                }
                n--;
                break;
            }
        }
    }

    void ghiThemNVSX(ofstream &fileout, NhanVien *NV)
    {
        fileout << NV->manv << endl << NV->hten << endl << NV->ngaysinh.getNgay() << "/"<< NV->ngaysinh.getThang() << "/" << NV->ngaysinh.getNam() 
        << endl  << NV->dchi <<endl << NV->trinhDo << endl << NV->hesoluong <<  endl << (size_t)NV->luongcb << endl << NV->phuCap << endl
        << NV->viTriCV() << endl << (size_t)NV->tienThuongNgoaiGio() << endl;
    }
    
    void updateFileNVSX(ofstream &fileout, NhanVien **NV, int n) 
    {
        cout << n << endl;
        fileout << n << endl;
        for(int i = 0; i < n; i++) 
        {
            ghiThemNVSX(fileout, NV[i]);
        }
    }

    void ghiThemNVQL(ofstream &fileout, NhanVien *NV)
    {
        fileout << NV->manv << endl << NV->hten << endl << NV->ngaysinh.getNgay() << "/"<< NV->ngaysinh.getThang() << "/" << NV->ngaysinh.getNam() 
        << endl  << NV->dchi <<endl << NV->trinhDo << endl << NV->hesoluong <<  endl << (size_t)NV->luongcb << endl << NV->phuCap << endl
        << NV->viTriCV() << endl << (size_t)NV->tienThuongNgoaiGio() << endl << (size_t)NV->thuongThem() << endl;
    }
    
    void updateFileNVQL(ofstream &fileout, NhanVien **NV, int n) 
    {
        cout << n << endl;
        fileout << n << endl;
        for(int i = 0; i < n; i++) 
        {
            ghiThemNVQL(fileout, NV[i]);
        }
    }

    void ghiThemNVVP(ofstream &fileout, NhanVien *NV)
    {
        fileout << NV->manv << endl << NV->hten << endl << NV->ngaysinh.getNgay() << "/"<< NV->ngaysinh.getThang() << "/" << NV->ngaysinh.getNam() 
        << endl  << NV->dchi <<endl << NV->trinhDo << endl << NV->hesoluong <<  endl << (size_t)NV->luongcb << endl << NV->phuCap << endl
        << NV->viTriCV() << endl << (size_t)NV->thuongThem() << endl;
    }
    
    void updateFileNVVP(ofstream &fileout, NhanVien **NV, int n) 
    {
        cout << n << endl;
        fileout << n << endl;
        for(int i = 0; i < n; i++) 
        {
            ghiThemNVVP(fileout, NV[i]);
        }
    }

    void thongKe(ofstream &fileout, NhanVien *NV)
    {
        fileout << NV->manv << endl << NV->hten << endl << (size_t)NV->luong() << endl;
    }

    void updateFile_tk(ofstream &fileout, NhanVien **NV, int n) 
    {
        cout << n << endl;
        fileout << n << endl;
        for(int i = 0; i < n; i++) 
        {
            thongKe(fileout, NV[i]);
        }
    }  
};