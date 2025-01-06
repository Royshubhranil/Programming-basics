#include <iostream>
#include <vector>
using namespace std;

int linear(int *arr, int size, int key){
    for(int i = 0; i <size; i++){
        if(arr[i]==key){
            return 1;
        }
    }
    return 0;
}

int binary(int *arr, int size, int key){
    int s = arr[0];
    int e = size-1;
    int mid = s + (e-s)/2;
    while(s<=e){
        if(arr[mid]==key){
            return mid;
        }
        if(key > arr[mid]){
            s = mid + 1;
        }
        if(key < arr[mid]){
            e = mid - 1;
        }
        mid = s + (e-s)/2;
        
    }
    return 0;

}



int main(){
    cout<< "Enter the size of an array" << endl;
    int arr[10] = {3,5,7,9,14,16,17,19,21,26};
    int result_linear = linear(arr, 10,19);
    int result_binary = binary(arr, 10, 19);
    cout <<"element in pos "<<result_binary << endl;
    
    if(result_binary){
        cout<< "True" << endl;
    }
    else{
        cout<< "false" <<endl;
    }


    return 0;
}
