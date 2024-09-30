#include<iostream>
using namespace std;
template<typename T>
void sort(T a[],int n)
{
    int pass_min,i;
    T temp;
   for(int i=0;i<n-1;i++)
   {   
    pass_min=1;
    for(int j=i+1;j<n;j++)
    {
    if (a[j]<a[pass_min])
    {
      if(pass_min!=i)
     {
       temp=a[i];
       a[i]=a[pass_min];
       a[pass_min]=temp;
     }
    }
     }
  }
  
   cout<<"\n sorted elememts are:\n";
   for(i=0;i<n;i++)
   cout<<"\t"<<a[i];
 }
int main()
{
   int n,i,ch;
   int a[10];
   float b[10];
   do
   {
     cout<<"\n selection sort using function template";
     cout<<"\n 1. sort integer number";
     cout<< "\n 2. sort float numbers";
     cout<<"\n 3. exit";
     cout<<"enter your choice";
     cin>>ch;
     switch(ch)
     {
       case 1:
               cout<<"\n sorting integer no";
               cout<<"\n enter hpw many nos ";
               cin>>n;
               for(i=0;i<n;i++)
               cin>>a[i];
               sort<int>(a,n);
               break;
       case 2:
                sort<float>(b,n);
                break;
       case 3:exit(0);
     }
    }
       while(ch!=3);
   return 0;
  }
       
                
               
               
