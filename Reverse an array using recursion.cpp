#include <iostream>
using namespace std;

void reverse_arr(int *arr,int start, int end){
    if(start>=end){
        return ;
    }
    swap(arr[start],arr[end-1]);
    reverse_arr(arr,start+1,end-1);
}


int main(){
    int arr[5] = {1,3,5,7,9};
    int start = 0;
    int end = sizeof(arr)/4;
    reverse_arr(arr,start,end);
    for(int i =0; i < end; i++){
        cout << arr[i] << " ";
    }
}
