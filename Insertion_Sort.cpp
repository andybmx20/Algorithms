#include<iostream>
#include<string>
using namespace std;


int main(){

    int V[100], n, i, j, number;
    cout << "Dimenion of array = ";cin>>n;

    for(i=0; i<n; i++){
        cout << "Array[" << i << "]= ";
        cin >> V[i];
    }

    for(i=1; i<n; i++){
            number = V[i];
            j = i-1;
            while(j>=0 && V[j]>number){
                V[j+1] = V[j];
                j--;
            }
            V[j+1] = number;

    }
    for(i=0; i<n; i++){
        cout << V[i] << " ";
    }

}
