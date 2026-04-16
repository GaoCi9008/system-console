#include <stdio.h>
#include <stdlib.h>

int main()
{
    int run;

    while (1)
    {                  // 循环直到用户选择退出
        system("cls"); // 清屏（Windows）
        printf("=== 系统关机控制台 ===\n");
        printf("1. 立刻重启操作系统\n");
        printf("2. 1分钟后重启操作系统\n");
        printf("3. 1分钟后关闭操作系统\n");
        printf("4. 立即关闭操作系统\n");
        printf("5. 取消操作\n");
        printf("6. 退出程序\n");
        printf("请选择：");

        scanf("%d", &run);
        getchar(); // 清除输入缓冲中的换行符

        switch (run)
        {
        case 1:
            system("shutdown -r -t 0");
            break;
        case 2:
            system("shutdown -r -t 60");
            printf("系统将在1分钟后重启。\n");
            break;
        case 3:
            system("shutdown -s -t 60");
            printf("系统将在1分钟后关闭。\n");
            break;
        case 4:
            printf("确定立即关闭操作系统吗？(y/n): ");
            if (getchar() == 'y')
            {
                system("shutdown -s -f -t 0");
            }
            getchar(); // 吸收后续换行符（如果用户输入了'y'后按下回车）
            break;
        case 5:
            system("shutdown -a");
            printf("关闭操作系统已取消。\n");
            break;
        case 6:
            printf("程序退出。\n");
            system("pause");
            return 0; // 退出循环和程序
        default:
            printf("无效选择。\n");
        }
        // 操作完成后暂停，用户按键后清屏进入下一轮
        system("pause");
    }
    return 0;
}