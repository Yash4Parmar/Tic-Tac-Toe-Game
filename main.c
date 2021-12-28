//Yash Parmar
//tic tac toe game
#include <stdio.h>
char box[10] = {'0','1','2','3','4','5','6','7','8','9'};
int c,plyr; // c for choice and plyr for player

int checkforwin();
void display();
void mark_board(char mark);


int main()
{
    int gamestatus;
    char mark;
    plyr = 1;

    do{
        // for change the status
        display();
        plyr = (plyr % 2) ? 1 : 2;

        // for take input
        printf("Player %d , Enter the place::",plyr);
        scanf("%d",&c);

        // set correct char X or O
        mark = (plyr == 1)? 'X' : 'O';

        // set user choice
        mark_board(mark);
        gamestatus = checkforwin();
        plyr++;
    }while(gamestatus == -1);

    if(gamestatus == 1){
        printf("==>***Player %d WIN!!*** \n\n",--plyr);
    }
    else{
        printf("==> ***GAME DRAW!!***\n\n");
    }

    return 0;
}

/*
retuen 1 for game over with result
retuen -1 for game in progress
return 0 for game over without result
*/
int checkforwin(){
    int returnvalue;
    if(box[1] == box[2] && box[2] == box[3]){
        returnvalue = 1;
    }
    else if(box[4] == box[5] && box[5] == box[6]){
        returnvalue = 1;
    }
    else if(box[7] == box[8] && box[8] == box[9]){
        returnvalue = 1;
    }
    else if(box[1] == box[4] && box[4] == box[7]){
        returnvalue = 1;
    }
    else if(box[2] == box[5] && box[5] == box[8]){
        returnvalue = 1;
    }
    else if(box[3] == box[6] && box[6] == box[9]){
        returnvalue = 1;
    }
     else if(box[1] == box[5] && box[5] == box[9]){
        returnvalue = 1;
    }
     else if(box[3] == box[5] && box[5] == box[7]){
        returnvalue = 1;
    }
    else if (box[1] != '1'&& box[2] != '2'&& box[3] != '3'&& box[4] != '4'&& box[5] != '5'&& box[6] != '6'&& box[7] != '7'&& box[8] != '8'&& box[9] != '9')
    {
        returnvalue = 0;
    }
    else {
        returnvalue = -1;
    }
    return returnvalue;

}
void display(){

    system("cls");
    printf("\t !! tic tac toe game !!\n");
    printf("Player1(X) Player2(O)\n\n\n");

    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c \n",box[1],box[2],box[3]);
    //printf("   |   |   \n");
    printf("\t_____|_____|_____\n");

    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n",box[4],box[5],box[6]);
    //printf("   |   |   \n");
    printf("\t_____|_____|_____\n");

    printf("\t     |     |     \n");
    printf("\t  %c  |  %c  |  %c  \n",box[7],box[8],box[9]);
    printf("\t     |     |     \n");
}
/*
set board with correct choice X and O
*/
void mark_board(char mark){
    if(c==1 && box[1] == '1'){
        box[1] = mark;
    }
    else if(c==2 && box[2] == '2'){
        box[2] = mark;
    }
    else if(c==3 && box[3] == '3'){
        box[3] = mark;
    }
    else if(c==4 && box[4] == '4'){
        box[4] = mark;
    }
    else if(c==5 && box[5] == '5'){
        box[5] = mark;
    }
    else if(c==6 && box[6] == '6'){
        box[6] = mark;
    }
    else if(c==7 && box[7] == '7'){
        box[7] = mark;
    }
    else if(c==8 && box[8] == '8'){
        box[8] = mark;
    }
    else if(c==9 && box[9] == '9'){
        box[9] = mark;
    }
    else{
        printf("Invalid choice!!");
        plyr --;
    }
}
