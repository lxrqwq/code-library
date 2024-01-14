#include<bits/stdc++.h>
using namespace std;
typedef long long ll;

template<int N,function<T(T,T)> opt>
class segment_tree{
    private:
        struct node{
            int l,r;
            T num;
        }tree[N + 5 << 2];
    
}