#include<iostream>
#include<fstream>
#include<string>
#include"QLNV.cpp"

using namespace std;

int main()
{
    QLNV a;
    NhanVien *ds[1000]; // khai bao mang 1 chieu cac con tro
    int n = 0;
    a.Menu(ds, n);
    system("pause");
    return 0;
}