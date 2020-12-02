#include<iostream>
#include<cstdio>

#define NUMMAX 10001 
 
using namespace std;
bool arr[NUMMAX];
 
//셀프넘버 판별 함수.
int solution(int n){
    int sum = n;    
 
    while(1){   
 
        if(n == 0) break; 
        sum += n%10;      
        n = n/10;         
 
    }
 
    return sum;
}
 
 
int main(void){
    ios::sync_with_stdio(false), cout.tie(0), cin.tie(0);
    
    for(int i=1; i<NUMMAX; i++){
        int idx = solution(i);
 
        if(idx <= NUMMAX){
            arr[idx] = true;    
        }
 
    }
 
    
    for(int i=1; i<NUMMAX; i++){
        if(!arr[i]) std ::cout<< i <<"\n";
    }
 
    return 0;
}