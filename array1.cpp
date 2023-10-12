#include<iostream>
using namespace std;
int greaterThan10(int arr[], int len, int count){
    for(int i=0; i<len; i++){
        if(arr[i]>=10){
            count++;
        }
    }
    return count;
}
int main(){
    int arr[10], count=0;
    for(int i=0; i<10; i++){
        cout<<"Enter the "<<i+1<<" value: ";
        cin>>arr[i];
    }
    
    cout<<endl;
    int ans = greaterThan10(arr, 10, 0);
    cout<<ans<<" integers are greater than or equal to 10";
    return 0;
}