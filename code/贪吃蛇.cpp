#include <stdio.h>
#include <windows.h>
#include <conio.h>
#include <dos.h>

#define S_FRIST_X 20
#define S_FRIST_Y 10

#define UP 11
#define DOWN 12
#define LEFT 13
#define RIGHT 14

#define START 22
#define OVER 33

//封装vc++6.0中光标移动函数
int mygotoxy(int x, int y)
{
    COORD coord = {x, y};
    SetConsoleCursorPosition(GetStdHandle(STD_OUTPUT_HANDLE), coord);
    
    return 0;
}

//打印蛇的身体
int s_print(int s_arr[][2], int s_len)
{
    int i = 0;
    for (i = 0; i < s_len; i++)
    {
        mygotoxy(s_arr[i][0], s_arr[i][1]);
        printf("*");
    }
}

//清空蛇的身体
int s_print_clean(int s_arr[][2], int s_len)
{
    int i = 0;
    for (i = 0; i < s_len; i++)
    {
        mygotoxy(s_arr[i][0], s_arr[i][1]);
        printf(" ");
    }
}

//打印食物
int t_print(int x, int y)
{
    mygotoxy(x, y);
    printf("*");
}

//清空食物
int t_print_clean(int x, int y)
{
    mygotoxy(x, y);
    printf(" ");
}

