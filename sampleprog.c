#include <stdio.h>

int divisibleByTwo( int a );

int main ( void ) {
    int a;
    printf( "Enter a number to check if it is divisble by two : " );
    scanf( "%d", &a );
    if (  divisibleByTwo( a ) )
        printf("Yes it is darling!");
    else
        printf("Na ah:<");
    return 0;

}

int divisibleByTwo( int a ) {
    if ( a % 2 == 0 )
        return 1;
    return 0;
}