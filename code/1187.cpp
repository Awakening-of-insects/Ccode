#include <iostream>
#include <string>
using namespace std;
int main()
{
    int a[101]= {0},b[101]= {0},c[10000]= {0},alen,blen,clen;
    string as,bs;
    cin>>as>>bs;
    alen=as.length();
    blen=bs.length();;
    //ת������
    for(int i=0; i<alen; i++)
    {
        a[alen-i-1]=as[i]-'0';
    }
    for(int i=0; i<blen; i++)
    {
        b[blen-i-1]=bs[i]-'0';
    }
    //�˷�
    for(int i=0; i<blen; i++)
    {
        for(int j=0; j<alen; j++)
        {
            c[i+j]+=a[j]*b[i];
            c[i+j+1]+=c[i+j]/10;
            c[i+j]%=10;
        }
    }

    clen=alen+blen;

    //ɾ�������λ��ǰ׺0
    while(c[clen-1]==0  && clen>1)
    {
        clen--;
    }
    //������������

    for(int i=clen-1; i>=0; i--)
    {
        cout<<c[i];
    }
    cout<<endl;
    return 0;
}
