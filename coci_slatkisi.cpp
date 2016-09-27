#include <cstdio>
#include <math.h> // pow
 
using namespace std;
 
int main()
{
    int want, hat;
    int answer;
    scanf("%d %d",&want,&hat);
 
    if(want < (int)pow(10,hat))
    {
        if(want >= ((int)pow(10,hat))/2)
        {
            answer = want - want%(int)(pow(10,hat)) + (int)pow(10,hat);
            printf("%d",answer);
        }
        else
            printf("%d",0);
    }
    else if(want%(int)(pow(10,hat)) >= ((int)pow(10,hat))/2) // 반올림 중 올림 상황일 때
    {
        answer = want - want%(int)(pow(10,hat)) + (int)pow(10,hat);
        printf("%d",answer);
    }
    else // 반올림 중 내림 상황일 때
    {
        answer = want - want%(int)(pow(10,hat));
        printf("%d",answer);
    }
 
    return 0;
}
