#include<iostream>
#include<fstream>
#include<string>
#include"CongTy.cpp"

using namespace std;

class QLNV 
{
    public:
        QLNV(){}
        ~QLNV(){}
        void QLNVSX(NhanVien **NV , int &n)
        {
            CongTy *ct;
            NV = new NhanVien*[1000];
            n = 0;
            ifstream filein;
            filein.open("NhanVienSX.txt", ios_base::in);
            while(true)
            {
                system("cls");
                cout << "\n\n\t\t=================== Menu =================== ";
                cout << "\n\t\t*************** Doc va xuat thong tin ***************";
                cout << "\n1. Doc thong tin nhan vien tu file NHANVIENSX.txt";
                cout << "\n2. Xuat danh sach nhan vien" ;
                cout << "\n\n\t\t*************** Quan ly thong tin nhan vien ***************";
                cout << "\n3. Them thong tin nhan vien san xuat";
                cout << "\n4. Tim kiem thong tin nhan vien bang ma nhan vien";
                cout << "\n5. Xoa thong tin nhan vien";
                cout << "\n6. Thong ke luong";
                cout << "\n7. Ket thuc";
                cout << "\n\t\t =================== End =================== ";

                int luachon;
                cout << "\n Nhap lua chon: ";
                cin >> luachon;

                switch( luachon)
                {
                    case(1):
                    {
                        filein >> n;
                        
                        NhanVien *x = NULL;
                        for(int i = 0; i < n; i++)
                        {
                            filein.ignore(1);
                            x = new NhanVienSX();
                            x->docFile(filein);
                            NV[i] = x;
                        }
                        break;
                    }
                    case(2):
                    {
                        cout << n;
                        for(int i = 0; i < n; i++)
                        {
                            cout << "\n\n\t\tXuat ra thong tin nhan vien thu " << i + 1 <<endl;
                            NV[i]->xuat();
                        }
                        system("pause");
                        break;
                    }
                    case (3):
                    {
                        ofstream fileout;
                        fileout.open("NHANVIENSX.txt",ios::app|ios::out);
                        int sl = 0;
                        cout << "Nhap so luong ban ghi nhan vien san xuat muon them: ";
                        cin >> sl;
                        for(int i = n; i < sl+n; i++)
                        {
                            NV[i] = new NhanVienSX;
                            cout << "-----------------------------" << endl;
                            cout << "Nhap ban ghi thu " << i + 1 << endl;
                            NV[i]->nhap();
                            cin.ignore();
                            cout << "-----------------------------" << endl;
                            //ghi them vao file
                            ct->ghiThemNVSX(fileout, NV[i]);
                            fileout.close();
                        }
                        n += sl;
                        fileout.open("NHANVIENSX.txt",ios::out);
                        ct->updateFileNVSX(fileout,NV, n);
                        fileout.close();
                        system("pause");
                        break;
                    }
                    case (4):
                    {
                        ct->timKiem(NV, n);
                        system("pause");
                        break;
                    }

                    case (5):
                    {
                        ct->RemoveStaff(NV, n);
                        //update lai file sau khi xoa
                        ofstream fileout;
                        fileout.open("NHANVIENSX.txt",ios::out);
                        ct->updateFileNVSX(fileout, NV, n);
                        fileout.close();
                        break;
                    }

                    case (6):
                    {
                        ofstream fileout;
                        fileout.open("THONGKENVSX.txt",ios::app|ios::out);
                        for(int i = 0; i < n; i++)
                        {
                            ct->thongKe(fileout, NV[i]);
                            fileout.close();

                        }
                        fileout.open("THONGKENVSX.txt",ios::out);
                        ct->updateFile_tk(fileout, NV, n);
                        fileout.close();
                        system("pause");
                        break;
                    }

                    case (7):
                    {
                        break;
                    }

                    default :
                    {
                        cout<<"Gia tri nhap vao khong thich hop";
                        system("pause");
                        break;
                    }
                }
            }
            filein.close();
        }

