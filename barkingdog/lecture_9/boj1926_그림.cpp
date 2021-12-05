#include <bits/stdc++.h>

using namespace std;

#define X first
#define Y second

int board[502][502];
bool vst[502][502];

int dx[4] = {1,0,-1,0};
int dy[4] = {0,1,0,-1};

int row,col;

void input_board(void){
    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            cin >> board[i][j];
        }
    }
}



int main(){
    ios::sync_with_stdio(0);cin.tie(0);

    cin >> row >> col;
    input_board();

    int paint_cnt = 0;
    int paint_size = 0;

    for(int i=0;i<row;i++){
        for(int j=0;j<col;j++){
            if(board[i][j]==0 || vst[i][j]) continue;

            paint_cnt++;
            queue <pair<int,int>> Q;
            vst[i][j] = true;
            Q.push({i,j});

            int size = 0;
            while(!Q.empty()){
                size++;
                pair<int,int> cur = Q.front(); Q.pop();

                for(int n=0;n<4;n++){
                    int nx = cur.X + dx[n];
                    int ny = cur.Y + dy[n];

                    if(nx < 0 || ny < 0 || nx >= row || ny >= col) continue;
                    if(vst[nx][ny]|| board[nx][ny] != 1) continue;

                    vst[nx][ny] = true;
                    Q.push({nx,ny});
                }
            }

            paint_size = max(paint_size,size);
        }
    }

    cout << paint_cnt << '\n' << paint_size;
}