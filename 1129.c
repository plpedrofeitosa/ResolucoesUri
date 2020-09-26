#include <stdio.h>
int main ()
{
    int n, A, B, C, D, E;
    while (1){
    scanf ("%d",&n);   
    if(n == 0)
        break; 
    while (n!=0)
    {
        scanf ("%d %d %d %d %d", &A, &B, &C, &D, &E);
        if (A<=127 && B>127 && C>127 && D>127 && E>127)
        printf ("A\n");
        else if (A>127 && B<=127 && C>127 && D>127 && E>127)
        printf ("B\n");
        else if (A>127 && B>127 && C<=127 && D>127 && E>127)
        printf ("C\n");
        else if (A>127 && B>127 && C>127 && D<=127 && E>127)
        printf ("D\n");
        else if (A>127 && B>127 && C>127 && D>127 && E<=127)
        printf ("E\n");
        else
        printf ("*\n");
        n--;   
    }  
    }
}