        void QLNVQL(NhanVien **NV , int &n)
        {
            CongTy *ct;
            NV = new NhanVien*[1000];
            n = 0;
            ifstream filein;
            filein.open("NhanVienQL.txt", ios_base::in);
            while(true)
            {
                system("cls");
                cout << "\n\n\t\t=================== Menu =================== ";
                cout << "\n\t\t*************** Doc va xuat thong tin ***************";
                cout << "\n1. Doc thong tin nhan vien tu file NHANVIENQL.txt";
                cout << "\n2. Xuat danh sach nhan vien" ;
                cout << "\n\n\t\t*************** Quan ly thong tin nhan vien ***************";
                cout << "\n3. Them thong tin nhan vien quan ly";
                cout << "\n4. Tim kiem thong tin nhan vien bang ma nhan vien";
                cout << "\n5. Xoa thong tin nhan vien";
                cout << "\n6. Thong ke luong";
                cout << "\n7. Ket thuc";
                cout << "\n\t\t =================== End =================== ";

                int luachon;
                cout << "\n Nhap lua chon: ";
                cin >> luachon;

                switch( luachon)
                {
                    case(1):
                    {
                        filein >> n;
                        
                        NhanVien *x = NULL;
                        for(int i = 0; i < n; i++)
                        {
                            filein.ignore(1);
                            x = new NhanVienQL();
                            x->docFile(filein);
                            NV[i] = x;
                        }
                        break;
                    }
                    case(2):
                    {
                        cout << n;
                        for(int i = 0; i < n; i++)
                        {
                            cout << "\n\n\t\tXuat ra thong tin nhan vien thu " << i + 1 <<endl;
                            NV[i]->xuat();
                        }
                        system("pause");
                        break;
                    }
                    case (3):
                    {
                        ofstream fileout;
                        fileout.open("NHANVIENQL.txt",ios::app|ios::out);
                        int sl = 0;
                        cout << "Nhap so luong ban ghi nhan vien san xuat muon them: ";
                        cin >> sl;
                        for(int i = n; i < sl+n; i++)
                        {
                            NV[i] = new NhanVienQL;
                            cout << "-----------------------------" << endl;
                            cout << "Nhap ban ghi thu " << i + 1 << endl;
                            NV[i]->nhap();
                            cin.ignore();
                            cout << "-----------------------------" << endl;
                            //ghi them vao file
                            ct->ghiThemNVQL(fileout, NV[i]);
                            fileout.close();
                        }
                        n += sl;
                        fileout.open("NHANVIENQL.txt",ios::out);
                        ct->updateFileNVQL(fileout,NV, n);
                        fileout.close();
                        system("pause");
                        break;
                    }
                    case (4):
                    {
                        ct->timKiem(NV, n);
                        system("pause");
                        break;
                    }

                    case (5):
                    {
                        ct->RemoveStaff(NV, n);
                        //update lai file sau khi xoa
                        ofstream fileout;
                        fileout.open("NHANVIENQL.txt",ios::out);
                        ct->updateFileNVQL(fileout, NV, n);
                        fileout.close();
                        break;
                    }

                    case (6):
                    {
                        ofstream fileout;
                        fileout.open("THONGKENVQL.txt",ios::app|ios::out);
                        for(int i = 0; i < n; i++)
                        {
                            ct->thongKe(fileout, NV[i]);
                            fileout.close();

                        }
                        fileout.open("THONGKENVQL.txt",ios::out);
                        ct->updateFile_tk(fileout, NV, n);
                        fileout.close();
                        system("pause");
                        break;
                    }

                    case (7):
                    {
                        break;
                    }

                    default :
                    {
                        cout<<"Gia tri nhap vao khong thich hop";
                        system("pause");
                        break;
                    }
                }
            }
            filein.close();
        }

