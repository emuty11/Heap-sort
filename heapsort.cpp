#include<iostream>
#define my_sizeof(type)((char*)(&type+1)-(char*)(&type))
using namespace std;
void heapify(int a[], int k, int n){
int t = a[k];
while(k<n/2) /* after index n/2 the rest are leafs*/
{
  int j = 2*k+1;//j is the older child of k
  if( j+1< n && a[j]<a[j+1]) ++j;
  if(t > a[j]) break;
  a[ k ]=a[ j ];
  k=j;
}
a[ k ]= t;
}void swap(int a[ ], int i ,int j){
  int temp= a[ i ];
  a[i]=a[j];
  a[j]=temp;
}
void sort(int a[], int n){
  for(int i=n/2 - 1;  i > 0 ; i--){
   heapify(a , i ,n);
  for(int i= n-1; i > 0; i--)
  {
   swap( a , 0 , i);
  
   heapify( a, 0 , i );
  }
  }
}
  int main (){
   int a[  ] = { 4, 2, 6, 5, 1, 8, 9, 3, 7};
   int size = my_sizeof( a )/my_sizeof(a[ 0 ]);
   cout<< "size ="<< size;
   cout<<"before\n";
   for( int i = 0; i<size;i++){
    cout<<a[ i ]<<" , ";
   }
   sort( a,size); //calling the heap sort
   cout<<" after\n";
   for( int i = 0; i< size; i++){
    cout<<a[ i ]<<" , ";
   }
  }