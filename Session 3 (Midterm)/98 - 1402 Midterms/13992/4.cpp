#include <iostream>

using namespace std;

int main()
{
    int n,m,k;
    int i,j,l,r;
    int width;
    int off,on;
    bool found = false;
    cin>>n>>m>>k;
    width = n-m;
    char board[n][n], square[m][m];
    for(i=0;i<n;i++){
        for(j=0;j<n;j++)
            cin>>board[i][j];
    }
    for(l=0;l<=width && !found;l++){
        for(r=0;r<=width && !found;r++){
            off=0;
            on=0;
            for(i=0;i<m;i++){
                for(j=0;j<m;j++){
                    square[i][j]=board[i+l][j+r];
                    if(board[i+l][j+r] == '#')
                        on++;
                    else if(board[i+l][j+r] == 'o')
                        off++;
                }
            }
            if(on<=k || off<=k)
                found = true;
        }
    }
    if(found)
        cout<<"YES";
    else
        cout<<"NO";
    return 0;
}
