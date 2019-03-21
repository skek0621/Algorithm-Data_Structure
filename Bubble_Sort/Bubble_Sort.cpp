//
//  Bubble_Sort.cpp
//  Algorithm_2018
//
//  Created by Cha Hyun Min on 2019. 3. 22..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

//버블정렬 시간복잡도 O(N^2) --> 선택정렬보다 더 비효율 , 왜냐면 매번 교차 수행 --> 비효율 최강

int main(){
    int array[10] = {1,10,5,8,7,6,4,3,2,9};
    int i, j;
    
    for(i=0; i<10; i++){
        for(j=0; j< 9-i ; j++){
            if(array[j] > array[j+1]) swap(array[j], array[j+1]);
        }
    }
    
    for(int i=0; i<10; i++) cout<<array[i]<<" ";
    return 0;
}
