#include <iostream>
#include <chrono>
#include <thread>

// 专注时钟函数
void concentrationClock(int minutes)
{
    // 将分钟转换为秒
    int seconds = minutes * 60;

    // 倒计时开始
    while (seconds >= 0)
    {
        // 计算分钟和秒数
        int displayMinutes = seconds / 60;
        int displaySeconds = seconds % 60;

        // 输出当前时间
        std::cout << "Remaining Time: " << displayMinutes << " minutes, " << displaySeconds << " seconds" << std::endl;

        // 休眠1秒
        std::this_thread::sleep_for(std::chrono::seconds(1));

        // 减少一秒
        seconds--;
    }

    // 倒计时结束
    std::cout << "Time's up! Stay focused!" << std::endl;
}

int main()
{
    int a = 1;
    while(a){
      int minutes;
    std::cout << "Enter the number of minutes for concentration: ";
    std::cin >> minutes;

    // 调用专注时钟函数
    concentrationClock(minutes);
    }
    return 0;
}
