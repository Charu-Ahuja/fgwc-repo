#include<iostream>
using namespace std ;
int Linear_Search(int arr[] , int n , int target){
    int idx = -1 ;
    bool found = false ;
    for(int i = 0 ; i < n ; i++){
        if(arr[i] == target){
            found = true ;
            idx = i ;
            break ;
        }
    }
    if(found == true){
        return idx ;
    }
    return -1 ;
}
int main(){
    int arr[5] = {2 , 7 , 9 , 0 , 4} ;
    int n = 5 ;
    int target ;
    cout<<"Enter the value of target : "<<" " ;
    cin>>target ;
    int ans = Linear_Search(arr , n , target) ;
    if(ans != -1){
        cout<<"Target element is found at the index : "<<ans<<endl ;
    }
    else{
        cout<<"Target not found !!"<<endl ;
    }
    return 0 ;
}
