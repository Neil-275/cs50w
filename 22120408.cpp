#include <bits/stdc++.h>
#define el cout<<'\n'
#define ll long long
#define prob "t"
using namespace std;

ll gt[101];

void pre(){
    gt[0]=1;
    for (int i=1;i<=30;i++){
        gt[i]=gt[i-1]*i;
    }
}

void cau1(){
    cout<<"          ***Tinh tien quan Karaoke***     \n";
    int start,endd;
    do{
        cout<<"Nhap thoi gian bat dau va ket thuc:";
        cin>>start>>endd;
    }
    while (start<8 || start>24 || endd<8 || endd>24 || start>=endd);
    int ans=0;
    for (int i=start+1;i<=endd;i++){
        int price;
        if (i-start>3){
            price=21000;
        }
        else
            price=30000;
        if (i>=8 && i<=17)
            price*=0.9;

        ans+=price;
    }
    cout<<"Tong tien: "<<ans;el;
}

void cau2(){
    int n;
    cout<<"          ***Tinh gia tri bieu thuc***       \n";
    do{
        cout<<"Nhap so nguyen duong n(neu nhap so thap phan se lam tron xuong): ";
        cin>>n;
    }
    while (n<=0);
    int ans=0;
    for (int i=1;i<=n;i++){
        ans+=i*i*i;
    }
    cout<<ans;el;
}

void cau3(){
    cout<<"       ***Tinh to hop***\n";
    int n,k;
    do{
        cout<<" Nhap n va k: ";
        cin>>n>>k;
    }
    while (k>n || k<0 || n<0);
    cout<<gt[n]/(gt[k]*gt[n-k]);el;
}

void cau4(){
    cout<<"        ***Ve hinh***\n";
    int n;
    do {
        cout<<"Nhap chieu cao cua tam giac: ";
        cin>>n;
    }
    while (n<=0);
    for (int i=1;i<=n;i++){
        for (int j=1;j<=1+2*(n-1);j++){
            if (abs(n-j)<=i-1)
                cout<<"*";
            else cout<<" ";
        }
        el;
    }
}

int main(){
//    freopen(prob".inp","a+",stdin);
//    freopen(prob".out","w+",stdout);
    pre();
    string s="";
    int x;
    while (s!="Khong"){
        system("cls");
        cout<<"       ***THI  GIUA KI***\n";
        cout<<"MSSV: 22120408\nHo va ten: Do Thanh Tung\nHe dao tao: Chinh quy";el;
        cout<<"  1. Tinh tien quan Karaoke\n  2. Tinh gia tri bieu thuc\n  3. Tinh to hop\n  4. Ve hinh\n";
        cout<<"Chon cau: ";
        cin>>x;
        switch(x){
            case 1:{
                cau1();break;
            }
            case 2: {
                cau2();break;
            }
            case 3:{
                cau3();break;
            }
            case 4:{
                cau4();break;
            }
            default: break;
        };

        cout<<"Ban co muon tiep tuc khong?(Co/Khong): ";
        cin>>s;
        while (s!= "Khong" && s!= "Co"){
            cout<<"Ban co muon tiep tuc khong?(Co/Khong): ";
            cin>>s;
        }
    }
    cout<<"\n\n\n\n  ******* GOODBAI (^w^) *******";
    return 0;
}
