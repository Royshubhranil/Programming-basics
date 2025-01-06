#include <bits/stdc++.h>
using namespace std;

void merge_arr(int arr_a[], int size_a,int arr_b[], int size_b,int arr_c[]){
    int i = 0;
    int j = 0;
    int k =0;
    
    while(i<size_a && j < size_b){
        if(arr_a[i]<arr_b[j]){
            arr_c[k] = arr_a[i];
            i++;
            k++;
        }
        else{
            arr_c[k] = arr_b[j];
            j++;
            k++;
        }
    }
    while(i<size_a){
        arr_c[k] = arr_a[i];
        i++;
        k++;
    }
    
    while(j<size_a){
        arr_c[k] = arr_b[j];
        j++;
        k++;
    }
    for(int l = 0; l < k;l++){
        cout << arr_c[l] << " ";
    }
}



int main() {
	int arr_a[5] = {1,5,8,10,13};
	int arr_b[8] = {2,3,4,6,7,9,11,12};
	int arr_c[100] ={0};
	merge_arr(arr_a,5,arr_b,8,arr_c);

}
