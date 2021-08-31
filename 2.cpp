#include <iostream>
#include <string.h>

using namespace std;

class Bike
{
private:
    string MaXe;
    string NhaSX;
    int NamSX;
public:
    Bike(string MaXe, string NhaSX, int NamSX){
        this ->  MaXe = MaXe;
        this -> NhaSX = NhaSX;
        this -> NamSX = NamSX;
    }
    virtual void Nhap(){
        cout << "\n Nh?p mã xe: "; fflush(stdin); getline(cin,this -> MaXe);
        cout << "\n Nh?p nhà s?n xu?t: "; fflush(stdin); getline(cin,this -> NhaSX );
        cout << "\n Nh?p nam s?n xu?t: "; cin >> this ->  NamSX;
    }
    virtual void Xuat(){
        cout << "\n Mã xe: " << this -> MaXe;
        cout << "\n Nhà s?n xu?t: " << this -> NhaSX;
        cout << "\n Nam s?n xu?t: " << this -> NamSX;
    }
};
class eBike : public Bike{
public:
    int TocDo;
    void Nhap();
    void Xuat();
};

void eBike::Nhap(){
    Bike :: Nhap();
    cout << "\n Nh?p t?c d?: "; cin >> this -> TocDo;
}
void eBike::Xuat(){
    Bike :: Xuat();
    cout << "\n T?c d?: "<<this -> TocDo << "(km/h)"<<endl;
}
class DanhSach
{
private:
    Bike *a[100];
    eBike b[100];
    b[100] = &a;
public:
    void NhapDS(int n);
    void XuatDS(int n);
    void TocDoMax(int n);
};

void DanhSach::NhapDS(int n){
    for (int i = 1; i <= n; i++){
        b[i].Nhap();
    }
}
void DanhSach::XuatDS(int n){
    for (int i = 1; i <= n;i++){
        b[i].Xuat();
    }
}
//void DanhSach::TocDoMax(int n){
//    eBike Max = a[1];
//    for(int i = 1; i <= n;i++){
//        if(Max < a[i].TD()){
//            Max
//        }
//    }
//}
int main(){
    DanhSach m;
    int n;
    do{
        cout << "\n Nh?p s? lu?ng xe: ";
        cin >> n;
    }while(n <= 0);
    m.NhapDS(n);
    cout << endl;
    m.XuatDS(n);
    return 0;
}
