#include <cassert>
#include <cstring>
#include <ctime>
#include <iostream>

// 19920104_091532

int main()
{
    std::time_t now = std::time(nullptr);
    std::tm* local = std::localtime(&now);


    char yyyymmdd_buf[9]; // 8 characters + null terminator
    std::strftime(yyyymmdd_buf, sizeof(yyyymmdd_buf), "%Y%m%d", local);

    char hhmmss_buf[7]; // 8 characters + null terminator
    std::strftime(hhmmss_buf, sizeof(hhmmss_buf), "%H%M%S", local);


    std::cout << yyyymmdd_buf << "_" << hhmmss_buf << std::endl;
    return 0;
}
