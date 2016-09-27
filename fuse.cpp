#include <cstdio>
 
using namespace std;
 
int main()
{
    float MAIN = 1.5;
    float MONITOR = 1.0;
    float PRINTER = 2.0;
    float ROUTER = 0.5;
    float fuse=0;
     
    int N_pc;
    int N_printer;
    int N_router;
     
    scanf("%d %d %d",&N_pc,&N_printer,&N_router);
     
    fuse = 2*((MAIN+MONITOR)*(float)N_pc + PRINTER*(float)N_printer + ROUTER*(float)N_router);
    int answer = (int)fuse;
     
    if(0<answer%10 && answer%10 <= 9)
        printf("%d amperes",answer+(10-(answer%10)));
    else
        printf("%d amperes",answer);
     
    return 0;
}
