#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
int oxo()
{
    int c,p=0,t=0,i,j,chance=10;
    char a[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '},z[9]={' ',' ',' ',' ',' ',' ',' ',' ',' '},b='1';
    for(i=0;i<=9;i++){
    chance=10;
    while(chance>8 || chance<0){
    for(j=0;j<9;j++){
            if(j==t){if(b=='1'){z[j]=b;}else if(b=='2'){z[j]=b;}}
            else{z[j]=' ';}

    }
    system("cls");
    printf("   |   |   \t   |   |   \n");
    printf(" %c | %c | %c \t %c | %c | %c \n",a[0],a[1],a[2],z[0],z[1],z[2]);
    printf("___|___|___\t___|___|___\n");
    printf("   |   |   \t   |   |   \n");
    printf(" %c | %c | %c \t %c | %c | %c \n",a[3],a[4],a[5],z[3],z[4],z[5]);
    printf("___|___|___\t___|___|___\n");
    printf("   |   |   \t   |   |   \n");
    printf(" %c | %c | %c \t %c | %c | %c \n",a[6],a[7],a[8],z[6],z[7],z[8]);
    printf("   |   |   \t   |   |   \n");
    printf("---------------------------\n");
    if((a[0]==a[1] && a[0]==a[2] && a[0]=='X')||(a[3]==a[4] && a[3]==a[5] && a[3]=='X')||(a[6]==a[7] && a[6]==a[8] && a[6]=='X')||(a[0]==a[3] && a[0]==a[6] && a[0]=='X')||(a[1]==a[4] && a[1]==a[7] && a[1]=='X')||(a[2]==a[5] && a[2]==a[8] && a[2]=='X')||(a[0]==a[4] && a[0]==a[8] && a[0]=='X')||(a[2]==a[4] && a[2]==a[6] && a[2]=='X')){printf("Player 1 WON!!!");return 0;}
    else if((a[0]==a[1] && a[0]==a[2] && a[0]=='O')||(a[3]==a[4] && a[3]==a[5] && a[3]=='O')||(a[6]==a[7] && a[6]==a[8] && a[6]=='O')||(a[0]==a[3] && a[0]==a[6] && a[0]=='O')||(a[1]==a[4] && a[1]==a[7] && a[1]=='O')||(a[2]==a[5] && a[2]==a[8] && a[2]=='O')||(a[0]==a[4] && a[0]==a[8] && a[0]=='O')||(a[2]==a[4] && a[2]==a[6] && a[2]=='O')){printf("Player 2 WON!!!");return 0;}
    else{
    if(p%2==0){printf("Player 1\n");}
    else{printf("Player 2\n");}
    }
    if(i==9){printf("DRAW!!!");return 0;}
    c=getch();
    if(c==32)
    {
        if(a[t]!=' '){continue;}
        chance=t;
        if(p==0){a[t]='X';p=1;b='2';}
        else{a[t]='O';p=0;b='1';}
        break;
    }
    c=getch();
    if(c==72)
    {
        if(t==0){t=6;}
        else if(t==1){t=7;}
        else if(t==2){t=8;}
        else{t=t-3;}
    }
    else if(c==80)
    {
        if(t==6){t=0;}
        else if(t==7){t=1;}
        else if(t==8){t=2;}
        else{t=t+3;}
    }
    else if(c==77)
    {
        if(t==2){t=0;}
        else if(t==5){t=3;}
        else if(t==8){t=6;}
        else{t=t+1;}
    }
    else if(c==75)
    {
        if(t==0){t=2;}
        else if(t==3){t=5;}
        else if(t==6){t=8;}
        else{t=t-1;}
    }
  }
}
}

int main(int a,int s)
{
    //up-72, down-80, right-77, left-75, space-32
    if(s>0){a=0;s=0;}
    int q;
    char c[10];
    printf("Tic Tac Toe\n");
    for(int i=0;i<4;i++)
    {
        if(i==a){printf("->");}
        switch(i)
        {
            case 0:
                printf("Start\n");break;
            case 1:
                printf("Credits\n");break;
            case 2:
                printf("Controls\n");break;
            case 3:
                printf("Exit\n");break;
        }

    }
    q=getch();
    q=getch();
    system("cls");
    if(q==72)
    {
        if(a==0){a=3;}
        else{a=a-1;}
    }
    else if(q==80)
    {
        if(a==3){a=0;}
        else{a=a+1;}
    }
    else if(q==77)
    {
        system("cls");
        switch(a)
        {
            case 0:
                oxo();getch();system("cls");return main(a,s);
            case 1:
                printf("Programmer - Prakhar, 1CME, 2140108");break;
            case 2:
                printf("Arrow Keys - Player Navigation\nSpace - Finalizing the Player Position");break;
            case 3:
                return 0;
        }
        while(q!=75)
        {
            q=getch();
            if(q==32){q=0;continue;}
            q=getch();
        }
        system("cls");
    }
    main(a,s);
}
