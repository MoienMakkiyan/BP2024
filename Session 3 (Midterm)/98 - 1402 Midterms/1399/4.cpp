#include<iostream>
using namespace std;
int main()
{
    int M_c[100],m_c[100],M_r[100],m_r[100],n,i,j,x[100][100],f=0;
    cin>>n;
    for(i=0;i<n;i++)
    {
        for(j=0;j<n;j++)
            cin>>x[i][j];
    }
    for(i=0;i<n;i++)
    {
        M_r[i]=x[i][0];
        m_r[i]=x[i][0];
        for(j=0;j<n;j++)
        {
            if(x[i][j]>M_r[i])
                M_r[i]=x[i][j];
            else if(x[i][j]<m_r[i])
                m_r[i]=x[i][j];
        }
    }
    for(j=0;j<n;j++)
    {
        M_c[j]=x[0][j];
        m_c[j]=x[0][j];
        for(i=0;i<n;i++)
        {
            if(x[i][j]>M_c[j])
                M_c[j]=x[i][j];
            else if(x[i][j]<m_c[j])
                m_c[j]=x[i][j];
        }
    }
    for(i=0;i<n;i++)
        for(j=0;j<n;j++)
            if(((x[i][j]==m_r[i])&&(x[i][j]==M_c[j]))||((x[i][j]==M_r[i])&&(x[i][j]==m_c[j])))
            {
                cout<<i<<" "<<j<<endl;
                f=1;
            }
    if(f==0)
        cout<<"NO";

}
