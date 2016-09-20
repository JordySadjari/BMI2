#include <stdio.h>
#include <stdlib.h>

int main()
{
    int weight;
    int lengte;
    char name[100];

    printf( "Hallo zou u uw naam kunnen invullen.\n" );
    scanf( "%s", &name );
    printf( "Hallo %s kan je je lengte in meters invullen.\n", name );
    scanf( "%d", &lengte );
    printf( "%s kan je je gewicht in kg invullen.\n", weight );
    scanf( "%d", &weight );

    return 0;

}
