#include <stdio.h>
#include <stdlib.h>
#include <windows.h>

int main()
{
    int age;
    int score;
    float height;
    char gender;
    printf("========================================================================================================================\n\n");
    printf("                                      Welcome to Testing University application page!\n\n");
    printf("========================================================================================================================\n\n");
    Sleep(1000);
    printf("                                                    Please state your age: \n");
    scanf("%d", &age);

    if(age >= 18){

        printf("Your age checks out!(%d yeas old)\n", age);
        printf("What was you score exam?\n");
        scanf("%d", &score);

        if(score >= 80){

            printf("Thats a pretty good score.Therefore you can continue the application.\n");

        }else if(score >= 65 && score <=79){

            printf("That is just a reasonable score.You may consider calling the University board to share more details\n");

        }else{ printf("We are sorry but you can not continue the application due to low exam score(%d).\n", score);

            return 0;
            }

        printf("State your Gender (M/F): ");
        scanf(" %c", &gender);
        while(gender != 'M' && gender != 'F'){
            printf("Please enter a valid gender!");
            scanf(" %c", &gender);
        }
            if(gender == 'F'){

                printf("Thank you Miss!\n");
                printf("Please state you height\n");
                scanf("%f", &height);
                if(height >= 1.70){
                    printf("You are pretty tall!\n You are %.2f ! ", height);
                }else if(height <= 1.69 ){
                    printf("You are a little short but its ok!\n You are %.2f ! ", height);
                    }

            }else if(gender == 'M'){

                printf("Thank you Sir!\n");
                printf("Please state you height\n");
                scanf("%f", &height);
                if(height >= 1.78){
                    printf("You are pretty tall!\n You are %.2f ! ", height);
                }else if(height <= 1.77 ){
                    printf("You are a little short but its ok!\n You are %.2f ! ", height);
                    }
            }


    }



    else{
        printf("                                                         Processing...\n\n ");
        Sleep(1000);
        printf("========================================================================================================================\n\n");
        printf("                          Your age does not much the legal limit to submit an application in our University!\n\n");
        printf("                                                      Session Terminated!\n");
        printf("========================================================================================================================\n\n");
}
    return 0;

}
