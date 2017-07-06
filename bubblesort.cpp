#include <iostream> 
using namespace std; 
 
 
int n,i,k,temp, pilihan; 
 

 int main() { 
   cout<<"Masukan data yang akan diinput anda : "; cin>>n; 
   int x[n]; 
      
     for (i=1;i<=n;i++){ 
       cout<<"Masukan Data ke "<<i<<" : "; cin >> x[i-1]; 
     } 
     pilihan: 
     cout<<"1. Pengurutan Menaik" << endl; 
     cout<<"2. Pengurutan Menurun" << endl; 
     cout<<"Pilih Pengurutan : ";cin >> pilihan; 
 
 
     switch (pilihan) { 
       case 1: 
       for (i=0;i<n-1;i++){ 
           for (k=n-1;k>i;k--){ 
             if (x[k]<x[k-1]){ 
               temp=x[k]; 
               x[k]=x[k-1]; 
               x[k-1]=temp; 
             } 
           } 
         } 
       break; 
 
 
       case 2: 
       for (i=0;i<n-1;i++){ 
         for (k=n-1;k>i;k--){ 
           if (x[k]>x[k-1]){ 
             temp=x[k]; 
             x[k]=x[k-1]; 
             x[k-1]=temp; 
           } 
         } 
       } 
       break; 
 
 
       default: 
 
 
       cout<<"Pilihan anda TIDAK VALID\n"<<endl; 
       goto pilihan; 
       break; 
     } 
 
 
       cout<<"| "; 
       for(i=0;i<n;i++){ 
         cout<<x[i]<<" | "; 
       } 
 return 0; 
 } 
