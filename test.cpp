/*
ID: troyodk2
LANG: C++
TASK:  prefix
*/
//#define _GLIBCXX_USE_C99 1
#include <cstdlib>
#include<iostream>
#include<numeric>
#include<stdio.h>
#include<algorithm>
#include<cstring>
#include<string>
#include<map>
#include<vector>
#include<set>
#include<math.h>
#include<bits/stdc++.h>
using namespace std;
#define INF 2000000000 // 2 billion
typedef  long long  ll;
typedef vector <int> vi;
typedef pair <int,int> ii;
typedef vector<ii> vii;
typedef set<int> si;
typedef map<string,int> msi;
#define REP(i, a, b) \
for (int i = int(a); i < int(b); i++) // a to b, and variable i is local!
///Estructura y como hacer que sirva con map,set,etc.

struct cosa
{
    int words;
    int next[26];
};
struct cost
{
    long long int  a,b,c;
};

struct q
{
    int a;
    string b;
};
//int car[1000000];

//int arr1[10]= {-1,-1,-1,0,0,1,1,1};
//int arr2[10]= {-1,0,1,-1,1,-1,0,1};
//int a1[10]= {-1,1,0,0};
//**int a2[10]= {0,0,-1,1};
//char cosa[10]= {'a','b','c','d','e'};
///LEER CON ESPACIOS SEA BUFFER CHAR[1000] scanf ("%[^\n]%*c", buffer);
///char k ='"';
int alfa,beta;
int act;
char buffer[10];
int gcd(int a, int b)
{
    return b == 0 ? a : gcd(b, a % b);
}


bool operator <(const cost &a,const cost &b)
{
    return a.c < b.c;
}
///Apartir de aqui normalmente inician mis codigos , si es que me estas espiando <3
///From here normally my code starts, that´s if you are stalking me <3
int crib[100000];
int shit[10010];
int main ()
{
    char prof;
    ios_base::sync_with_stdio(0);
    // freopen ("prefix.in","r",stdin);
    //freopen ("prefix.out","w",stdout);
    int x=0,y,z,mal=INF,s=0,d=-2,a1=0,b1,c1,x1,y1,t,res=0;

   int a,b,c;
cin>>a>>b>>c;
crib[1]=1;
shit[0]=1;
z=1;
y=0;

while(1)
{
    x=z;
    while(y!=x)
    {
        if(shit[y]==c)
        {
            cout<<crib[c]-1;
            return 0;
        }
        s=shit[y]*a;
        if(s<10000)
        {
            if(crib[s]==0)
            {
                crib[s]=crib[shit[y]]+1;
                shit[z]=s;
                z++;
            }
        }
        s=shit[y]/b;
        if(s>0)
        {
            if(crib[s]==0)
            {
                crib[s]=crib[shit[y]]+1;
                shit[z]=s;
                z++;
            }
        }

        y++;
    }
}


    return 0;
}
