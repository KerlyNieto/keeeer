#include <stdio.h>

float cent2fahr (float tempcent);
float fahr2cent (float tempfahr);

int main()
{
	float temp, conv;
	char escala;
	
	do
	{
		printf("Seleccione quE conversiOn desea realizar:\n");
		printf("\t1-De Celsius a Farenheit: C\n\t2-De Farenheit a Celsius: F\n"); 
		scanf("%s", escala);
		
		switch (escala)
	    {  // case 'C':
	    	case '1':
		        printf("Ha seleccionado de Celsius a Farenheit\n");
			    printf("\tIntroduzca la temperatura en Celsius: ");
				scanf("%f",&temp);
				conv=cent2fahr(temp);
				printf("\tEn Farenheit es: %f",conv);
				break;
		   // case 'F':
			case '2':
			    printf("Ha seleccionado de Farenheit a Celsius\n");
				printf("\tIntroduzca la temperatura en Farenheit");
				scanf("%f",&temp);
				conv=fahr2cent(temp);
				printf("\tEn Celsius es: %f", conv);
				break;
			default:
				printf("Esa opcion no existe\n");
				break;
	    }
	} while (escala=='c' || escala=='C' || escala=='f' || escala=='F');
	
	return 0;
}

float cent2fahr (float tempcent)
{   float c;
    c=9/5*tempcent+32;
    return c;
}

float fahr2cent (float tempfahr)
{   float c;
	c=(tempfahr-32)*5/9;
	return c;
}
