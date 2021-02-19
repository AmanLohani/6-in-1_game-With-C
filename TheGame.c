#include<stdio.h>
#include<strings.h>
#include<conio.h>
#include<time.h>
#include<stdlib.h>
#include<windows.h>
int battleship();
int agecalc();
void kbc();
int cricket();
int minesweeper();
int pandora();



void delay(clock_t a)
{
    clock_t start;
    start  = clock();
    while(clock()-start<a)
    {

    }
}



void main()
{   int altech;
	printf("\n\n\n\n\t\t\t\tMENU");
	printf("\n\n\t\t1)BATTLESHIP\n\n\t\t2)AGE CALCULATOR\n\n\t\t3)KBC\n\n\t\t4)CRICKET");
	printf("\n\n\t\t5)MINESWEEPER\n\n\t\t6)PANDORA");
	printf("\n\n\tEnter Your Choice");
	scanf("%d",&altech);
	switch(altech)
	{
		case 1 :
			battleship();
			break;
		case 2:
		    agecalc();
			break;
		case 3 :
		    kbc();
			break;
		case 4 :
		    cricket();
			break;
		case 5 :
		    minesweeper();
			break;
		case 6 :
		    pandora();
			break;
		default :
		printf("\n\n\t\t\t PLEASE CHOOSE APPROPRIATE OPTION");
	}
}



