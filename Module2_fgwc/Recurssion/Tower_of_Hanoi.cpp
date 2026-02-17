#include <iostream>
using namespace std;
int Hanoi(int n , char from , char to , char aux){
    //  Base Case 
    if(n == 0){
        return 0 ;
    }
    if(n == 1){
        cout<<"Move Disk from "<< from << " rod to "<< to <<" rod "<<endl ;
        return 1;
    }
    //  Recurssion Call + Processing
    int moves = 0 ;
    moves += Hanoi(n - 1 , from , aux , to) ;
    cout<<"Move disk 3 from"<<from<<"rod to "<<to<<" rod using aux"<<endl;
    moves+= 1 ;
    moves += Hanoi(n - 1 , aux , to , from ) ;
    return moves ;
}
int main(){
    return 0 ;
}