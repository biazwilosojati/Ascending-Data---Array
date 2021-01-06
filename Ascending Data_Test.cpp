#include <iostream>
#include <conio.h>
using namespace std;
int main()
{
    int i,j,n;
    int Array[50];
    int tmp;

cout << "\n Bias Wilosojati ";
cout << "\n Array by C++ ";
cout << "\n =========================================================================== ";
cout << "\n Please input the amount of data number which to be sorted : (Enter Number!) ";
cin >> n;
cout << "\n";
for(i=1; i<=n; i++)
{
       cout<<"\tInputting Data Number to-"<<i<<" = ";
       cin>>Array[i];
}

//Pengurutan secara Ascending (Bubble Sort)
for(i=1; i<=n; i++)
{
       for(j=i; j<=n; j++)
       {
              if(Array[i] > Array[j])
              {
                     tmp = Array[j];
                     Array[j] = Array[i];
                     Array[i] = tmp;
              }
       }
}
cout << "\n   ---------------------------------------------\n";
cout << "   = Sorted result of Data Number by Ascending =\n";
cout << "\n   ---------------------------------------------\n";
cout << "\n";

for(i=1;i<=n;i++)
{
       cout<<"\tElement "<<i<<" = "<<Array[i]<<endl;
}
getch();
}
