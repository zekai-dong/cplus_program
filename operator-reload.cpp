#include <iostream>
using namespace std;
// int main() {
//   int year;
//   cout << "你已经存在于这个世界上多少年了？" << endl;
//   cin >> year;
//   cout << "我存在于这个世界上的时间为:";
//   cout << year;
//   cout << "年" << endl;

//   cout << "我已经认识这个世界" << year << "年了";

//   int years;
//   cout << "你仍将存在于这个世界上多少年?" << endl;
//   cin >> years;
//   cout << "我仍将继续存在于这个世界上" << year << "年";

//   int time;
//   cout << "你将总共存在于这个世界上多少年?" << endl;
//   time = year + years;
//   cout << "我将总共存在于这个世界" << time << "年" << endl;
// }

// int main() {
//   int year;
//   cout << "你今年几岁了?" << endl;
//   cin >> year;

//   int grade;
//   cout << "你几年级了?" << endl;
//   cin >> grade;

//   int classroom;
//   cout << "你在哪个班?" << endl;
//   cin >> classroom;

//   cout << "我今年" << year << "岁了";
//   cout << "我" << grade << "年级";
//   cout << "我在" << classroom << "班" << endl;
// }
// int main() {
//   int leng;
//   cout << "长方形的长是几厘米?" << endl;
//   cin >> leng;

//   int zeng;
//   cout << "宽是几厘米?" << endl;
//   cin >> zeng;

//   int circumference;
//   cout << "长方形周长是几厘米?" << endl;
//   circumference = (leng + zeng) * 2;

//   cout << "长方形长是" << leng << "厘米";
//   cout << "宽是" << zeng << "厘米";
//   cout << "长方形周长是" << circumference << "厘米" << endl;
// }
int main() {
  int length;
  cout << "长方形的长是几厘米?" << endl;
  cin >> length;

  int width;
  cout << "宽是几厘米?" << endl;
  cin >> width;

  int circumference;
  cout << "长方形周长是几厘米?" << endl;
  circumference = (length + width) * 2;

  cout << "长方形长是" << length << "厘米";
  cout << "宽是" << width << "厘米";
  cout << "长方形周长是" << circumference << "厘米" << endl;
}