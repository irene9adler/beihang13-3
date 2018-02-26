//北航13年第三题
/*给出一个标准输入的正数（开头末尾没有多余的0），输出其科学计数法表示结果。
比如：输入0.000002，输出2e-6；输入123.456，输出1.23456e2；输入123456，输出1.23456e7*/

#include <stdio.h>
int main()
{
    double m;//正数
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
