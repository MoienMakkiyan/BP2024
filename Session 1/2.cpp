#include <iostream>

using namespace std;

int main()
{
//        while(true)
//        {
//            int n; cin>>n;
//            if(n==0)
//                break;
//            else{
//                cout<<"n = "<<n<<endl;
//                if(n%2==0) continue;
//                    for(int i=1;i<=n;i++)
//                    {
//                        if(i%2==1) cout<<i<<endl;
//                    }
//            }
//        }

//    while(true)
//    {
//        int d; cin>>d;
//        double t = 0;
//        t+=(int)(d/60*7.9);
//        t+=((d%60)/10*1.3);
//
//        t = min(t,d/10*1.3);
//
//        cout<<t<<endl;
//
//    }


    int n;
    cin>>n;

    int m;
    cin>>m;

    int m_new = 0;

    int digit = 0;

    int temp = m;

    while(temp>0)
    {
        digit++; /// digit = digit + 1;
        temp/=10;
    }

    if(n==digit) m_new = m;
    else{
        m_new = m;
        while(digit<n)
        {
            m_new*=10;
            m_new+=m%10;
            digit++;
            m/=10;
            if(m==0) m = m_new;
            //cout<<m_new<<endl;
        }
    }
    cout<<m_new<<endl;
    return 0;
}
