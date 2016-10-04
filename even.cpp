#include <cstdio>
#include <cmath>
using namespace std;
int main()
{
    int A, B;
    int answer = 0;
 
    scanf("%d %d",&A,&B);
 
    answer = B-A-(int)sqrt(B)+(int)sqrt(A);
    if(sqrt(A)-(double)((int)sqrt(A)) > 0)
        answer+=1;
    printf("%d",answer);
 
    return 0;
}
