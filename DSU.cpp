#include<bits/stdc++.h>
using namespace std;

#define endl '\n'
const int mod = 1000000007;
const int N = 2e5+10;
int parent[N];
int size_set[N];

void make(int n){
    parent[n]=n;
    size_set[n]=1;
}

int find(int n){
    if(n==parent[n]) return n;
    return parent[n]=find(parent[n]);
}

void union_sets(int a, int b){
    a=find(a);
    b=find(b);
    if (a!=b){

        if(size_set[a]<size_set[b])
            swap(a,b);
        parent[b]=a;
        size_set[a]+=size_set[b];
    }
}

int main() {

}