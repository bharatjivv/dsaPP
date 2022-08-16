// Reversing a string 
#include <iostream>
using namespace std;

char toLower(char ch){
    if(ch >='a' && ch <='z'){
        return ch;
    }
    else{
        char temp = ch - 'A' + 'a';
        return temp;
    }
}

bool checkPalindrome(char a[], int n){
    int s = 0;
    int e = n-1;

    while(s<=e){
        if(toLower( a[s] )!= toLower( a[e] )){
            return 0;
        }
        else{
            s++;
            e--;
        }
    }
    return 1; 
}

void reverse(char name[], int n){
    int s = 0;
    int e = n-1;

    while(s<e){
        swap(name[s++], name[e--]);
    }
}

int getlength(char name[]){
    int count =  0;
    for(int i = 0; i < name[i] != '\0'; i++){
        count++;   
    }
    return count;
}

int main(){
    char name[20];
    cin >> name;

    cout << "Your name is : "<< name << endl;
    int n = getlength(name);
    cout << "Length : " << n << endl;
    
   reverse(name, n);
    cout << "Your reversed name is : " << name << endl;
    
    
    cout << "Palindrome or not : " << checkPalindrome(name, n) << endl;
}


