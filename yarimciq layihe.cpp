#include<iostream>
#include<windows.h>
using namespace std;

int main(){
SetConsoleOutputCP(CP_UTF8);
SetConsoleCP(CP_UTF8);
int can,qizil,guc,secim,secim_2,secim_3,secim_4,acliq,susuzluq,secim_5,secim_6;
bool oyunDevam;
string inventar;
oyunDevam=true;
susuzluq=100;
can=100;
acliq=100;
qizil=20,
guc=10;
inventar="Heç nə yoxdur.";
cout<<"========================================\n\n"<<"             QARANLIQ MEŞƏ\n========================================\n";
cout<<"\n------------------------------------------------------------------------------------------------------------------------\n";
cout<<"Gecədir...\n\n";
cout<<"Sən uzun müddətdir yol gedirsən.\nQarşında qaranlıq və sıx bir meşə uzanır.\n\n";
cout<<"Meşədən qəribə səslər gəlir.\nAmma geri qayıtmaq artıq mümkün deyil.\n\n";
cout<<"Üstündə olanlar:\n";
cout<<"Qizil : "<<qizil;
cout<<"\n\nVəziyyətin:\n";
cout<<"Can : "<<can<<"\n";
cout<<"Güc : "<<guc;
cout<<"\nAcliq : "<<acliq;
cout<<"\nSusuzluq : "<<susuzluq;
cout<<"\nGun : 1";
cout<<"\ninventar : "<<inventar;
cout<<"\n\nQarşında iki yol var.\n\n1. Meşənin dərinliyinə get\n2. Geri qayıtmağa çalış\n------------------------------------------------------------------------------------------------------------------------\n\nSeçimin:";
cin>>secim;


//hisse 1
if(secim==1){
    cout << "Mesenin derinliyine dogru irəlileyirsən...\n\n"
     << "Ağaclar getdikcə sıxlaşır.\n"
     << "Yol daralır və ətraf daha da sakitləşir.\n\n"
     << "Bir az sonra qarşıda kiçik bir cığır görürsən.\n\n"
     << "1. Cığırla get\n"
     << "2. Meşənin içindən davam et\n";
     cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"
     <<"Seçimin: ";


     cin>>secim_2;
     if(secim_2==1){
        acliq=100-10;
        susuzluq=100-7;
        cout <<"Acliq - 10\nSusuzluq - 7\n"
        <<"Cığırla irəliləyirsən...\n Ağacların arasından zəif işıq getdikcə azalır\n və hava yavaş-yavaş qaralır.\n Bir qədər sonra qarşında köhnə bir ev görürsən.\n"
<<"1. Evə daxil ol.\n"
<<"2. Evin yanından keç.";
     cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"
     << "Seçimin: ";
     cin>>secim_5;
     if(secim_5==1){
        cout << "Köhnə evə daxil olursan...\n\n"
     << "Ev çox köhnə və sakitdir. İçəridə toz basmış mebellər və köhnə əşyalar görürsən.\n\n"
     << "1. Mətbəxi araşdır.\n"
     << "2. Otaqları araşdır.\n\n"
     << "Seçimin: ";
     }
     else if(secim_5==2){cout << "Evin yanından keçirsən...\n\n"
     << "Hava artıq qaralmağa başlayıb. Meşənin içindən gələn külək və yarpaqların səsi səni müşayiət edir.\n\n"
     << "Bir müddət sonra uzaqdan su səsi eşidirsən.\n\n"
     << "Səsə doğru getdikcə qarşında çay görünür.\n\n"
     << "1. Çayı keç.\n"
     << "2. Çayın kənarı ilə get.\n\n"
     << "Seçimin: ";}
     }
else if(secim_2==2){cout << "Meşənin içindən irəliləyirsən...\n\n"
     << "Ağacların arasından keçdikcə yol daha da çətinləşir.\n"
     << "Bir az sonra yerdə köhnə bir çanta görürsən.\n\n"
     << "1. Çantanı aç.\n"
     << "2. Çantanı olduğu yerdə saxla.\n\n";
     cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"
     << "Seçimin: ";
     cin>>secim_4;}
if(secim_4==1){cout << "Köhnə çantanı açırsan...\n\n"
     << "Çantanın içində bir neçə meyvə görürsən.\n"
     << "Meyvələrdən biri təzə və dadlı görünür.\n\n"
     << "1. Meyvəni ye.\n"
     << "2. Meyvəni yemə.\n\n";

cout << "--------------------------------------------------------\n"
     << "Seçimin: ";

cin >> secim_6;}
else if (secim_4 == 2) {
    cout << "Çantanı açmamağa qərar verirsən və yoluna davam edirsən...\n\n"
         << "Bir müddət sonra qarşında iki böyük ağacın arasından keçən dar bir yol görürsən.\n\n"
         << "Yolun kənarında köhnə ayaq izləri diqqətini çəkir.\n"
         << "İzlərin hara getdiyini görmək üçün bir az dayanırsan.\n\n"
         << "1. Ayaq izlərini izlə.\n"
         << "2. Ayaq izlərinə fikir vermədən düz get.\n\n";

    cout << "--------------------------------------------------------\n"
         << "Seçimin: ";

    cin >> secim_6;
}

}


//hisse 2
else if(secim==2){
  cout << "Geri qayıtmağa çalışırsan...\n\n"
     << "Bir neçə addımdan sonra arxaya baxırsan.\n"
     << "Gəldiyin yolu artıq tapa bilmirsən.\n\n"
     << "Ağaclar hər tərəfdə eyni görünür.\n"
     << "Deyəsən, meşənin içində azmısan.\n\n"
     << "Qarşında iki seçim var:\n\n"
     << "1. İrəliləməyə davam et\n"
     << "2. Olduğun yerdə qal və ətrafı araşdır\n\n";
     cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"
     << "Seçimin: ";
     cin>>secim_3;
     if(secim_3==1){
     cout << "İrəliləməyə davam edirsən...\n\n"
     << "Bir müddət sonra qarşına çay çıxır.\n\n"
     << "1. Çayı keç.\n"
     << "2. Çayın kənarı ilə get.\n\n";
     cout<<"\n------------------------------------------------------------------------------------------------------------------------\n"
     << "Seçimin: ";
     }
     else if(secim_3==2){cout << "Olduğun yerdə qalır və ətrafı diqqətlə araşdırırsan.\n\n"
     << "Bir ağacın yanında köhnə bir qılınc tapırsan.\n"
     << "Qılıncı əlinə götürürsən.\n\n"
     << "Gücün artdı!\n"
     << "Güc: 10 -> 20\n\n";
     guc=guc+10;}
}


}








