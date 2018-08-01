// prints array backward
#include <cmath>
#include <cstdio>
#include <vector>
#include <iostream>
#include <algorithm>
using namespace std;


int main() {
   const int N=5;
   int *A= new int[N];
   A[N]={1,4,5,6,9};
   cout<<A[--N];
    return 0;
}