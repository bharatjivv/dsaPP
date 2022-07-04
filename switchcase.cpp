#include <iostream>
using namespace std;

// int power (int a, int b){
//     int ans = 1;
//     for (int i = 0; i < b; i++)
//     {
//         ans = a * ans;
//     }
//     return ans;
// }

// int main()
// {
//     int a, b;  
//     cin >> a >> b;
//     int ans = power(a, b);
//     cout << ans;
// }

// int power(){
//     int a, b;
//     cin >> a >> b;
//     int ans = 1;
//     for (int i = 0; i < b; i++)
//     {
//         ans = ans * a;
//     }
//     return ans;
// }

// int main(){
//     int ans = power();
//     cout << "Answer is " << ans;
// }

// bool isEven(int num){
//     if (num&1){
//         return 0;
//     }
//         return 1;
// }

// int main(){
//     int num;
//     cin >> num;
// }


int factorial(int n){
    int fact = 1;
    for (int i = 1; i <= n; i++)
    {
        fact = fact * i;
    }
    return fact;
}

int nCr(int power, int base){
    int fact_power = factorial(power);
    int fact_base = factorial(base)*factorial(power-base);
    
    return (fact_power/fact_base);
}

int main(){
    int pow, base;
    cout << "Enter power and base : ";
    cin >> pow >> base;
    cout << "Factorial of value is : " << nCr(pow, base);


}