int main (void)
{
    int i = 0;
    char key = 0;
    int speed = 0;
    int s_len = 0;
    int s_direction = 0;

    int t_x = 0;
    int t_y = 0;
    int t_rand = 0;
    int score = 0;
    int levels = 0;

    int game = OVER;

    int s_arr[100][2] = {{0, 0}};

    //打印游戏界面为宽度1-59，高度1-22
    for (i = 1; i <= 60; i += 2)
    {
        mygotoxy(i, 0);
        printf("-");
    }
    for (i = 1; i <= 60; i += 2)
    {
        mygotoxy(i, 23);
        printf("-");
    }
    for (i = 1; i <= 22; i++)
    {
        mygotoxy(0, i);
        printf("|");
    }
    for (i = 1; i <= 22; i++)
    {
        mygotoxy(60, i);
        printf("|");
    }

    //打印欢迎信息
    mygotoxy(63, 2);
    printf("欢迎来到贪吃蛇。");
    mygotoxy(66, 4);
    printf("w键为上");
    mygotoxy(66, 5);
    printf("s键为下");
    mygotoxy(66, 6);
    printf("a键为左");
    mygotoxy(66, 7);
    printf("d键为右");
    mygotoxy(63, 20);
    printf("按回车开始游戏。");

    while (1)
    {
_start:
        //判定关卡
        if(20 == score && 1 == levels)
        {
            mygotoxy(30, 12);
            printf("下一关");
            Sleep(1000);
            mygotoxy(30, 12);
            printf("      ");
            speed = 250;
            levels = 2;
        }
        else if(30 == score && 2 == levels)
        {            
            mygotoxy(30, 12);
            printf("下一关");
            Sleep(1000);
            mygotoxy(30, 12);
            printf("      ");
            speed = 125;
            levels = 3;
        }
        else if(40 == score && 3 == levels)
        {
            mygotoxy(30, 12);
            printf("下一关");
            Sleep(1000);
            mygotoxy(30, 12);
            printf("      ");
            speed = 60;
            levels = 4;
        }
        else if(50 == score && 4 == levels)
        {
            mygotoxy(30, 12);
            printf("下一关");
            Sleep(1000);
            mygotoxy(30, 12);
            printf("      ");
            speed = 30;
            levels = 5;
        }

        if(OVER == game)
        {    
            //打印游戏信息
            mygotoxy(68, 21);
            printf("结束");

            //输入回车开始游戏
            while(1)
            {
                key = _getch();
                fflush(stdin);

                if(13 == key)
                {
                    key = 0;
                    break;
                }
            }

            //初始化移动速度和蛇的长度
            speed = 500;
            s_len = 3;

            //初始化关卡
            levels = 1;

            //初始化食物坐标
            if((t_rand = rand() % 60) != 0)
            {
                t_x = t_rand;
            }
            
            if((t_rand = rand() % 23) != 0)
            {
                t_y = t_rand;
            }
            
            //初始化蛇的身体
            for (i = 0; i < s_len; i++)
            {
                s_arr[i][0] = 20 + i;
                s_arr[i][1] = 10;
            }

            //初始化方向
            s_direction = RIGHT;
            
            game = START;

            //打印游戏信息
            mygotoxy(68, 21);
            printf("进行");
        }

        //刷新得分
        mygotoxy(66, 13);
        printf("得分: %d分", score);

        //刷新关卡
        mygotoxy(65, 11);
        printf("关卡: 第%d关", levels);

        //判断方向
        switch (s_direction)
        {
        case UP:
        {
            //判断是否到上边界面
            if(0 == s_arr[s_len - 1][1] - 1)
            {
                game = OVER;
                score = 0;
                mygotoxy(30, 12);
                printf("Game Over!");
                Sleep(1000);
                mygotoxy(30, 12);
                printf("          ");
                continue;
            }

            //判断是否要撞上自己的身体
            for (i = 0; i < s_len; i++)
            {
                if(s_arr[i][0] == s_arr[s_len - 1][0] && s_arr[i][1] == s_arr[s_len - 1][1] - 1)
                {
                    game = OVER;
                    score = 0;
                    mygotoxy(30, 12);
                    printf("Game Over!");
                    Sleep(1000);
                    mygotoxy(30, 12);
                    printf("          ");
                    goto _start;
                }
            }

            //判断是否吃到食物
            if (t_x == s_arr[s_len - 1][0] && t_y == s_arr[s_len - 1][1] - 1)
            {
                s_len++;
                s_arr[s_len - 1][0] = t_x;
                s_arr[s_len - 1][1] = t_y;

                //分数加十分
                score += 10;
                
                //刷新食物坐标
                if((t_rand = rand() % 60) != 0)
                {
                    t_x = t_rand;
                }
                if((t_rand = rand() % 23) != 0)
                {
                    t_y = t_rand;
                }
                break;
            }
            else
            {
                //坐标上移
                for (i = 0; i < s_len; i++)
                {
                    if(s_len - 1 == i)
                    {
                        s_arr[i][1]--;                    
                    }
                    else
                    {
                        s_arr[i][0] = s_arr[i + 1][0];
                        s_arr[i][1] = s_arr[i + 1][1];
                    }
                }
                break;
            }
        }
        case DOWN:
        {
            //判断是否到下边界面
            if(23 == s_arr[s_len - 1][1] + 1)
            {
                game = OVER;
                score = 0;
                mygotoxy(30, 12);
                printf("Game Over!");
                Sleep(1000);
                mygotoxy(30, 12);
                printf("          ");
                continue;
            }

            //判断是否要撞上自己的身体
            for (i = 0; i < s_len; i++)
            {
                if(s_arr[i][0] == s_arr[s_len - 1][0] && s_arr[i][1] == s_arr[s_len - 1][1] + 1)
                {
                    game = OVER;
                    score = 0;
                    mygotoxy(30, 12);
                    printf("Game Over!");
                    Sleep(1000);
                    mygotoxy(30, 12);
                    printf("          ");
                    goto _start;
                }
            }

            //判断是否吃到食物
            if (t_x == s_arr[s_len - 1][0] && t_y == s_arr[s_len - 1][1] + 1)
            {
                s_len++;
                s_arr[s_len - 1][0] = t_x;
                s_arr[s_len - 1][1] = t_y;    
                            
                //分数加十分
                score += 10;
                
                //刷新食物坐标
                if((t_rand = rand() % 60) != 0)
                {
                    t_x = t_rand;
                }
                if((t_rand = rand() % 23) != 0)
                {
                    t_y = t_rand;
                }
                break;
            }
            else
            {
                //坐标下移
                for (i = 0; i < s_len; i++)
                {
                    if(s_len - 1 == i)
                    {
                        s_arr[i][1]++;                    
                    }
                    else
                    {
                        s_arr[i][0] = s_arr[i + 1][0];
                        s_arr[i][1] = s_arr[i + 1][1];
                    }
                }
                break;
            }
        }
        case LEFT:
        {
            //判断是否到左边界面
            if(0 == s_arr[s_len - 1][0] - 1)
            {
                game = OVER;
                score = 0;
                mygotoxy(30, 12);
                printf("Game Over!");
                Sleep(1000);
                mygotoxy(30, 12);
                printf("          ");
                continue;
            }

            //判断是否要撞上自己的身体
            for (i = 0; i < s_len; i++)
            {
                if(s_arr[i][0] == s_arr[s_len - 1][0] - 1 && s_arr[i][1] == s_arr[s_len - 1][1])
                {
                    game = OVER;
                    score = 0;
                    mygotoxy(30, 12);
                    printf("Game Over!");
                    Sleep(1000);
                    mygotoxy(30, 12);
                    printf("          ");
                    goto _start;
                }
            }

            //判断是否吃到食物
            if (t_x == s_arr[s_len - 1][0] - 1 && t_y == s_arr[s_len - 1][1])
            {
                s_len++;
                s_arr[s_len - 1][0] = t_x;
                s_arr[s_len - 1][1] = t_y;
                
                //分数加十分
                score += 10;
                
                //刷新食物坐标
                if((t_rand = rand() % 60) != 0)
                {
                    t_x = t_rand;
                }
                if((t_rand = rand() % 23) != 0)
                {
                    t_y = t_rand;
                }
                break;
            }
            else
            {
                //坐标左移
                for (i = 0; i < s_len; i++)
                {
                    if(s_len - 1 == i)
                    {
                        s_arr[i][0]--;                    
                    }
                    else
                    {
                        s_arr[i][0] = s_arr[i + 1][0];
                        s_arr[i][1] = s_arr[i + 1][1];
                    }
                }
                break;
            }
        }
        case RIGHT:
        {
            //判断是否到左边界面
            if(60 == s_arr[s_len - 1][0] + 1)
            {
                game = OVER;
                score = 0;
                mygotoxy(30, 12);
                printf("Game Over!");
                Sleep(1000);
                mygotoxy(30, 12);
                printf("          ");
                continue;
            }

            //判断是否要撞上自己的身体
            for (i = 0; i < s_len; i++)
            {
                if(s_arr[i][0] == s_arr[s_len - 1][0] + 1 && s_arr[i][1] == s_arr[s_len - 1][1])
                {
                    game = OVER;
                    score = 0;
                    mygotoxy(30, 12);
                    printf("Game Over!");
                    Sleep(1000);
                    mygotoxy(30, 12);
                    printf("          ");
                    goto _start;
                }
            }

            //判断是否吃到食物
            if (t_x == s_arr[s_len - 1][0] + 1 && t_y == s_arr[s_len - 1][1])
            {
                s_len++;
                s_arr[s_len - 1][0] = t_x;
                s_arr[s_len - 1][1] = t_y;    

                //分数加十分
                score += 10;
                
                //刷新食物坐标
                if((t_rand = rand() % 60) != 0)
                {
                    t_x = t_rand;
                }
                if((t_rand = rand() % 23) != 0)
                {
                    t_y = t_rand;
                }
                break;
            }
            else
            {
                //坐标右移
                for (i = 0; i < s_len; i++)
                {
                    if(s_len - 1 == i)
                    {
                        s_arr[i][0]++;                    
                    }
                    else
                    {
                        s_arr[i][0] = s_arr[i + 1][0];
                        s_arr[i][1] = s_arr[i + 1][1];
                    }
                }
                break;
            }
        }
        }

        //打印蛇的身体
        s_print(s_arr, s_len);

        //打印食物
        t_print(t_x, t_y);

        while (kbhit())
        {
            //输入一个字符
            key = _getch();
            fflush(stdin);

            //按键输入
            switch (key)
            {
            case 'w':
                if(DOWN == s_direction)
                    break;
                else
                {
                    s_direction = UP;
                    break;
                }
            case 's':
                if(UP == s_direction)
                    break;
                else
                {
                    s_direction = DOWN;
                    break;
                }
            case 'a':
                if(RIGHT == s_direction)
                    break;
                else
                {
                    s_direction = LEFT;
                    break;
                }
            case 'd':
                if(LEFT == s_direction)
                    break;
                else
                {
                    s_direction = RIGHT;
                    break;
                }
            }
        }
        
        //延时函数
        Sleep(speed);

        //清空蛇的身体
        s_print_clean(s_arr, s_len);

        //清空食物
        t_print_clean(t_x, t_y);
    }

    return 0;
}
