/*
#include <stdio.h>

int main(){
    int score;
    scanf("%d", &score);
    if(score>=90){
        printf("A");
    }else if(score>=80){
        printf("B");
    }else if(score>=70){
        printf("C");    
    }else if(score>=60){
        printf("D");
    }else if(score<60){
        printf("E");
    }
    return 0;
}
*/

#include <stdio.h>

int main(){
    int score,grade;
    scanf("%d", &score);
    grade = score / 10;
    switch(grade){
        case 10:
        case 9:
            printf("A\n");
            break;
        case 8:
            printf("B\n");
            break;
        case 7:
            printf("C\n");
            break;
        case 6:
            printf("D\n");
            break;
        default:
            printf("F\n");
            break;
    }
    return 0;
}