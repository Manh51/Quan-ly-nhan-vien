#include<iostream>
#include<string>

using namespace std;

class NgaySinh 
{
    int Ngay;
    int Thang; 
    int Nam;
    public:
        NgaySinh(){}
        ~NgaySinh(){}
        //ham nhap thong tin ngay thang nam
        void nhap()
        {
            cout << "Nhap ngay: ";
            cin >> Ngay;
            cout << "Nhap thang: ";
            cin >> Thang;
            cout << "Nhap nam: ";
            cin >> Nam;
        }
    // Phuong thuc lay ngay
        int getNgay()
        {
            return Ngay;
        }
        void setNgay(int ngay)
        {
            Ngay = ngay;
        }
        //Phuong thuc lay thang
        int getThang()
        {
            return Thang;
        }
        void setThang(int thang)
        {
            Thang = thang;
        }
        //Phuong thuc lay nam
        int getNam()
        {
            return Nam;
        }
        void setNam(int nam)
        {
            Nam = nam;
        }
};