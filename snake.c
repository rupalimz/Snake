#include<stdio.h>
#include<stdlib.h>
#include<conio.h>
int hight=20,width=20,x,y,fruitx,fruity,flag,gameend,score;
void makelogic()
{
    switch(flag)

    {
    case 1:
    {
        x--;
        break;

    }
    case 2:
    {
        x++;
        break;

    }
    case 3:
    {
        y--;
        break;
    }
    case 4:
    {
        y++;
        break;
    }
  }

   if(x==0 || x==hight || y==0 || y==width)
    {
        gameend=1;
    }


}

   
    
    void input()
{
    if(kbhit())
    {
        switch(getch())
        {
             case 'w':
             {
                flag=1;
                break;
             }
             case 's':
             {
                flag=2;
                break;
             }
             case 'a':
             {
                flag=3;
                break;
             }
             case 'd':
             {
                flag=4;
                break;
             }
            
             
        }
    
    }
}
void setup(){
    x=hight/2;
    y=width/2;
    label1:
    fruitx=rand()%20;
    if(fruitx == 0)
    goto label1;

label2:
    fruity=rand()%20;
    if(fruity == 0)
    goto label2;
    gameend=0;
    score=0;
}

void draw()
{
    system("cls");//altarnative of clrscr();
    int i,j;
    for(i=0;i<=hight;i++)
    {
        for(j=0;j<=width;j++)
      {
        if(i==0 ||i==hight || j==0 || j==width)
        {
            printf("*");
        }
        else
        {
            if(i==x && j==y)
            {
                printf("0");
            }
            else if(i==fruitx && j==fruity)
            {
            printf("0");
            }
            else
            {
                printf(" ");
            }
        }
            printf("\n");
      }
    }

}


int main()
{
    setup();
    while(gameend!=1)
    {
        input();
        draw();
        makelogic();
    }
}