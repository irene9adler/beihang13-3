//����13�������
/*����һ����׼�������������ͷĩβû�ж����0����������ѧ��������ʾ�����
���磺����0.000002�����2e-6������123.456�����1.23456e2������123456�����1.23456e7*/

#include <stdio.h>
int main()
{
    double m;//����
    int s = 0;
    int k = 0;
    while(scanf("%lf",&m)!=EOF)
    {
        if((m>=1)&&(m<10)) printf("%lf\n",m);
        else if(m>=10)
        {
            while((m/10)>=1)
            {
                m = m/10;
                s++;
            }
            printf("%lfe%d\n",m,s);
        }
        else
        {
            while((m*10)<10)
            {
                m = m *10;
                k++;
            }
            printf("%lfe-%d\n",m,k);
        }
    }
    return 0;
}
