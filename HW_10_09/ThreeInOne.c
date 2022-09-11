#include <stdio.h>
#include <math.h>

int main(){
    float a = 0;
    float b = 0;
    float c = 0;
    int cmd = 0;
        do{
            printf("                  ===================\n");
            printf("                 | What do You want? |\n");
            printf("                  ===================\n\n");
            printf(" -------------------------------------------------------- \n");
            printf("| 0. EXIT                                                |\n");
            printf("| 1. Quadratic Equation | ax^2+bx+c=0 | (First Exercise) |\n");
            printf("| 2. Clothes according to the weather (Second Exercise)  |\n");
            printf("| 3. Number of Bit's (Third Edercise)                    |\n");
            printf("| 4. About Me.                                           |\n");
            printf(" -------------------------------------------------------- \n");
            scanf("%d",&cmd);
            printf("\n");
            switch(cmd){
                case 1:
                    {
                        printf("Write argumet - |a|\n");
                        scanf("%f",&a);
                        printf("\n");
                        printf("Write argumet - |b|\n");
                        scanf("%f",&b);
                        printf("\n");
                        printf("Write argumet - |c|\n");
                        scanf("%f",&c);
                        printf("\n");
                        float discr = (b*b)-4*a*c;
                        if(discr > 0)
                        {
                            float x1 = (-b+sqrt(discr))/2*a;
                            float x2 = (-b-sqrt(discr))/2*a;
                            printf("| Radical x1 = %f |\n",x1);
                            printf("| Radical x2 = %f |\n\n",x2);
                        }
                            else if(discr < 0)
                        {
                            printf(" _____________________________________\n");
                            printf("| Quadratic Equation has not radicals |\n");
                            printf("|_____________________________________|\n\n");
                        }
                            else
                        {
                            float x = -b/(2*a);
                            printf("| Radical x = %f |\n\n",x);
                        }
                        }
                    break;
                case 2:
                    printf("Welcome to BOT CATTW (Clothes According To The Weather)\n\n");
                    {
                        int mes = 0;
                        do{
                            printf("What is the weather today?\n");
                            printf("0. EXIT\n");
                            printf("1. Clear\n");
                            printf("2. Mainly cloudy\n");
                            printf("3. Snowy\n\n");
                            scanf("%d",&mes);
                            printf("\n");
                            switch(mes)
                            {
                                case 1:
                                    printf("What is the temperature outside?\n\n");
                                    float  temp1 = 0;
                                    scanf("%f",&temp1);
                                    printf("\n");
                                    if (temp1 > 15)
                                    {
                                        printf("In such weather,\nit is better to wear a hat and clothing made from natural fabrics.\n\n");
                                    }
                                    else if ((temp1 > 0)&&(temp1 <= 15))
                                    {
                                        printf("In such weather,\nit is worth dressing warmly in clothes made of windproof fabrics.\n\n");
                                    }
                                    else
                                    {
                                        printf("Better sit at home with a mug of hot cocoa:)");
                                    }
                                    break;
                                case 2:
                                    printf("What is the temperature outside?\n");
                                    float  temp2 = 0;
                                    scanf("%f",&temp2);
                                    printf("\n");
                                    if (temp2 > 15)
                                    {
                                        printf("Better go to the sea.\n\n");
                                    }
                                    else if ((temp2 > 0)&&(temp2 <= 15))
                                    {
                                        printf("In such weather,\nit is worth dressing warmly in clothes made of windproof fabrics.\n\n");
                                    }
                                    else
                                    {
                                        printf("Better sit at home with a mug of hot cocoa:).");
                                    }
                                    break;
                                case 3:
                                    printf("Why should you choose clothes,\nit's better to sit at home,\npet the cat and start programming.\n\n");
                                    break;
                                default:
                                break;
                            }
                        }while(mes);
                    }
                    break;
                case 3:
                    printf("Enter a number.\n");
                    long int number = 0;
                    scanf("%ld",&number);
                    if (number > 2147483647)
                    {
                        printf("ERORR!!!!\nNumber cannot be more than 2'147'483'647\n\n");
                    }
                    else
                        {
                            int i = 0;
                            while(number != 0)
                            {
                                if((number % 2) == 1)
                                    i++;
                                number = number / 2;
                            }
                            printf("Amount of Bit's in number = %d\n\n", i);
                        }
                    break;
                case 4:
                    printf("              __________________\n");
                    printf("             /                  \\\n");
                    printf(" ------------ Hi my name is Nick.-------------- \n|                                              |\n| I am a novice developer who did not see his  |\n| own path in an educational institution       |\n| and decided to learn science in his own way. |\n\n");
                    break;
                default:
                    break;
            }

        }while(cmd);
    return 0;
}