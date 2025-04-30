#include <bits/stdc++.h>

using namespace std;

void visua(int v[], int n){
    for (int i=0; i<n; i++){
        cout << v[i] << endl;
    }
}

void ordina(int v[], int n){
    for (int  i=0; i<n-1; i++){
        for (int j = i+1; j<n; j++){
            if(v[i]>v[j])  swap(v[i], v[j]);
        }
    }
}