int battleship()
{   system("cls");
    //A:Aircraft carrier
    //B:Battleship
    //D:destroyer
    //C:corvette
    int i,j,k=0,x,y,chk=0,win=0,uposa[5][2],uposb[4][2],uposd[3][2],uposc[2][2],a=0,b=0,c=0,d=0,probab,diff;
    char gridu[10][10],griduv[10][10],gridc[10][10],gridcv[10][10],orin[2],tempstr[10],str[20]="Battleships",str1[40]="The naval warfare",ch;
   for(i=0;i<10;i++)
    {
        printf("\n");
    }
    for(i=0;i<30;i++)
    {
        printf(" ");
    }
    for(i=0;str[i]!='\0';i++)
    {
        printf("%c",str[i]);
        delay(60);
    }
    printf("\n");
    for(i=0;i<30;i++)
    {
        printf(" ");
    }
    for(i=0;str1[i]!='\0';i++)
    {
        printf("%c",str1[i]);
        delay(60);
    }
    delay(1500);
    system("cls");
    for(;;)
    {
        system("cls");
        for(i=0;i<10;i++)
            printf("\n");
        for(i=0;i<30;i++)
            printf(" ");
        printf("1.Play Battleships\n");
        for(i=0;i<30;i++)
            printf(" ");
        printf("2.Rules\n");
        ch=getch();
        if(ch==49)
            break;
        if(ch==50)
        {
            system("cls");
            printf("Get ready, for a war has been declared. Its time for some naval warfare.\n");
            printf("1.You have to defeat your opponent by destroying all his war ships before he destroys yours.\n");
            printf("2.They battlefield is a 10x10 grid where you place your ships\n");
            printf("3.You can place your ships by entering its orientation, i.e horizontal or vertical. For horizontal orientation, type 'h' in the orientation option and type 'v' for vertical\n");
            printf("4.And its x y coordinates(both separated by a space) where x is the row number and y is the column number\n");
            printf("4.You have a fleet of 4 battle ships: aircraft carrier(5 units long), battleship(4 units long), destroyer(3 units long) and corvette(2 units long)\n");
            printf("5.After placing your ships, you can attack the enemy area. To attack a specific area, enter its x y coordinate(separated by a space)\n");
            printf("6.If your attack hits the enemy ship, it will be denoted by an 'H'. And you get an extra turn\n");
            printf("7.If your attack misses, it will be denoted by a '*' and your turn ends\n");
            printf("press enter to continue.........");
            fflush(stdin);
            gets(tempstr);
            continue;
        }
    }
    system("cls");
    for(i=0;i<10;i++)
        printf("\n");
    for(i=0;i<30;i++)
    printf(" ");
    printf("Select the difficulty level:\n");
    for(i=0;i<30;i++)
    printf(" ");
    printf("1.easy\n");
    for(i=0;i<30;i++)
    printf(" ");
    printf("2.medium\n");
    for(i=0;i<30;i++)
    printf(" ");
    printf("3.hard\n");
    ch=getch();
    if(ch==49)
        diff=9;
    if(ch==50)
        diff=8;
    if(ch==51)
        diff=6;
    system("cls");
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
        {
            gridc[i][j]='.';
            gridu[i][j]='.';
            gridcv[i][j]='.';
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",gridu[i][j]);
        printf("\n");
    }
   /*Aircraft carrier*/
    for(;;)
    {
        printf("Aircraft Carrier:\n");
        printf("Orientation: ");
        scanf("%s",&orin);
        printf("x and y coordinates: ");
        scanf("%d %d",&x,&y);
        if(strcmp(orin,"h")==0)
        {
            if(y>5 || y<0 || x>9 || x<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
            else
            {
                for(i=y;i<y+5;i++)
                {
                    gridu[x][i]='A';
                    uposa[k][0]=x;
                    uposa[k][1]=i;
                    k++;
                }
                break;
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>5 || x<0 || y>9 || y<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
             else
            {
                for(i=x;i<x+5;i++)
                {
                    gridu[i][y]='A';
                    uposa[k][0]=i;
                    uposa[k][1]=y;
                    k++;
                }
                break;
            }
        }
    }
    k=0;
    system("cls");
    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",gridu[i][j]);
        printf("\n");
    }
    /*B:Battleship*/
    for(;;)
    {
        chk=0;
        printf("Battleship:\n");
        printf("Orientation: ");
        scanf("%s",&orin);
        printf("x and y coordinates: ");
        scanf("%d %d",&x,&y);
        if(strcmp(orin,"h")==0)
        {
            if(y>6 || y<0 || x>9 || x<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
            else
            {

                for(i=y;i<y+4;i++)
                {
                    if(gridu[x][i]!='.')
                    {
                        printf("Can't place the ship. try again\n");
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+4;i++)
                    {
                        gridu[x][i]='B';
                        uposb[k][0]=x;
                        uposb[k][1]=i;
                        k++;
                    }
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>6 || x<0 || y>9 || y<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
             else
            {
                 for(i=x;i<x+4;i++)
                {
                    if(gridu[i][y]!='.')
                    {
                        printf("Can't place the ship. try again\n");
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                   for(i=x;i<x+4;i++)
                    {
                        gridu[i][y]='B';
                        uposb[k][0]=i;
                        uposb[k][1]=y;
                        k++;
                    }
                    break;
                }
            }
        }
    }
    k=0;
    system("cls");
    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",gridu[i][j]);
        printf("\n");
    }
    /*Destroyer*/
    for(;;)
    {
        chk=0;
        printf("Destroyer:\n");
        printf("Orientation: ");
        scanf("%s",&orin);
        printf("x and y coordinates: ");
        scanf("%d %d",&x,&y);
        if(strcmp(orin,"h")==0)
        {
            if(y>7 || y<0 || x>9 || x<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
            else
            {
                for(i=y;i<y+3;i++)
                {
                    if(gridu[x][i]!='.')
                    {
                        printf("Can't place the ship. try again\n");
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+3;i++)
                    {
                        gridu[x][i]='D';
                        uposd[k][0]=x;
                        uposd[k][1]=i;
                        k++;
                    }
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>7 || x<0 || y>9 || y<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
             else
            {
                 for(i=x;i<x+3;i++)
                {
                    if(gridu[i][y]!='.')
                    {
                        printf("Can't place the ship. try again\n");
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=x;i<x+3;i++)
                    {
                        gridu[i][y]='D';
                        uposd[k][0]=i;
                        uposd[k][1]=y;
                        k++;
                    }
                    break;
                }
            }
        }
    }
    k=0;
    system("cls");
    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",gridu[i][j]);
        printf("\n");
    }
    /*Corvette*/
    for(;;)
    {
        chk=0;
        printf("Corvette:\n");
        printf("Orientation: ");
        scanf("%s",&orin);
        printf("x and y coordinates: ");
        scanf("%d %d",&x,&y);
        if(strcmp(orin,"h")==0)
        {
            if(y>8 || y<0 || x>9 || x<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
            else
            {
                for(i=y;i<y+2;i++)
                {
                    if(gridu[x][i]!='.')
                    {
                        printf("Can't place the ship. try again\n");
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+2;i++)
                    {
                        gridu[x][i]='C';
                        uposc[k][0]=x;
                        uposc[k][1]=i;
                        k++;
                    }
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>8 || x<0 || y>9 || y<0)
            {
                printf("Can't place the ship. try again\n");
                continue;
            }
             else
            {
                 for(i=x;i<x+2;i++)
                {
                    if(gridu[i][y]!='.')
                    {
                        printf("Can't place the ship. try again\n");
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=x;i<x+2;i++)
                    {
                        gridu[i][y]='C';
                        uposc[k][0]=i;
                        uposc[k][1]=y;
                        k++;
                    }
                    break;
                }
            }
        }
    }
    system("cls");
    for(i=0;i<10;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        if(i==0)
        {
            printf("  ");
            for(j=0;j<10;j++)
            printf("%d ",j);
            printf("\n");
            for(j=0;j<30;j++)
            printf(" ");
        }
        printf("%d ",i);
        for(j=0;j<10;j++)
            printf("%c ",gridu[i][j]);
        printf("\n");
    }
    printf("Press enter to continue......");
    fflush(stdin);
    gets(tempstr);
    srand(time(NULL));
    /*Aircraft carrier cpu*/
    for(;;)
    {
        if(rand()%2 == 1)
            strcpy(orin,"h");
        else strcpy(orin,"v");
        x=rand()%10;
        y=rand()%10;
        if(strcmp(orin,"h")==0)
        {
            if(y>5 || y<0 || x>9 || x<0)
            {
                continue;
            }
            else
            {
                for(i=y;i<y+5;i++)
                    gridc[x][i]='A';
                break;
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>5 || x<0 || y>9 || y<0)
            {
                continue;
            }
             else
            {
                for(i=x;i<x+5;i++)
                    gridc[i][y]='A';
                break;
            }
        }
    }
    /*B:Battleship cpu*/
    for(;;)
    {
        chk=0;
        if(rand()%2 == 1)
            strcpy(orin,"h");
        else strcpy(orin,"v");
        x=rand()%10;
        y=rand()%10;
        if(strcmp(orin,"h")==0)
        {
            if(y>6 || y<0 || x>9 || x<0)
                continue;
            else
            {
                for(i=y;i<y+4;i++)
                {
                    if(gridc[x][i]!='.')
                    {
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+4;i++)
                        gridc[x][i]='B';
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>6 || x<0 || y>9 || y<0)
            {
                continue;
            }
             else
            {
                 for(i=x;i<x+4;i++)
                {
                    if(gridc[i][y]!='.')
                    {
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=x;i<x+4;i++)
                        gridc[i][y]='B';
                    break;
                }
            }
        }
    }
    /*Destroyer cpu*/
    for(;;)
    {
        chk=0;
        if(rand()%2 == 1)
            strcpy(orin,"h");
        else strcpy(orin,"v");
        x=rand()%10;
        y=rand()%10;
        if(strcmp(orin,"h")==0)
        {
            if(y>7 || y<0 || x>9 || x<0)
            {
               continue;
            }
            else
            {
                for(i=y;i<y+3;i++)
                {
                    if(gridc[x][i]!='.')
                    {
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+3;i++)
                        gridc[x][i]='D';
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>7 || x<0 || y>9 || y<0)
            {
                continue;
            }
             else
            {
                 for(i=x;i<x+3;i++)
                {
                    if(gridc[i][y]!='.')
                    {
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=x;i<x+3;i++)
                        gridc[i][y]='D';
                    break;
                }
            }
        }
    }
    /*Corvette cpu*/
    for(;;)
    {
        chk=0;
        if(rand()%2 == 1)
            strcpy(orin,"h");
        else strcpy(orin,"v");
        x=rand()%10;
        y=rand()%10;
        if(strcmp(orin,"h")==0)
        {
            if(y>8 || y<0 || x>9 || x<0)
            {
                continue;
            }
            else
            {
                for(i=y;i<y+2;i++)
                {
                    if(gridc[x][i]!='.')
                    {
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=y;i<y+2;i++)
                        gridc[x][i]='C';
                    break;
                }
            }
        }
        if(strcmp(orin,"v")==0)
        {
            if(x>8 || x<0 || y>9 || y<0)
            {
                continue;
            }
             else
            {
                 for(i=x;i<x+2;i++)
                {
                    if(gridc[i][y]!='.')
                    {
                        chk=1;
                        break;
                    }
                }
                if(chk==1)
                    continue;
                else
                {
                    for(i=x;i<x+2;i++)
                        gridc[i][y]='C';
                    break;
                }
            }
        }
    }
    for(i=0;i<10;i++)
    {
        for(j=0;j<10;j++)
            griduv[i][j]=gridu[i][j];
    }
    for(;;)
    {
        system("cls");
        for(i=0;i<10;i++)
        {
            for(j=0;j<30;j++)
            printf(" ");
            if(i==0)
            {
                printf("  ");
                for(j=0;j<10;j++)
                printf("%d ",j);
                printf("\n");
                for(j=0;j<30;j++)
                printf(" ");
            }
            printf("%d ",i);
            for(j=0;j<10;j++)
                printf("%c ",gridcv[i][j]);
            printf("\n");
        }
        printf("\n");
        for(i=0;i<10;i++)
        {
            for(j=0;j<30;j++)
            printf(" ");
            if(i==0)
            {
                printf("  ");
                for(j=0;j<10;j++)
                printf("%d ",j);
                printf("\n");
                for(j=0;j<30;j++)
                printf(" ");
            }
            printf("%d ",i);
            for(j=0;j<10;j++)
                printf("%c ",griduv[i][j]);
            printf("\n");
        }
        for(;;)
        {
            printf("Enter x and y: ");
            scanf("%d %d", &x,&y);
            if(x>9 || x<0 || y>9 || y<0 || gridcv[x][y]=='H' || gridcv[x][y]=='*')
            {
                printf("Invalid input. Try again\n");
                continue;
            }
            else
            {
                if(gridc[x][y]=='A' || gridc[x][y]=='B'||gridc[x][y]=='C'||gridc[x][y]=='D')
                {
                    if(gridcv[x][y]!='H')
                    {
                        gridcv[x][y]='H';
                        system("cls");
                        for(i=0;i<10;i++)
                        {
                            for(j=0;j<30;j++)
                            printf(" ");
                            if(i==0)
                            {
                                printf("  ");
                                for(j=0;j<10;j++)
                                    printf("%d ",j);
                                printf("\n");
                                for(j=0;j<30;j++)
                                printf(" ");
                            }
                            printf("%d ",i);
                            for(j=0;j<10;j++)
                                printf("%c ",gridcv[i][j]);
                            printf("\n");
                        }
                        printf("\n");
                        for(i=0;i<10;i++)
                        {
                            for(j=0;j<30;j++)
                            printf(" ");
                            if(i==0)
                            {
                                printf("  ");
                                for(j=0;j<10;j++)
                                    printf("%d ",j);
                                printf("\n");
                                for(j=0;j<30;j++)
                                printf(" ");
                            }
                            printf("%d ",i);
                            for(j=0;j<10;j++)
                                printf("%c ",griduv[i][j]);
                            printf("\n");
                        }
                        for(i=0;i<10;i++)
                        {
                            for(j=0;j<10;j++)
                            {
                                if(gridcv[i][j]=='H')
                                    win++;
                            }
                        }
                        if(win==14)
                        {
                            printf("\nYou win!\n");
                            break;
                        }
                        win=0;
                        continue;
                    }
                    else
                    {
                        printf("Invalid Input. Try again\n");
                        continue;
                    }
                }
                else
                {
                    gridcv[x][y]='*';
                    break;
                }
            }
        }
        for(;;)
        {
            probab=rand()%diff;
            if(probab==diff-3&& a<5)
            {
                x=uposa[a][0];
                y=uposa[a][1];
                a++;
            }
            else if(probab==diff-2 && b<4)
            {
                x=uposb[b][0];
                y=uposb[b][1];
                b++;
            }
            else if(probab==diff-5 && d<3)
            {
                x=uposd[d][0];
                y=uposd[d][1];
                d++;
            }
            else if(probab==diff-6 && c<2)
            {
                x=uposc[c][0];
                y=uposc[c][1];
                c++;
            }
            else
            {
                x=rand()%10;
                y=rand()%10;
            }
            if(x>9 || x<0 || y>9 || y<0 || griduv[x][y]=='H' || griduv[x][y]=='*')
            {
                continue;
            }
            else
            {
                if(gridu[x][y]=='A' || gridu[x][y]=='B'||gridu[x][y]=='C'||gridu[x][y]=='D')
                {
                    if(griduv[x][y]!='H')
                    {
                        griduv[x][y]='H';
                        system("cls");
                        for(i=0;i<10;i++)
                        {
                            for(j=0;j<30;j++)
                            printf(" ");
                            if(i==0)
                            {
                                printf("  ");
                                for(j=0;j<10;j++)
                                    printf("%d ",j);
                                printf("\n");
                                for(j=0;j<30;j++)
                                printf(" ");
                            }
                            printf("%d ",i);
                            for(j=0;j<10;j++)
                                printf("%c ",gridcv[i][j]);
                            printf("\n");
                        }
                        printf("\n");
                        for(i=0;i<10;i++)
                        {
                            for(j=0;j<30;j++)
                            printf(" ");
                            if(i==0)
                            {
                                printf("  ");
                                for(j=0;j<10;j++)
                                    printf("%d ",j);
                                printf("\n");
                                for(j=0;j<30;j++)
                                printf(" ");
                            }
                            printf("%d ",i);
                            for(j=0;j<10;j++)
                                printf("%c ",griduv[i][j]);
                            printf("\n");
                        }
                        delay(1000);
                        continue;
                    }
                    else
                    {
                        continue;
                    }
                }
                else
                {
                    griduv[x][y]='*';
                    break;
                }
            }

        }
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(gridcv[i][j]=='H')
                    win++;
            }
        }
        if(win==14)
        {
            printf("\nYou win!\n");
            break;
        }
        win=0;
        for(i=0;i<10;i++)
        {
            for(j=0;j<10;j++)
            {
                if(griduv[i][j]=='H')
                    win++;
            }
        }
        if(win==14)
        {
            printf("\nYou lose!\n");
            break;
        }
        win=0;
    }
    return 0;
}



int agecalc()
{   system("cls");
	int current_date, birth_date, calculated_date, current_month, birth_month, calculated_month, current_year, birth_year, calculated_year;
      printf("\nEnter Current Date Details (In Numerical Figures)\n");
      printf("Enter Today's Date:\t");
      scanf("%d", &current_date);
      printf("Enter Current Month:\t");
      scanf("%d", &current_month);
      printf("Enter Current Year:\t");
      scanf("%d", &current_year);
      printf("\nEnter Your Birth Details (In Numerical Figures)\n");
      printf("Enter Day:\t");
      scanf("%d", &birth_date);
      printf("Enter Month:\t");
      scanf("%d", &birth_month);
      printf("Enter Year:\t");
      scanf("%d", &birth_year);
       if(birth_date > current_date)
      {
            current_month = current_month - 1;
            current_date = current_date + 30;
      }
      if(birth_month > current_month)
      {
            current_year = current_year - 1;
            current_month = current_month + 12;
      }
      if(birth_year > current_year)
      {
            exit(0);
      }
      calculated_date = current_date - birth_date;
      calculated_month = current_month - birth_month;
      calculated_year = current_year - birth_year;
      printf("\nPresent Age\nYears: %d\tMonths: %d\tDays: %d\n",calculated_year, calculated_month, calculated_date);

      return 0;
}



void kbc()
{
	system("cls");
char name[100];
char ch;
int ans,cnt=0;
system("cls");
printf("Please enter your name: ");
gets(name);
printf("\n\n\t\t\t\t\t\t\tWelcome to KBC mr/ms:");
puts(name);
printf("\n\t\t\tRULES for KBC");
printf("\n\t\t\t\t\t1.The game consists of 10 questions");
printf("\n\t\t\t\t\t2.Every question consists of 4 options there will be only one correct answer.");
printf("\n\t\t\t\t\t3.For every correct answer you will be getting 10000 rs of money");
printf("\n\t\t\t\t\t4.You will be exit out of game for wrong answer.");
printf("\n\t\t\t\t\t5.You can use 50-50 option only one time.");
printf("\n\t\t\t\t\t6.50-50 option is avilable only after 8th question");
printf("\n\t\t\t\t\tIf you are intrested to play game press enter to ENTER into game");
ch=getch();
printf("\n\n\n\t\tHere we go...");
printf("\n\t\tThe game starts now....Best of luck ");
puts(name);
printf("\n\t\t\t\t\tYour first question:");
printf("\n\t\t\t\t\t1)Who won most number of ICC world cup");
printf("\n\t\t\t\t\t1.Australia                2.India");
printf("\n\t\t\t\t\t3.West indies              4.South africa");
printf("\n\t\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("\n\t\t\t\t\tCongrats u won 10000 rs");
}
else
{
printf("\n\t\t\t\t\tSorry, better luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t2)Total number of countries according to UN");
printf("\n\t\t\t\t\t1.193        		        2.211");
printf("\n\t\t\t\t\t3.195       		        4.202");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==3)
{printf("\n\t\tCongrats u won 20000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t3)Where is worlds biggest military ");
printf("\n\t\t\t\t\t1.Russia              		2.India");
printf("\n\t\t\t\t\t3.U.S.A        		        4.China");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\t\tCongrats u won 30000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t4)World's fastest car>?");
printf("\n\t\t\t\t\t1.Bugatti chiron            2.Hennessey Venom");
printf("\n\t\t\t\t\t3.SSC Tuatara          		4.Koenigsegg Agera");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("\n\t\tCongrats u won 40000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t5)What percentage of haemoglobin in red blood cells is found?");
printf("\n\t\t\t\t\t1.60%               		2.34%");
printf("\n\t\t\t\t\t3.20%               		4.42%");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("\n\t\tCongrats u won 50000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t6)Most successful IPL franchise?");
printf("\n\t\t\t\t\t1.Mumbai Indians             2.Chennai Super Kings");
printf("\n\t\t\t\t\t3.Rajasthan Royal            4.Deccan Chargers");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==1)
{
printf("\n\t\tCongrats u won 60000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t7)Most successful pro kabbadi franchise? ");
printf("\n\t\t\t\t\t1.Puneri Paltan             2.Haryana Steelers");
printf("\n\t\t\t\t\t3.Patna Pirates             4.U Mumba");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("\n\t\tCongrats u won 70000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\tEour next question");
printf("\n\t\t\t\t\t12.5 percent of 80 is equal to?");
printf("\n\t\t\t\t\t1.8                   		2.20");
printf("\n\t\t\t\t\t3.10                  		4.40");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==3)
{
printf("\n\t\tCongrats u won 80000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
printf("\n\t\t\t\t***Note:you can use your 50-50 option from here***");
printf("\n\t\tYour next question");
printf("\n\t\t\t\t\t9)Worlds biggest aircraft carrier in the world?");
printf("\n\t\t\t\t\t1.Charles de Gaulle             2.Nimitz");
printf("\n\t\t\t\t\t3.Vikramaditya                  4.Liaoning");
printf("\n\t\t\t\tDo you want to use fifty");
printf("\n\t\t\t\t\tPress 'y' for yes:");
printf("\n\t\t\t\t\tPress 'n' for no:");
printf("\n\t\tEnter your choice: ");
ch=getch();
if(ch=='y')
{
printf("\n\t\t\t\t\t1.                      		2.Nimitz");
printf("\n\t\t\t\t\t3.Vikramaditya                 	4.        ");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("\n\t\tCongrats u won 90000 rs");
cnt++;
}
else
{
printf("\n\t\tBetter luck next time");
}
}
else if(ch=='n')
{
printf("\n\t\t\tGood.. you can use your 50-50 chance next time");
printf("\n\t\t\t\t\t1.Charles de Gaulle             2.Nimitz");
printf("\n\t\t\t\t\t3.Vikramaditya                  4.Liaoning");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==2)
{
printf("\n\t\tCongrats u won 90000 rs");
}
else
{
printf("\n\t\tBetter luck next time");
exit(0);
}
}
if(cnt==0)
{
printf("\n\t\t\t\t*Your are still having 50-50 chance*");
}
else
{
printf("\n\t\t\t\t*Remember that you are not having 50-50 chcance*");
}
printf("\n\t\tHere is your last and final question");
printf("\n\t\t\t\t\t10)Total number of national parties in India?");
printf("\n\t\t\t\t\t1.10                     		2.5");
printf("\n\t\t\t\t\t3.24                      		4.8");
if (cnt==1)
{
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\t\tCongrats u won ONE LAKH RUPEES");
}
else
{
printf("\n\t\tSo sorry..., better luck next time");
exit(0);
}
}
if(cnt==0)
{
     printf("\n\t\t\t\tDo you want to use fifty");
     printf("\n\t\t\t\tPress 'y' for yes:");
     printf("\n\t\t\t\tPress 'n' for no:");
     printf("\n\t\tEnter your choice: ");
     ch=getch();
     if(ch=='y')
       {
printf("\n\t\t\t\t\t1.10                       		2.");
printf("\n\t\t\t\t\t3.                         		4.8");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\n\t\tCongrats u won ONE LAKH RUPEES");
}
else
{
printf("\n\t\tSo sorry....., better luck next time");
exit(0);
}
}
else if(ch=='n')
{
printf("\n\t\tGood.. you are the only first person answering with out using 50-50 chance");
printf("\n\t\t\t\t\t1.10                       		2.5");
printf("\n\t\t\t\t\t3.24                       		4.8");
printf("\n\t\tEnter your answer:");
scanf("%d",&ans);
if(ans==4)
{
printf("\n\t\tCongrats u won ONE LAKH RUPEES");
}
else
{
printf("\n\t\tSo sorry ... better luck next time");
}
}
}
getch();
}




int cricket()
{
	system("cls");
    int user,cpu,wicket=0,scoreu=0,scorec=0,ball=1;
    printf("Welcome to C cricket!\n\n");
    printf("Rules:\nYou are batting and chasing the given target. you can score runs by entering either 0,1,2,3,4,5,6. if your entered value matches with the value of cpu, then you are out! Else you score that many runs. You have 10 wickets in hand and the match will be of 5 overs only.\n\n\n");

    srand(time(NULL));
    scorec=rand()%60 + 40;
    printf("Target: %d\n", scorec);
    for(;;)
    {
        printf("ball %d\n", ball);
        printf("Your turn: ");
        scanf("%d", &user);
        if(user>6 || user<0)
        {
            printf("invalid input. Try again\n");
            continue;
        }
        srand(time(NULL));
        cpu=rand()%6;
        if(user==6 || user==5)
        {
            cpu=rand()%2 + 5;
        }
        if(user==4 || user==3)
        {
            cpu=rand()%3 + 3;
        }
        if(user==2)
        {
            cpu=rand()%4;
        }
        if(user==cpu)
        {
            printf("You are out!\n");
            wicket++;
        }
        if(user!=cpu)
        {
            if(user==4)
                printf("Its a four!\n");
            if(user==6)
                printf("Its a six!\n");
            scoreu=scoreu+user;
        }
        if(wicket==10)
        {
            printf("You are all out!\n");
            printf("Your score: %d/%d\n",scoreu,wicket);
            if(scoreu<scorec)
                printf("You lose!\n");
            if(scoreu==scorec)
                printf("Its a draw!\n");
            break;
        }
        printf("User %d/%d\n", scoreu,wicket);
        ball++;
        if(ball==31)
        {
            printf("Innings over!\nYour score : %d/%d\n", scoreu,wicket);
            if(scoreu<scorec)
                printf("You lose!\n");
            if(scoreu==scorec)
                printf("Its a draw!\n");
            break;
        }
        if(scoreu>scorec)
        {
            printf("You win!\n");
            break;
        }
        printf("\n");
    }
    return 0;
}



int minesweeper()
{
    char grid[6][6],field[6][6],m[2],menu,tempstr[10];
    int gridn[6][6]={0};
    int i,j,x,y,xs,ys,mine=0,i1,j1,nof,a=0;
    for(i=0;i<25;i++)
    {
        for(j=0;j<40-i;j++)
            printf(" ");
        for(j=0;j<=i;j++)
            {printf("%c ",15);
            delay(15);}
        printf("\n");
        delay(15);
    }
    for(;;)
    {
        system("cls");
        printf("Minesweeper 6x6\nversion 1.0\n\n");
        printf("1.Play Minesweeper\n2.Rules\n");
        menu=getch();
        if(menu==49)
            break;
        else if(menu==50)
        {
            system("cls");
            printf("This is the classic game of minesweeper written in C.\nRules for minesweeper:\n");
            printf("1. You are in a mine field and you have to successfully flag all the places which have a mine(%c). If you flag all the mines, You win!\n",15);
            printf("2.In your first turn, you have to choose a starting square. You can open a square by entering its row number(x) and column number(y)\n(Note: row and column number starts from 1)\n");
            printf("3.There are three modes of operation:\n");
            printf("(i) open mode. type 'o' in mode option. This mode lets the user to open a square\n");
            printf("(ii) flag mode. type 'f' in mode option. This mode lets the user to flag a particular square. Flagged square is denoted by an 'F'\n");
            printf("(iii) remove flag mode. type 'r' in mode option. This mode lets the user to remove a particular flag from a flagged square\n");
            printf("4.If you open a square with a mine, you lose\n");
            printf("5.If you open a square with a number written on it. The number shows that how many mines are there in the adjacent 8 squares\n");
            printf("For eg:\n%c %c %c\n\n%c 4 %c\n\n%c %c %c",219,219,219,219,219,219,219,219);
            printf("\nHere 4 denoted that there are 4 mines in the remaining uncovered squares");
            printf("\n\npress enter to continue.....");
            fflush(stdin);
            gets(tempstr);
        }
    }
    system("cls");
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
            field[i][j]=219;
    }
    for(i=0;i<6;i++)
    {
        for(j=0;j<30;j++)
            printf(" ");
        for(j=0;j<6;j++)
            printf("%c ",field[i][j]);
        printf("\n\n");
    }
    for(;;)
    {printf("\nOpen the starting square.\nx:");
    scanf("%d",&xs);
    printf("y:");
    scanf("%d", &ys);
    if(xs>6 || ys>6 || xs<1 || ys<1)
    {
        printf("Row or column not defined. Try again\n");
        continue;
    }
    else break;
    }
    xs=xs-1;
    ys=ys-1;
    srand(time(NULL));
    for(;;)
    {
        i=rand()%6;
        j=rand()%6;
        if(grid[i][j]!=15 && i!=xs && j!=ys)
            grid[i][j]=15;
        else
        continue;
        mine++;
        if(mine==9)
            break;
    }
    nof=mine;
    for(i=0;i<6;i++)
    {
        for(j=0;j<6;j++)
        {
            if(grid[i][j]!=15)
            {
                for(i1=i-1;i1<=i+1;i1++)
                {
                    for(j1=j-1;j1<=j+1;j1++)
                    {
                        if(grid[i1][j1]==15 && 0<=i1 && 0<=j1 &&i1<=5 && j1<=5)
                            gridn[i][j]++;
                    }
                }
                grid[i][j]=gridn[i][j] + 48;

            }
        }
    }
    for(i=xs-1;i<=xs+1;i++)
    {
        for(j=ys-1;j<=ys+1;j++)
        {
            if(grid[i][j]!=15)
                field[i][j]=grid[i][j];
        }
    }
    x=xs;
    y=ys;
    for(;;)
    {
        system("cls");
        for(i=0;i<6;i++)
        {
            for(j=0;j<30;j++)
                printf(" ");
            for(j=0;j<6;j++)
                printf("%c ", field[i][j]);
            printf("\n\n");
        }
        printf("no of flags: %d\n", nof);
        if(grid[x][y]==15 && strcmp(m,"o")==0)
        {
            printf("\ngame over\n");
            break;
        }
        for(i=0;i<6;i++)
        {
            for(j=0;j<6;j++)
            {
                if(grid[i][j]==15 && field[i][j]==70)
                    a++;
            }
        }
        if(a==mine)
        {
            printf("You win\n");
            break;
        }
        a=0;
        printf("mode:");
        scanf("%s",&m);
        printf("x:");
        scanf("%d",&x);
        printf("y:");
        scanf("%d",&y);
        x=x-1;
        y=y-1;
        if(strcmp(m,"o")==0)
            field[x][y]=grid[x][y];
        if(strcmp(m,"f")==0 && field[x][y]!=70 && field[x][y]==-37)
        {field[x][y]=70;
            nof--;}
        if(strcmp(m,"r")==0)
        {
            if(field[x][y]==70)
            {
                field[x][y]=219;
                nof++;
            }
        }
        if(grid[x][y]==15 && strcmp(m,"o")==0)
        {
            for(i=0;i<6;i++)
            {
                for(j=0;j<6;j++)
                {
                    if(grid[i][j]==15)
                        field[i][j]=grid[i][j];
                }
            }
        }
    }
    return 0;
}




int pandora()
{
    int i,j,a=0,r,r1,c,size,pr=0,pc=0,mul=1,score=0,count=0,turn,p1=0,p2=0;
    char grid1[20][20],grid[20][20];
    printf("~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~Pandora game~~~~~~~~~~~~~~~~~~~~~~~~~~~~~~\n\nRules:this is a two player game. there is a square grid of cards. You have to pick up one card each turn by entering its coordinates. each card has a character and is assigned the points equal to the ASCII value of that character. then player 2 repeats the same. whoever scores the most, wins!");
    printf("\nThe scoring for the game is as follows:\n");
    for(i=1;i<7;i++)
    printf("%c: %d point(s)\n",i,i);
    printf("\nif you open same type of square multiple times in a row you get a bonus score!\n");
    printf("Enter the size of the grid: ");
    scanf("%d", &size);
    printf("Enter the number of turns playable: ");
    scanf("%d", &turn);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            grid1[i][j]=177;

    }

   srand(time(NULL));
   for(i=0;i<size;i++)
   {

       for(j=0;j<size;j++)
       {
            r1=rand()%6 + 1;
           grid[i][j] = r1;
        }
   }
   for(;;)
    {
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
        printf("Enter the coordinate of the square to be opened:  ");
        for(;;)
        {
            scanf("%d %d", &r,&c);
            if(grid1[r][c]!=-79 || r>size || r<0 || c>size || c<0)
             {
                 printf("Invalid input! Try again\n\n");
                 continue;
             }
             if(grid[r][c]==grid[pr][pc] && a>0)
                mul++;
             if(grid[r][c]!=grid[pr][pc] && a>0)
                mul=1;
             break;
        }
        grid1[r][c] = grid[r][c];
        score=score+mul*grid[r][c];
        if(mul>1)
            printf("Woah! you get %d x points\n",mul);
        printf("score: %d\n", score);
        pr=r;
        pc=c;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(grid1[i][j]==-79)
                    count++;
            }
        }
        if(count==0)
        {

            for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
        printf("Game over! Your score is %d\n\n", score);
            break;
        }
        count=0;
        a++;
        if(a==turn)
        {
            for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
            printf("Game over! Your score is %d\n\n", score);
            break;
        }
    }
    p1=score;
    a=0;
    pr=0;
    pc=0;
    mul=1;
    score=0;
    count=0;
    printf("\n\nPlayer 2 turn\nTarget: %d\n\n", p1);
    for(i=0;i<size;i++)
    {
        for(j=0;j<size;j++)
            grid1[i][j]=177;

    }
    srand(time(NULL));
   for(i=0;i<size;i++)
   {

       for(j=0;j<size;j++)
       {
            r1=rand()%6 + 1;
           grid[i][j] = r1;
        }
   }
   for(;;)
    {
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
        printf("Enter the coordinate of the square to be opened:  ");
        for(;;)
        {
            scanf("%d %d", &r,&c);
            if(grid1[r][c]!=-79 || r>size || r<0 || c>size || c<0)
             {
                 printf("Invalid input! Try again\n\n");
                 continue;
             }
             if(grid[r][c]==grid[pr][pc] && a>0)
                mul++;
             if(grid[r][c]!=grid[pr][pc] && a>0)
                mul=1;
             break;
        }
        grid1[r][c] = grid[r][c];
        score=score+mul*grid[r][c];
        if(mul>1)
            printf("Woah! you get %d x points\n",mul);
        printf("score: %d\n", score);
        pr=r;
        pc=c;
        for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
            {
                if(grid1[i][j]==-79)
                    count++;
            }
        }
        if(count==0)
        {

            for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
        printf("Game over! Your score is %d\n\n", score);
            break;
        }
        count=0;
        a++;
        if(a==turn)
        {
            printf("Game over! Your score is %d\n\n", score);
            for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
            break;
        }
        if(score>p1)
        {
            for(i=0;i<size;i++)
        {
            for(j=0;j<size;j++)
                printf("%c ", grid1[i][j]);
            printf("\n\n");
        }
            printf("Player 2 wins!");
            break;
        }

    }
    p2=score;
    if(p2>p1)
        printf("player 2 wins!");
    if(p1>p2)
        printf("player 1 wins!");
    if(p1==p2)
        printf("its a draw!");
    return 0;
}
