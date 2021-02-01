#include<iostream>
using namespace std;

int main(){
  int n;

  int i, temp;

 cout << "Enter Size of array" << '\n';
 cin>>n;
int ar[n];
cout << "Enter elements of array" << '\n';
 for(i=0;i<n;i++){
   cin>>ar[i];
 }

cout<<"Last = "<<ar[n-1];

for(i=0;i<=n;i++){
   ar[i] +=(ar [ar[i]]%n)*n;

}

for( i=0;i<n;i++){
     ar[i]/=n;
}




cout<<"Array "<<'\n';
  for(i=0;i<n;i++){
      cout << ar[i] << '\n';
  }
  cout<<"Temp = "<<temp;
  return 0;
}
