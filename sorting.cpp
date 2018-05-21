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


int main(){
int n;
cin>>n;
selection(a,n);
tampil(a,n);
bubble(a,n);
tampil(a,n);
	
return 0;
}
