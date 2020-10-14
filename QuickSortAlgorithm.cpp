// Implementing Quick Sort Algorithm program in C++
#include<iostream>
using namespace std;
void sort(int *a,int left,int right);
int main()
{
int a[20],num;
cout<<"Enter length of array: ";
cin>>num;
cout<<"Enter array: ";
for(int i=0;i<num;i++)
cin>>a[i];
sort(a,0,num-1);
for(int i=0;i<num;i++)
cout<<a[i]<<"";
}
void sort(int *a,int left,int right)
{
int bol=0,l=left,r=right,x,pivot=left;
if(right-left>=1){
while(left<right){
if(bol==0){
if(a[right]<a[pivot]){
x=a[right];a[right]=a[pivot];a[pivot]=x;
pivot=right;
left++;bol=1;}
else
right--;}
else{
if(a[left]>a[pivot]&&bol==1){
x=a[left];a[left]=a[pivot];a[pivot]=x;
right--;
pivot=left;bol=0;}
else
left++;
}}
sort(a,l,pivot-1);
sort(a,pivot+1,r);
}}
