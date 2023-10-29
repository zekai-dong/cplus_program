// #include <iostream>
// using namespace std;
// int main() {
//   int a, b, c;
//   a = 2;
//   b = 3;
//   a = a + 1;
//   c = a + b;
//   cout << "a= " << a;
//   cout << " ,b= " << b;
//   cout << " ,c= " << c;
//   cout << endl;
//   return 0;
// }

/*
    制作一个一周零用钱统计程序，需具备以下功能：
    １、询问用户每天存钱多少元？
    ２、本省存储容器中有135元；
    ３、使用累加器变量　sum；
    ４、输出一周后存储容器中共多少元？
*/
// #include <iostream>

// int main() {
//   double sum = 135.0; // 初始存储容器中有135元

//   for (int day = 1; day <= 7; day++) {
//     double deposit;
//     std::cout << "请输入第" << day << "天存钱的金额（元）：";
//     std::cin >> deposit;
//     sum += deposit;
//   }

//   std::cout << "一周后存储容器中共有" << sum << "元。" << std::endl;

//   return 0;
// }

/*
    a,b,c变量中的数字交换，　ｂ给ａ，ｃ给ｂ，ａ给ｃ
*/
#include <iostream>

int main() {
  int a, b, c;

  // 输入三个数字
  std::cout << "请输入三个整数：";
  std::cin >> a >> b >> c;

  // 交换数字
  int temp = a;
  a = b;
  b = c;
  c = temp;

  // 输出交换后的结果
  std::cout << "交换后的数字：a = " << a << ", b = " << b << ", c = " << c
            << std::endl;

  return 0;
}