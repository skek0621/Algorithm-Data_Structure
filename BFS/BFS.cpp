//
//  BFS.cpp
//  너비 우선 탐색
//
//  Created by Cha Hyun Min on 2019. 4. 5..
//  Copyright © 2019년 Cha Hyun Min. All rights reserved.
//  성신여자대학교 IT 학부 20161145 차현민

#include <stdio.h>
#include <iostream>
#include <queue>
#include <vector>
using namespace std;

int number = 7;
int visit[7];

vector<int> v[8];

void bfs(int start){
    queue<int> q;
    q.push(start);
    
    visit[1] = true;

    // q가 빌 때 까지
    while (! q.empty()) {
        int x = q.front();
        q.pop();
        cout<<x;
        for(int i=0; i<v[x].size(); i++){
            int y = v[x][i];
            if(visit[y] == false){
                q.push(y);
                visit[y] = true;
            }
        }
    }
}
int main()
{
    v[1].push_back(2);
    v[1].push_back(3);
    
    v[2].push_back(1);
    v[2].push_back(3);
    v[2].push_back(4);
    v[2].push_back(5);
    
    v[3].push_back(1);
    v[3].push_back(2);
    v[3].push_back(6);
    v[3].push_back(7);
    
    v[4].push_back(2);
    v[4].push_back(5);

    v[5].push_back(2);
    v[5].push_back(4);

    v[6].push_back(3);
    v[6].push_back(7);

    v[7].push_back(3);
    v[7].push_back(6);

    bfs(1);
}
