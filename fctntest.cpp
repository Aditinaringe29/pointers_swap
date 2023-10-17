#include<iostream>
using namespace std;
void swap(int *a,int *b);
int main()
{
    int a=7;
    int b=2;
    cout<<"before swapping "<<a<<b<<endl;
    swap(&a,&b);
    cout<<"after swapping "<<a<<b<<endl;
}
void swap(int *a, int *b)
{
    int temp=*a;
    *a=*b;
    *b=temp;
} 
