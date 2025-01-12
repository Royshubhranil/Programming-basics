#include <bits/stdc++.h>
using namespace std;


int sumofsub(int *arr, int size){
    int sum =0;
    
    
    for(int i =0; i < size; i++){
        sum= sum+arr[i];
        if(sum<0){
            int maxsum=arr[i];
            for(int i =0; i < size; i++){
                if(maxsum<arr[i+1]){
                    maxsum = arr[i+1];
                }
            }
            return maxsum;
            }
        else{
            int sumnew=0;
            for(int i =0; i < size; i++){
                if(arr[i]<0){
                    i++;
                    sumnew = sumnew + arr[i];
                }
                else{
                    sumnew = sumnew+ arr[i];
                }
            }
            return sumnew;
        }
    }
}
            
    
    



int main() {
	int arr[4] = {7,-2,-3,4};
	int size = sizeof(arr)/sizeof(arr[0]);
	int sum = sumofsub(arr, size);
	cout << sum;

}
