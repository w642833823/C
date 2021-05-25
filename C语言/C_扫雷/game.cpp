
#include"game.h"
 
void menu()
{
	printf("########################\n");
    printf("######进入扫雷游戏######\n");
    printf("####1：play  0:exit####\n");
    printf("########################\n");
}
void init_board(char mine[ROW][COL], char show[ROW][COL])
{
    int i = 0;
    int j = 0;
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            mine[i][j] = '0';
        }
    }
    for (i = 1; i < ROW - 1; i++)
    {
        for (j = 1; j < COL - 1; j++)
        {
            show [i][j] = '*';
        }
    }
}
void display_board(char show[ROW][COL])
{
    int i, j;
    printf("  ");
    for (i = 1; i < COL - 1; i++)
        printf("%d ", i);
    printf("\n");
    for (i = 1; i < ROW - 1; i++)
    {
        printf("%d ", i);
        for (j = 1; j < COL - 1; j++)
        {
            printf("%c ", show[i][j]);
        }
        printf("\n");
    }
}
void set_mine(char mine[ROW][COL])
{
    int x = 0;
    int y = 0;
    int count = SUIJI;
    srand((unsigned int)time(NULL));
    while (count)
    {
        int x = rand() % (ROW-2) + 1;
        int y = rand() % (COL-2) + 1;
        if (mine[x][y] == '0')
        {
            mine[x][y] = '1';
            count--;
        }
    }
}
int get_mine(char mine[ROW][COL], int x, int y)
{
    int count = 0;
    if (mine[x - 1][y - 1] == '1')
        count++;
    if (mine[x - 1][y] == '1')
        count++;
    if (mine[x-1][y + 1] == '1')
        count++;
    if (mine[x][y - 1] == '1')
        count++;
    if (mine[x ][y + 1] == '1')
        count++;
    if (mine[x + 1][y - 1] == '1')
        count++;
    if (mine[x + 1][y] == '1')
        count++;
    if (mine[x + 1][y + 1] == '1')
        count++;
    return count;
}
void mine_sweep(char mine[ROW][COL], char show[ROW][COL])
{
    int x = 0;
    int y = 0;
    int count = 0;
    while (count != (ROW - 2)*(COL - 2) - SUIJI)
    {
        printf("请输入坐标：");
            scanf("%d%d", &x, &y);
        if (mine[x][y] == '1')
        {
            printf("很遗憾，踩到雷了：\n");
            printf("棋盘中雷的分布：\n");
            display_board(mine);
            return;
        }
        else
        {
            int ret = get_mine(mine, x, y);
            show[x][y] = ret + '0';
            display_board(show);
        }
    }
    printf("恭喜你，扫雷成功\n");
}