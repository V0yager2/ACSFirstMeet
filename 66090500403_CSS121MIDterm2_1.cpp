#include <iostream>
#include <cstdlib>
#include <ctime>
///test

using namespace std;

int main(){
    int random_arr[100]={0},bucket[100]={0},count=51,i=0;
    int median=0; 
    srand( (unsigned)time( NULL ) );

    //insert random number;
    for(int i=0;i<100;i++){
        random_arr[i]=rand()%100;
    }
    //contain a value in bucket
    for(int i=0;i<100;i++){
        bucket[random_arr[i]]++;
    }

    //print all array
    for(int i=0;i<100;i++){
        cout<<random_arr[i]<<"\t";
        if(i!=0 && (i+1)%10==0) cout<<endl;
    }
    cout << endl;

    //count number
    /*for(int i=0;i<100;i++){
        cout<<i<<"\t=\t"<<bucket[i]<<endl;
    }
    cout << endl;*/

    //find median
    while(true){
        if(count==0) break;

        if(bucket[i]!=0){
            bucket[i]--;
            count--;
            if(count<=1) median += i;
        }
        else i++;
    }

    cout<<"Median = "<< median/2 << endl;
    cout<<"Time complexity = O(N)";

    return 0;
}
