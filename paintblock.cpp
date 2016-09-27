#include <cstdio>
using namespace std;
 
int main()
{
    int A,B,C;
    scanf("%d %d %d",&A,&B,&C);
     
    printf("%d",(((A*B)-(4+(A-2)*(B-2))))+((A*C)-(4+(A-2)*(C-2)))+((B*C)-(4+(B-2)*(C-2))));
     
    return 0;
}
