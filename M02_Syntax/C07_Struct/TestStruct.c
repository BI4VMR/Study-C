#include <stdio.h>

// 定义结构体：学生
struct Student {
    // 学号
    int sno;
    // 年龄
    short age;
    // 性别
    char sex;
};

int main() {
    // testBase();
    return 0;
}

void testBase() {
    struct Student student1 = {1, 19, 'M'};
}
