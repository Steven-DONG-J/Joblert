#include <bits/stdc++.h>
#include <string>
using namespace std;
struct {
	string Given_Name;
	string Fam_Name;
	string SEX;
	int date_of_birth;
	string email;
	unsigned long long hand_phone_no;
	string School;
	string Major;
	double GPA;
	bool Opt;
	string Optional;
	bool cont;
}person[10005];

int main(){
	int n=0;
	while(1){
		cout<<"Enter your Given Name: ";
		cin>>person[n].Given_Name;
		cout<<"Enter your Family Name: ";
		cin>>person[n].Fam_Name;
		cout<<"Enter your SEX: ";
		cin>>person[n].SEX;
		cout<<"Enter your date of birth in DDMMYYYY format: ";
		cin>>person[n].date_of_birth;
		cout<<"Enter your E-mail: ";
		cin>>person[n].email;
		cout<<"Enter your Hand Phone Number: ";
		cin>>person[n].hand_phone_no;
		cout<<"Enter your School: ";
		cin>>person[n].School;
		cout<<"Enter your major: ";
		cin>>person[n].Major;
		cout<<"Enter your GPA: ";
		cin>>person[n].GPA;
		cout<<"Do you want to add some comment? 0 for No and 1 for Yes.";
		cin>>person[n].Opt;
		if(person[n].Opt){
			cout<<"Enter your comment: （Please do not include space use dash(_) to split the words";
			cin>>person[n].Optional;
		}
		cout<<"Do you wish to add another person? 0 for No and 1 for Yes.";
		cin>>person[n].cont;
		if(person[n].cont){
			n++;
			continue;
		}
		else break;
	}
	freopen("with_name_and_sex.txt","w",stdout);
	for(int i=0;i<=n;i++){
		cout<<person[i].Given_Name<<"  "<<person[i].Fam_Name<<"  "<<person[i].SEX<<"  "<<person[i].date_of_birth<<"  "<<person[i].email<<"  "<<person[i].hand_phone_no<<"  "<<person[i].School;
		cout<<"  "<<person[i].Major<<"  ";
		cout<<setprecision(3)<<person[i].GPA;
		if(person[i].Opt) cout<<"   "<<person[i].Optional;
		cout<<endl;
	}
	fclose(stdout);
	freopen("without_name_and_sex.txt","w",stdout);
	for(int i=0;i<=n;i++){
		cout<<person[i].Fam_Name<<"  "<<person[i].date_of_birth<<"  "<<person[i].email<<"  "<<person[i].hand_phone_no<<"  "<<person[i].School;
		cout<<"  "<<person[i].Major<<"  ";
		cout<<setprecision(3)<<person[i].GPA;
		if(person[i].Opt) cout<<"   "<<person[i].Optional;

		cout<<endl;
	}
	fclose(stdout);	
	
	return 0;
}