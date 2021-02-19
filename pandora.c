 #include<stdio.h>
int main()
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