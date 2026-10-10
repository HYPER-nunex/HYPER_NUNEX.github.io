#include<iostream>
#include<string>
using namespace std;
int main(){
	
bool prvi=false;
bool drugi=false;
bool treci=false;
bool cetvrti =false;
bool peti=false;
bool uspjeh=false;
string lozinka;
do{

cout<<"Molimo vas da unesete lozinku. Lozinka mora imati najmanje 8 znakov, najmanje jedno veliko slovo, jedno malo slovo i jedan broj, te ne smije sadravati space: "<<endl;
	getline(cin, lozinka);
if(lozinka.length()>=8){
 prvi=true;

	}
	for(int i=0; i<=lozinka.length(); i++){
		if(lozinka[i]>='A' && lozinka[i]<='Z'){
			drugi=true;
		}
		if(lozinka[i]>='a' && lozinka[i]<='z'){
			treci=true;
		}
		if(lozinka[i]>='1' && lozinka[i]<='9'){
			cetvrti=true;
		}
		if(lozinka[i]!=' '){
			peti=true;
		}
		
	}
	if(!prvi){
		cout<<"Pogrijesio si jaro unio si manje od 8 karaktera lol, mora da si profa haha. "<<endl;
	}
	if(!drugi){
			cout<<"Pogrijesio si sada jaro nemas nijedno veliko slovo u lozinci malo bolje procitaj.  "<<endl;
	}
	if(!treci){
			cout<<"Pogrijesio si sada nemas nijedno malo slovo bruh.  "<<endl;
	}
	if(!cetvrti){
		cout<<"OPet greska nemas nijednog broja alooo. "<<endl;
	}
	if(!peti){
			cout<<"  Bas zadnja imas space u programu a to nermere hahaha.  "<<endl;
	}
if(prvi && drugi && treci && cetvrti && peti){
	uspjeh=true;
	cout<<"Uspjesno si kreirao lozinku. "<<endl;
}


}while(!uspjeh);
	

	
	
	
	







	

	
	return 0;
}