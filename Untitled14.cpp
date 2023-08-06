#include<iostream>
using namespace std;

int main()
{
	int i;
	int sifre;
	int secim;
	int tutar;
	string onay;
	double iban;
	int gonderilecek_miktar;
	int telefon;
	int kod;
	string teyit;
	
	for(i=1;i<=10;i++)
	{
	
	
	cout<<"*********** EVREN BANKASINA HOSGELDINIZ *********** "<<endl<<endl;
	cout<<"4 haneli sifrenizi giriniz"<<endl;
	cin>>sifre;
	if(sifre==0000)
	{
		cout<<"sifre dogru"<<endl<<endl;
		
	cout<<"lütfen yapmak istediginiz islemi seciniz"<<endl<<endl;
	cout<<"para yatirmak için 1"<<endl;
	cout<<"para cekmek icin 2"<<endl;
	cout<<"eft yapmak icin 3"<<endl<<endl;
	
	cin>>secim;
	cout<<endl;
	
	if (secim==1)
	{
	    cout<<"para yatirma islemine hosgeldiniz"<<endl;
	    cout<<"lütfen paranizi yerlestiriniz"<<endl;
	    cout<<"yatirilan tutari onayliyor musunuz e? h?"<<endl;
	    cin>>onay;
	    
	         if(onay=="e")
			 {
			 	cout<<"paraniz yatiriliyor..."<<endl;
			 	cout<<"kartinizi almayi unuymayiniz"<<endl;
			 }
			else if(onay=="h")
           	{
		        cout<<"hata"<<endl;
	           	cout<<"kart iade ediliyor"<<endl;
			 	
			 }
			 else
			 {
			 	cout<<"islem iptal edili"<<endl;
				 cout<<"kartiniz iade ediliyor"<<endl;			
		      }
	}
	else if(secim==2)
	{
		
		cout<<"para cekme islemindesiniz"<<endl;
		cout<<"lutfen cekmek istediginiz tutari giriniz"<<endl;
		cin>>tutar;
		
	if(tutar>=5000)
	{
		cout<<"limit asildi"<<endl;
		cout<<"tekrar deneyiniz"<<endl;
	}
	else
	{
		cout<<"cekilen tutar"<<tutar<<"TL"<<"paraniz veriliyor"<<endl;
		cout<<"kartinizi almayi unutmayin...."<<endl;
   }
		
	}
	else if(secim==3)
	{
		cout<<"para gonderme islemindesiniz"<<endl;
		cout<<"IBAN no giriniz"<<endl;
		cout<<"TR   ";
		cin>>iban;
		cout<<"göndermek istediginiz tutari giriniz"<<endl;
		cin>>gonderilecek_miktar;
		cout<<"bu EFT islem ücreti gönderilecek tutarin %1 i kadardir "<<endl;
		cout<<"EFT islem ucreti"<<((gonderilecek_miktar*1)/100)<<" TL "<<endl;
		
		cout<<"toplam hesabinizden tahsil edilecek tutar"<<((gonderilecek_miktar)+((gonderilecek_miktar*1)/100))<<"TL"<<endl;
		cout<<"SMS gelecek onayli telefon no giriniz"<<endl;
		cout<<"+9o"	;
		cin>>telefon;
		cout<<"telefonunza gelen sms kodunu giriniz"<<endl;
		cin>>kod;
		cout<<"islemi onayliyor musunuz? e? h?"<<endl;
		cin>>teyit;
	
	        if(teyit=="e")
	        {
	        	cout<<"para gonderme isleminiz tamamlanmistir"<<endl;
			}
			
			else if(teyit=="h")
			{
				cout<<"islem iptal ediliyor"<<endl;
			}
			
			else
			{
				cout<<"hata"<<endl;
			}
			
		
	}
		
	}

}
}
