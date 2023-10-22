#include <iostream>
using namespace std;
int main() {
  int year;
  cout << "你已经存在于这个世界上多少年了？" << endl;
  cin >> year;
  cout << "我存在于这个世界上的时间为:";
  cout << year;
  cout << "年" << endl;

  cout << "我已经认识这个世界" << year << "年了";

  int years;
  cout << "你仍将存在于这个世界上多少年?" << endl;
  cin >> years;
  cout << "我仍将继续存在于这个世界上" << year << "年";

  int time;
  cout << "你将总共存在于这个世界上多少年?" << endl;
  time = year + years;
  cout << "我将总共存在于这个世界" << time << "年" << endl;
}