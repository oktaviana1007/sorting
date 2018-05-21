/* 
1717051007-Oktaviana
1717051021-Brenda Natalia
1717051033-Cahyani Ramadhani
1717051045-Naomy Tiara Dewi
Link : https://github.com/oktaviana1007/sorting/edit/master/sorting.cpp
*/

#include <iostream>
using namespace std;

void selection(int a[],int x){

 for(int i=0;i<x;i++){
 for(int j=i+1;j<x;j++){
  if(a[i]>a[j]){
  int p=a[i];
  a[i]=a[j];
  a[j]=p; 
 }
 }
 }

}

void bubble(int a[],int x){

	for(int i=0;i<x;i++){
	for(int j=0;j<x-1;j++){
		if(a[j]>a[j+1]){
		int ptr=a[j];
		a[j]=a[j+1];
		a[j+1]=ptr;
		}
	}
	}

}

void mergeSort(int data[],int x){ 
int a[x],b[x];
 if(x=2){ 
  if(data[0]>data[1]){ 
   int p=data[0]; 
   data[0]=data[1]; 
   data[1]=p; 
  } 
 } 
 else if(x>2){ 
  int m=(x/2); 
   for(int i=0;i<=m-1;i++){ 
    a[i]=data[i]; 
   } 
   for(int i=m;i<=x-1;i++){ 
    b[i-m]=data[i]; 
   } 
  mergeSort(a,m); 
  mergeSort(b-x,m); 
  int i=0; 
  int j=0; 
   for(int k=0;k<=x-1;k++){ 
    if(a[i]<=b[j]){ 
     data[k]=a[i]; 
     i=i+1; 
    }
    else{
     data[k]=b[j]; 
     j=j+1; 
    } 
   } 
  } 
 }

void tampil(int a[],int x){
 
cout<<endl;
  for(int i=0;i<x;i++){
   cout<<a[i]<<" "; 
  }
cout<<endl;
}

int main(){
int n;
cin>>n;
cout<<endl;
int a[n];
  for(int i=0;i<n;i++){
   cin>>a[i];
  }
selection(a,n);
tampil(a,n);
bubble(a,n);
tampil(a,n);
mergeSort(a,n);
tampil(a,n);
	
return 0;
}
