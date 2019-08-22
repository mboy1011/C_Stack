/*------------------*/
/* Author: mboy1011 */
/*------------------*/

#include <stdio.h>
#include <stdlib.h> // Required for system()
#define max 10 // Maximum Size for Data

/* Data Array */
int data[max];
/* Getting the length of an array */
int len = sizeof(data)/sizeof(int); // sizeof(data) is equal to 40 and sizeof(int) equal to 4 where ints or integers equivalent to 4 bytes
int top=-1; // 
void push();
void pop();
void show();
/* Main Function */
void main(){
    char lp; // Loop Variable
    do
    {
        int ch;
        system("cls"); //Windows Terminal Clear
        system("clear"); //Linux Terminal Clear
        printf("*------| Stack |--------*\n");
        printf("|    1  Push Data       |\n");
        printf("|    2  Pop Data        |\n");
        printf("|    3  Show            |\n");
        printf("*-----------------------*\n");
        printf("Enter: ");
        scanf("%d",&ch); // Get Input Data 
        switch (ch)
        {
            case 1:
                // printf("Push Data");
                push();
                break;
            case 2:
                // printf("Pop Data");
                pop();
                break;
            case 3:
                // printf("Show Data");
                show();
                break;
            default:
                printf("Invalid Choice!");
                break;
        }
    printf("Do you want to try again? [y/n] ");
    scanf(" %c",&lp);
    } while (lp=='Y'||lp=='y');
}
void push(){
    // printf("This is pop function!");
    int dat;
    if(top==max-1){
        printf("\nData is full!\n");
    }else{
        printf("Data: ");
        scanf("%d",&dat);
        top+=1; // Increase the value of top
        data[top]=dat; // Set a value to data 
        printf("Pushed: %d",dat);
    }
}
void pop(){
    if(top==-1){ // Check if empty!
        printf("\nData is empty!\n");
    }else{
        printf("Popped: %d\n",data[top]); // Remove Data by calling.
        top -= 1; // Reduce the value of top
    }
}
void show(){
    // printf("This is show function!");
    if(top==-1){
        printf("\nData is empty!\n");
    }else{
        for (int i = top; i >= 0; i--) // From bottom to top 0 upto top value
            printf("|%d|\n",data[i]);
            printf("*-*\n");
    }
}