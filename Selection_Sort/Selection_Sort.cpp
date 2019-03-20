//
//  Selection_Sort.cpp
//
//  Created by Cha Hyun Min on 2019. 3. 21..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
using namespace std;

// 선택정렬 시간복잡도 O(N^2) --> 매우 비효율
int main()
{
    int i, j, min, index=0;
    int array[10] = {1,10,5,8,7,6,4,3,2,9};
    
    //정렬하는 부분
    for(i=0; i<10; i++){
        min =11;
        for(j=i; j<10; j++){
            if (min > array[j]){
                min = array[j];
                index = j;
            }
        }
//        temp = array[i];
//        array[i] = array[index];
//        array[index] = temp;
        swap(array[i], array[index]);
    }
    
    //정렬된 배열 출력
    for(int i=0; i<10; i++){
        cout<<array[i]<<" ";
    }
    return 0;
}
