/*
6. Write a C program to convert a given integer to a Roman number. >

Roman numerals are represented by seven different symbols: I, V, X, L, C, D and M.
Symbol       Value
I             1
V             5
X             10
L             50
C             100
D             500
M             1000

Expected Output:

Original integer: 12
Roman number of the said integer: XII
*/
#include<stdio.h>
int main(){
    int num, helper=0, i;
    printf("Enter the number: ");
    scanf("%d", &num);

        if(num<=5 && num>=1){
            if(num == 5)
                printf("V");
            else
            {
                for(i=0; i<num; i++){
                    printf("I");
                }
            }
        }
        else if(num <= 10 && num>5){
            if(num == 10)
                printf("X");
            else
            {
                for(i=0; i<(num/5); i++){
                    printf("V");
                }
                for(i=0; i<(num%5); i++){
                    printf("I");
                }
           }
        }
        else if(num <= 50 && num > 10){
            if(num == 50)
                printf("L");
            else{
                for(i=0; i<(num/10); i++){
                    printf("X");
                }
                helper = num % 10;
                if(helper < 10 && helper >= 5){
                    for(i=0; i<(helper/5); i++){
                        printf("V");
                    }
                    for(i=0; i<(helper%5); i++){
                        printf("I");
                    }
            }
            }
        }
        else if(num <= 100 && num >50){
            if(num == 100){
                printf("C");
            }
            else{
                for(i=0; i<(num/50); i++){
                    printf("L");
                }
                helper = num % 50;
                if(helper < 50 && helper > 10){
                    for(i=0; i<(helper/10); i++){
                        printf("X");
                    }
                    int helper2 = helper % 10;
                    for(i=0; i<(helper2/5); i++){
                        printf("V");
                    }
                    for(i=0; i<(helper2%5); i++){
                        printf("I");
                    }
                }
                else if(helper <= 10){
                    if(helper == 10){
                        printf("X");
                    }
                    else{
                        for(i=0; i<(helper/5); i++){
                            printf("V");
                        }
                        for(i=0; i<(helper%5); i++){
                            printf("I");
                        }
                    }
                }
            }
        }
        else if(num <= 500 && num > 100){
            if(num == 500){
                printf("D");
            }
            else{
                for(i=0; i<(num/100); i++){
                    printf("C");
                }
                helper = num % 100;
                if(helper < 100 && helper >= 50){
                   /*x if(helper == 50)
                        printf("L");*/
                    for(i=0; i<(helper/50); i++){
                        printf("L");
                    }
                    int helper2 = helper%50;
                    if(helper2 > 10){
                        for(i=0; i<(helper2/10); i++){
                            printf("X");
                        }
                        int helper3 = helper2 % 10;
                        if(helper3 > 5){
                            for(i=0; i<(helper3/5); i++){
                                printf("V");
                            }
                            for(i=0; i<(helper3%5); i++){
                                printf("I");
                            }
                        }
                        else{
                            for(i=0; i<(helper3%5); i++){
                                printf("I");
                            }
                        }
                           
                    }
                    else{
                        for(i=0; i<(helper2/5); i++){
                            printf("V");
                        }
                        for(i=0; i<(helper2%5); i++){
                            printf("I");
                        }
                    }

                }
                else if(helper < 50 && helper >= 10){
                    if(helper == 10)
                        printf("X");
                    for(i=0; i<(helper/10); i++){
                        printf("X");
                    }
                    for(i=0; i<(helper%10); i++){
                        printf("I");
                    }
                    
                    
                }
                else if(helper < 10){
                    if(helper >= 5)
                    {
                        for(i=0; i<(helper/5); i++){
                            printf("V");
                        }
                        for(i=0; i<(i<helper%5); i++){
                            printf("I");
                        }
                    }else{
                        for(i=0; i<helper; i++){
                            printf("I");
                        }
                    }
                }
            }
        }
        else if(num <= 1000 && num >500){
            if(num == 1000)
                printf("M");
            for(i=0; i<(num/500); i++){
                printf("D");
            }
            helper = num % 500;
            for(i=0; i<(helper/100); i++){
                printf("C");
            }
            int helper2 = helper%100;
            for(i=0; i<(helper2/50); i++){
                printf("L");
            }
            int helper3 = helper2%50;
            for(i=0; i<(helper3/10); i++){
                printf("X");
            }
            int helper4 = helper3%10;
            for(i=0; i<(helper4/5); i++){
                printf("V");
            }
            for(i=0; i<(helper4%5); i++){
                printf("I");
            }
        }
        else if(num > 1000){
            printf("this not correct process for in this programe.");
        }

    
}