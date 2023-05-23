/******************************************************************************

Febrero 8/2023
Natalia Catalina Guzmán Fuentes
Taller vectores

*******************************************************************************/
#include <stdio.h>
#include <iostream>
#include<vector>

using namespace std;

int main()
{
    
vector<int> vector01 (6,201);
vector<int> vector02 (4,400);
vector<int>::iterator it;

int myarray[]={501,502,503,304,404};
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;

it=vector01.begin();
it=vector01.insert(it,200);
vector01.insert(it,2,300);

for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;
//it no valido, signar de nuevo:

it=vector01.begin();
vector01.insert(it+2, vector02.begin(), vector02.end());
vector01.insert(vector01.begin(), myarray, myarray+3);

cout<<"My vector contains: "<<endl;
for(it=vector01.begin(); it<vector01.end();it++)
cout<<" "<<*it;
cout<<endl;

    return 0;
}
