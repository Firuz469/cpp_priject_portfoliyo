#include<iostream>
using namespace std;

int main(){
int kecenlerin_sayi,kesilrnlerin_sayi,umumi_bal,say,bal;
float ortalama_bal;
string qiymet;

umumi_bal=0;
ortalama_bal=0;
cout<<"nece sagird gelib : ";
cin>>say;
for(int i=1;i<=say;i++){
    cout<<i<<"-ci telebe imtahan balinizi deyin : ";
    cin>>bal;
umumi_bal=umumi_bal+bal;
ortalama_bal=umumi_bal/say;

if(bal>=91){
    qiymet="A";
}
else if(bal<91&&bal>=81){
    qiymet="B";
}
else if(bal<81&&bal>=71){
    qiymet="C";
}
else if(bal<71&&bal>=61){
    qiymet="D";}
else if(bal<61&&bal>=51){
    qiymet="E";}
else qiymet="F";


if(bal<50){
    cout<<"imtahandan  kesildiniz\n";
    kesilrnlerin_sayi++;

}
else {cout<<"imtahani kecdiniz\n";
    kecenlerin_sayi++;}
    cout<<"qiymet - "<<qiymet<<"\n";

}
kecenlerin_sayi--;
cout<<"\nkesilrnlerin_sayi\n "<<kesilrnlerin_sayi;
cout<<"\nkecenlerin_sayi\n "<<kecenlerin_sayi;
cout<<"\nortalama bal "<<ortalama_bal;
}








