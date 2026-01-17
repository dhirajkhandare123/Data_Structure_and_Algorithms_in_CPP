// #include <iostream>
// using namespace std;

// int main(){
//     int m=5;
//     int n=5;
//     for(int i=m;i>0;i--){
//         for(int j=0;j<m;j++){
//             cout<<"* ";
            
//         }
//         cout<<endl;
//     }
//     return 0;
// }


// #include <iostream>
// using namespace std;

// int main(){
//     int m=5;
//     int n=5;
//     for(int i=0;i<m;i++){
//         for(int j=0;j<i;j++){
//             cout<<"* ";
//         }
//         cout<<endl;
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int base,exponent;
//     cout<<"Enter base: ";
//     cin>>base;
//     cout<<"Enter exponent: ";
//     cin>>exponent;

//     int product=1;

//     for(int i=1;i<=exponent;i++){
//         product = base*product;
//     }

//     cout<<product;

//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Enter nTH term: ";
//     int n;
//     cin>>n;

//     int sum=0;
//     int a=1;
//     int b=1;

//     for(int i=1;i<=n-2;i++){
//         sum = a + b;
//         a = b;
//         b = sum;
//     }
//     cout<<b;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     int product=1;
//     for(int i=n;i>0;i--){
//         product=product*i;
//     }
//     cout<<product;
//     return 0;
// }

// Print the sum of this series:
//  1 - 2 + 3 - 4 + 5 - 6 ... 'n'. 
// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter n: ";
//     cin>>n;
//     int sum=0;
//     for(int i=0;i<n;i++){
//         if(n%2==0){
//             sum=-i-sum;
//         }
//         else{
//             sum=sum+i;
//         }
//     }
//     cout<<sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){

//     cout<<"Enter number: ";
//     int n;
//     cin>>n;
//     int sum = 0;
//     int lastdigit = 0;
//     int a=n;
//     while(n>0){
//         lastdigit = n%10;
//         sum = sum + lastdigit;
//         n=n/10;
//     }
//     cout<<sum;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Enter number: ";
//     int n;
//     cin>>n;
//     bool flag=true;
//     for(int i=2;i<=(n-1);i++){
//         if(n%1==0){
//             flag=false;
//             break;
//         }
//     }
//     if(n==1){
//         cout<<"1 is coposite number.";
//     }
//     else if(flag==false){
//         cout<<n<<" is a composite number";
//     }
//     else{
//         cout<<n<<" is a prime number.";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;
//     bool flag=false;
//     for(int i=2;i<n-1;i++){
//         if(n%i==0){
//             flag=true;
//             break;
//         }
//     }

//     if(n==1){
//         cout<<"comosite";
//     }
//     else if(flag==true){
//         cout<<"comosite";
//     }
//     else{
//         cout<<"Prime.";
//     }
    
    
       
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Odd numbers from 1 to 100:"<<endl;
//     for(int i=1;i<=100;i++){
//         if(i%2==0){
//             continue;
//         }
//         cout<<" "<<i<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     cout<<"Even numbers from 1 to 100:"<<endl;
//     for(int i=1;i<=100;i++){
//         if(i%2!=0){
//             continue;
//         }
//         cout<<" "<<i<<" ";
//     }
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     int count=0;
//     int lastdigit;

//     while(n>0){
//         n=n/10;
//         count+=1;
//     }
//     cout<<count;
//     return 0;
// }

// #include <iostream>
// using namespace std;

// int main(){
//     int n;
//     cout<<"Enter number: ";
//     cin>>n;

//     int sum=0;
//     int lastdigit;

//     while(n>0){
//         lastdigit=n%10;
//         sum = sum + lastdigit;
//         n=n/10;
//     }

//     cout<<sum;

//     return 0;
// }