        void QLNVVP(NhanVien **NV , int &n)
        {
            CongTy *ct;
            NV = new NhanVien*[1000];
            n = 0;
            ifstream filein;
            filein.open("NhanVienVP.txt", ios_base::in);
            while(true)
            {
                system("cls");
                cout << "\n\n\t\t=================== Menu =================== ";
                cout << "\n\t\t*************** Doc va xuat thong tin ***************";
                cout << "\n1. Doc thong tin nhan vien tu file NHANVIENVP.txt";
                cout << "\n2. Xuat danh sach nhan vien" ;
                cout << "\n\n\t\t*************** Quan ly thong tin nhan vien ***************";
                cout << "\n3. Them thong tin nhan vien van phong";
                cout << "\n4. Tim kiem thong tin nhan vien bang ma nhan vien";
                cout << "\n5. Xoa thong tin nhan vien";
                cout << "\n6. Thong ke luong";
                cout << "\n7. Ket thuc";
                cout << "\n\t\t =================== End =================== ";

                int luachon;
                cout << "\n Nhap lua chon: ";
                cin >> luachon;

                switch( luachon)
                {
                    case(1):
                    {
                        filein >> n;
                        
                        NhanVien *x = NULL;
                        for(int i = 0; i < n; i++)
                        {
                            filein.ignore(1);
                            x = new NhanVienVP();
                            x->docFile(filein);
                            NV[i] = x;
                        }
                        break;
                    }
                    case(2):
                    {
                        cout << n;
                        for(int i = 0; i < n; i++)
                        {
                            cout << "\n\n\t\tXuat ra thong tin nhan vien thu " << i + 1 <<endl;
                            NV[i]->xuat();
                        }
                        system("pause");
                        break;
                    }
                    case (3):
                    {
                        ofstream fileout;
                        fileout.open("NHANVIENVP.txt",ios::app|ios::out);
                        int sl = 0;
                        cout << "Nhap so luong ban ghi nhan vien san xuat muon them: ";
                        cin >> sl;
                        for(int i = n; i < sl+n; i++)
                        {
                            NV[i] = new NhanVienVP;
                            cout << "-----------------------------" << endl;
                            cout << "Nhap ban ghi thu " << i + 1 << endl;
                            NV[i]->nhap();
                            cin.ignore();
                            cout << "-----------------------------" << endl;
                            //ghi them vao file
                            ct->ghiThemNVVP(fileout, NV[i]);
                            fileout.close();
                        }
                        n += sl;
                        fileout.open("NHANVIENVP.txt",ios::out);
                        ct->updateFileNVVP(fileout,NV, n);
                        fileout.close();
                        system("pause");
                        break;
                    }
                    case (4):
                    {
                        ct->timKiem(NV, n);
                        system("pause");
                        break;
                    }

                    case (5):
                    {
                        ct->RemoveStaff(NV, n);
                        //update lai file sau khi xoa
                        ofstream fileout;
                        fileout.open("NHANVIENVP.txt",ios::out);
                        ct->updateFileNVVP(fileout, NV, n);
                        fileout.close();
                        break;
                    }

                    case (6):
                    {
                        ofstream fileout;
                        fileout.open("THONGKENVVP.txt",ios::app|ios::out);
                        for(int i = 0; i < n; i++)
                        {
                            ct->thongKe(fileout, NV[i]);
                            fileout.close();

                        }
                        fileout.open("THONGKENVVP.txt",ios::out);
                        ct->updateFile_tk(fileout, NV, n);
                        fileout.close();
                        system("pause");
                        break;
                    }

                    case (7):
                    {
                        break;
                    }

                    default :
                    {
                        cout<<"Gia tri nhap vao khong thich hop";
                        system("pause");
                        break;
                    }
                }
            }
            filein.close();
        }

        void Menu(NhanVien **NV , int &n)
        {
            NV = new NhanVien*[1000];
            n = 0;
            while(true)
            {
                system("cls");
                cout << "\n\n\t\t=================== Menu =================== ";
                cout << "\n1. Quan ly thong tin nhan vien san xuat";
                cout << "\n2. Quan ly thong tin nhan vien quan ly" ;
                cout << "\n3. Quan ly thong tin nhan vien van phong";
                cout << "\n4. Ket thuc";
                cout << "\n\t\t =================== End =================== ";

                int luachon;
                cout << "\n Nhap lua chon: ";
                cin >> luachon;

                switch( luachon)
                {
                    case(1):
                    {
                        QLNVSX(NV, n);
                        break;
                    }
                    case(2):
                    {
                        QLNVQL(NV, n);
                        break;
                    }
                    case (3):
                    {
                        QLNVVP(NV, n);
                        break;
                    }
                    case (7):
                    {
                        break;
                    }

                    default :
                    {
                        cout<<"Gia tri nhap vao khong thich hop";
                        system("pause");
                        break;
                    }
                }
                    
            }
        }
};




