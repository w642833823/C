
#include "game.h"
 
void game()//玩游戏
{
	int x = 0;
	int y = 0;
    char mine[ROW][COL];
    char show[ROW][COL];
    init_board(mine, show);
    display_board(show);
    set_mine(mine);
	get_mine( mine,x,y);
    mine_sweep(mine, show);
}
 
int main()
{
    int input = 1;
    do
    {
	    menu();
        printf("请选择：\n");
        scanf("%d", &input);
        switch (input)
        {
        case 1:
            game();
		    break;
		case 0:
            break;
        default:
            printf("选择错误，请重新选择：\n");
            break;
        }
    }while(input);
    return 0;
}