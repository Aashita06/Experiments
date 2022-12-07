#include<iostream>
#include<vector>
#include<string>
using namespace std;
int main(){
    int i,j,k,n;
    vector<vector<char> > a(26,vector<char>(26));
    k=0;
    n=26;
    for(i=0;i<n;i++){
        k=i;
        for(j=0;j<n;j++){
            a[i][j]='A'+k;
            k++;
            if(k==26)
                k=0;
        }
    }
    cout<<"Enter the message: ";
    string s;
    getline(cin,s);
    cout<<"Enter the key: ";
    string key;
    cin>>key;
    k=0;
    int mod = key.size();

    cout<<"Enter your choice."<<endl;
    cout<<"1. Encryption\n";
    cout<<"2. Decryption\n";
    cout<<"Your choice: ";
    int choice;
    cin>>choice;

    if(choice==1)
    {
    for(i=key.size();i<s.size();i++){
        key+=key[k%mod];
        k++;
    }
    string encrypt;
    for(i=0;i<s.size();i++){
        encrypt+= a[s[i]-'A'][key[i]-'A'];
    }
    cout<<"Encrypted message: "<<encrypt<<'\n';
}
    if(choice==2)
    {
        for(i=key.size();i<s.size();i++){
        key+=key[k];
        k++;
    }
    string decrypt;
    for(i=0;i<s.size();i++){
        for(j=0;j<n;j++){
            if(a[j][key[i]-'A']==s[i]){
                decrypt += 'A'+j;
                break;
            }
        }
    }
    cout<<"Decrypted message: "<<decrypt<<'\n';
    }
    return 0;
}