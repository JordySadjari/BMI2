#include <stdio.h>
#include <stdlib.h>

float calc(float lengte , float weight){
        float bmi;
        bmi = weight / (lengte * lengte);
        return bmi;
    }

int main()
{
    float weight;
    float lengte;
    char name[100];
    float bmi;


    printf( "Hallo zou u uw naam kunnen invullen.\n" );
    scanf( "%s", &name );

    printf( "Hallo %s kan je je lengte in meters invullen.\n", name );
    scanf( "%f", &lengte );

    printf( "%s kan je je gewicht in kg invullen.\n", name );
    scanf( "%f", &weight );

    bmi = calc(lengte , weight);

    if(bmi < 18.5){
        printf("%s je bent ondergewicht.\n je moet meer gaan eten." , name);
    }

    if(bmi > 18.5 && bmi < 24.9){
        printf("%s je hebt een gezond gewicht.\n ga door met waar je mee bezig bent." , name);
    }

    if(bmi > 25 && bmi < 29.9){
        printf("%s je hebt geen overgewicht.\n maar je mag niet dikker worden." , name);
    }

    if(bmi == 30 || bmi > 30 && bmi < 39.9){
        printf("%s je hebt overgewicht(obesitas).\n verhoogde kans op allerlei aandoeningen\n zoals diabetes, hartaandoeningen en rugklachten.\n je zou 5 tot 10 kg moeten vermageren." , name);
    }

    if(bmi > 40){
        printf("%s je bent kapot dick.\n HAHAHAHAHA xD." , name);
    }

    printf("\n%.2f", weight);
    printf("\n%.2f", lengte);
    printf("\n%.2f", bmi);
}
