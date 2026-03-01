#include<iostream>
using namespace std ;
int minPartition(string n){
    return *max_element(begin(n) , end(n)) - '0' ;
}
int main(){
    return 0 ;
}