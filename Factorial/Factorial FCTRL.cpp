/* 
 * File:   main.cpp
 * Author: glaucoacassioc
 *
 * Created on 21 de Agosto de 2020, 20:23
 */
#include <iostream>
#include <cstdlib>
#include <vector>
using namespace std;

int main(int argc, char *argvs[]) 
{
    int a,b,c,t;
    
    scanf("%d",&t);
    while(t--)
    {
        scanf("%d",&a);
        c=1;
        b=0;
    	while(a/c>0)
        {
            c=c*5;		
            b=b+(a/c);
        }
        printf("%d\n",b);
    }
    return 0;
}
