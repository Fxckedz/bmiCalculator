#include <stdio.h>
#include <stdlib.h>

void showBMI(){

    printf("BMI\t\tCategory\n");
    printf("---------\t---------------------------------------\n");
    printf("Less than 16\tSeverely Underweight\n");
    printf("16 - 16.9\tUnderweight\n");
    printf("17 - 18.4\tMildly Underweight\n");
    printf("18.5 - 24.9\tNormal (healthy weight)\n");
    printf("25 - 29.9\tOverweight\n");
    printf("30 - 34.9\tModerately Obese\n");
    printf("35 - 39.9\tSeverely Obese\n");
    printf("40 or more\tVery Severely Obese\n");

}

void finalThanks(){
    printf("Thank you so much for using my little program, Bye.");
}

void classifyBMI(float BMI){

    if(BMI < 16){
        printf("Your BMI is %.2f, Severe Thinness.\n\n",BMI);
        showBMI();
    }else if(BMI > 16 && BMI < 17){
        printf("Your BMI is %.2f, Moderate Thinness.\n\n",BMI);
        showBMI();
    }else if(BMI > 17 && BMI < 18.5){
        printf("Your BMI is %.2f, light Thinness.\n\n",BMI);
        showBMI();
    }else if(BMI > 18.5 && BMI < 25){
        printf("Your BMI is %.2f, You are Healthy.\n\n",BMI);
        showBMI();
    }else if(BMI > 25 && BMI < 30){
        printf("Your BMI is %.2f, You are Overweight.\n\n",BMI);
        showBMI();
    }else if(BMI > 30 && BMI < 35){
        printf("Your BMI is %.2f, Obesity Level I.\n\n",BMI);
        showBMI();
    }else if(BMI > 35 && BMI < 40){
        printf("Your BMI is %.2f, Obesity Level II.\n\n",BMI);
        showBMI();
    }else{
        printf("Your BMI is %.2f, Obesity Level III.\n\n",BMI);
        showBMI();

}

}

void cleanScreen(){

    system("clear");

}

void calculateBMI(int weight,float height,float *BMI){

    *BMI = (weight / (height * height));

}

int main(){

    //Variables
    int weight;
    float height,BMI;

    do{
    printf("+----------------------------------------------------+\n");
    printf("+        BMI Calculator - By Fxckedz                 +\n");
    printf("+   How to use: Insert your weight and your height   +\n");
    printf("+                 To Exit type: 0                    +\n");
    printf("+----------------------------------------------------+\n\n");

    //getting the weight and height
    printf("Please, Insert your weight(Kg): ");
    scanf("%d",&weight);

    if(weight <= 0){
        break;
    }else{

    printf("Please, insert your height(M): ");
    scanf("%f",&height);

    if(height <= 0){
    }else{

    cleanScreen();

    //Calculating BMI
    calculateBMI(weight,height,&BMI);

    //Classifying BMI

    classifyBMI(BMI);

    setbuf(stdin, 0);

    printf("\nPlease press any key to restart");

    getchar();

    cleanScreen();

    }
    }
    }while(weight);

    cleanScreen();

    //Show the Final Thanks at exit
    atexit(finalThanks);

    return 0;
}