// #include<bits/stdc++.h>
// #include<string>
// using namespace std;

// int main (){
//     int i ,   count = 0;
//     string  m;
//     int n = stoi(m);
//     cout << "Enter a Number :  ";
//     cin >> n;

//     if (n <= 1){
//         cout << "This is a prime number";
//     }

//     for (i = 1; i <= n; i++){
//         if(n % i == 0){
//             count++;
//         }
//     }

//     if(count == 2){
//        cout << "This is a prime number";
//     }else{
//         cout << "This is not a prime number";
//     }

// }
#include <iostream>
#include <vector>
#include<chrono>
#include <bits/stdc++.h>
using namespace std::chrono;
using namespace std;
int main()
{
    long long n;
    cin >> n;
    bool No = true;
    auto start = high_resolution_clock::now();
    for (long long i = 2; i <= n / 2; i++)
    {
        if (n % i == 0)
        {
            cout << n << " is Not Prime"<<" Due to "<<i<<" Divides "<<n<<endl;;
            No = false;
            //break;
        }
    }
    auto stop =high_resolution_clock::now();
    auto duration=duration_cast<milliseconds>(stop-start);
    
    if (No)
        cout << n << " is Prime";

    cout<<"\nTime :"<<duration.count()<<"ms"<<endl;
}