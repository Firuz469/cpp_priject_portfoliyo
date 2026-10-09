#include <iostream>
#include <time.h>
 using namespace std;
int main(){
int eded,yadda,a;
cout<<"butun istrakcilari salamlayiram\n\nsiz hal hazirda  \n--eded tapma oyunundasiniz--\n\n";
cout<<"oyunun qaydalari:\nkamputer bir eded tutur ve siz onu 7 addima tapmalisiniz\n\n";
srand(time(NULL));
yadda=1+rand()%100;
for(int i=1; i<8; i++){
 a=7-i;

cout<<"bir eded daxil et(1-100) : ";
cin>>eded;

if(eded==yadda){
    cout<<"qazandiniz\n";
    break;
}

else if (eded<yadda){
    cout<<"\nsizin yazdiginiz eded kicikdir\n";
}
else{cout<<"\nsizin yazdiginiz eded boyukdur\n";
}
cout<<"\n"<<a<<" sansiniz qaldi\n\n";
if(i==7){
    cout<<"uduzdunuz! sanslariniz qutardi"<<" eded "<<yadda<<" idi";
}
}
}








