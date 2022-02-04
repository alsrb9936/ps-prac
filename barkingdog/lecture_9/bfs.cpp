#include <iostream>
#include <queue>
using namespace std;

#define X first
#define Y second
int board[502][502] =
{{1,1,1,0,1,0,0,0,0,0},
 {1,0,0,0,1,0,0,0,0,0},
 {1,1,1,0,1,0,0,0,0,0},
 {1,1,0,0,1,0,0,0,0,0},
 {0,1,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0},
 {0,0,0,0,0,0,0,0,0,0} }; //탐색할 보드 => 노드 리스트 대신 사용  (일반적으로 코테에서 배열사용)

bool visit[502][502]; //방문기록

int n =7,m=10; //n:행의 길이 m:열의 길이
int dx[4] ={1,0,-1,0};
int dy[4] ={0,1,0,-1}; //dx,dy 는 상하좌우 이동좌표


int main(void){
    ios::sync_with_stdio(0);cin.tie(0);

    queue <pair<int,int>> Q;
    visit[0][0] = true; // 큐 시작점 방문표시

    Q.push({0,0}); // while 문에 넣기 위해 점화 한다 생각하면됨

    while(!Q.empty()){
        pair<int,int> cur = Q.front(); Q.pop(); // 시작
        for(int i=0;i<4;++i){
            int nx = cur.X + dx[i];
            int ny = cur.Y + dy[i];

            if(nx < 0 or ny < 0 or nx > n or ny > m) continue; //탐색 보드 범위 설정
            if(visit[nx][ny] == true or board[nx][ny] == 0) continue; //보드 표시와 방문기록 확인

            visit[nx][ny] == true; //방문확인
            Q.push({nx,ny});
            
        }
    }
}