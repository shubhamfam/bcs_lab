#include<stdio.h>

int main(){
    int day, month, year, flag=1, leap=0;

    printf("Enter date as DD MM YYYY\n");
    scanf("%d %d %d", &day, &month, &year);

    if(year%100==0){
        leap = 0;
    } else if (year%400 == 0){
        leap = 1;
    } else if (year%4 == 0) {
        leap = 1;
    } else {
        leap = 0;
    }

    switch(month){
        case 4:
        case 6:
        case 9:
        case 11:
            if(day>=1 && day<=30) {
                flag = 0;
            } else {
                flag = 1;
            }
            break;
        case 1:
        case 3:
        case 5:
        case 7:
        case 8:
        case 10:
        case 12:
            if(day>=1 && day<=30){
                flag = 0;
            } else {
                flag = 1;
            }
            break;
        case 2:
            if(leap == 1){
                if(day>=1 && day<=29) {
                    flag=0;
                } else {
                    flag=1;
                }
            } else if (leap == 0){
                if(day>=1 && day<=28) {
                    flag=0;
                } else {
                    flag=1;
                }
            }
            break;
        default:
            flag=1;
    }

    // if(month<=12 && month >=1){
    //     if(month == 4 || month == 6 || month == 9 || month == 11 )
    //     {
    //         if(day>=1 && day<=30) {
    //             flag = 0;
    //         } else {
    //             flag = 1;
    //         }            
    //     } else if(month == 1 || month == 3 || month == 5 || month == 7 || month == 8 || month == 10 || month == 12){
    //         if(day>=1 && day<=30){
    //             flag = 0;
    //         } else {
    //             flag = 1;
    //         }
    //     } else if(month==2){
    //         if(leap == 1){
    //             if(day>=1 && day<=29) {
    //                 flag=0;
    //             } else {
    //                 flag=1;
    //             }
    //         } else if (leap == 0){
    //             if(day>=1 && day<=28) {
    //                 flag=0;
    //             } else {
    //                 flag=1;
    //             }
    //         }
    //     }
    // } else {
    //     flag = 1;
    // }

    if(flag == 0){
        printf("\nvalid Date\n");
    } else if(flag == 1) {
        printf("\ninvalid date\n");
    }

    return 0;
}