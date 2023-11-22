#include <iostream>

int main() {
  int year;

  // 输入年份
  std::cout << "请输入一个年份：";
  std::cin >> year;

  // 判断是否为闰年
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    std::cout << "YES" << std::endl;
  } else {
    std::cout << "NO" << std::endl;
  }

  return 0;
}

#include <iostream>

int main() {
  int numberOfPeople;

  // 输入人数
  std::cout << "请输入参加旅游的人数：";
  std::cin >> numberOfPeople;

  // 计算旅游费用
  if (numberOfPeople <= 5) {
    // 5人以内，按照散客标准
    std::cout << "旅游费用为：" << numberOfPeople * 300 << "元" << std::endl;
  } else {
    // 超过5人，按照团体标准
    std::cout << "旅游费用为：" << numberOfPeople * 280 << "元" << std::endl;
  }

  return 0;
}

#include <iostream>

int main() {
  int N;

  // 输入整数
  std::cout << "请输入一个整数N:";
  std::cin >> N;

  // 判断并输出正负
  if (N > 0) {
    std::cout << "Positive" << std::endl;
  } else if (N == 0) {
    std::cout << "Zero" << std::endl;
  } else {
    std::cout << "Negative" << std::endl;
  }

  return 0;
}

#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "请输入一个年份:" << endl;
  cin >> year;
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0)) {
    cout << "YES!" << endl;
  } else {
    cout << "NO!" << endl;
  }
}

#include <iostream>
using namespace std;
int main() {
  int N;
  cout << "请输入N的值:";
  cin >> N;
  if (N > 0) {
    cout << "Positive" << endl;
  } else if (N < 0) {
    cout << "Negative" << endl;
  }
}

#include <iostream>
using namespace std;
int main() {
  int numberOfPeople;
  cout << "请输入参加旅游的人数:";
  cin >> numberOfPeople;
  if (numberOfPeople <= 5) {
    cout << "旅游费用为" << numberOfPeople * 300 << "元" << endl;
  } else {
    cout << "旅游费用为" << numberOfPeople * 280 << "元" << endl;
  }
}