// CopilotTest.cpp : このファイルには 'main' 関数が含まれています。プログラム実行の開始と終了がそこで行われます。
//

#include <iostream>
#include <string>

std::string num2str(int num);

int main()
{
    std::cout << "Hello World!" << num2str(11)  << "\n";
}

// プログラムの実行: Ctrl + F5 または [デバッグ] > [デバッグなしで開始] メニュー
// プログラムのデバッグ: F5 または [デバッグ] > [デバッグの開始] メニュー

//
// 数字を受け取り、文字列に変換して返す
//
std::string num2str(int num) {
	std::string str = "";
	int tmp = num;
	int digit = 0;
	while (tmp > 0) {
		digit++;
		tmp /= 10;
	}
	for (int i = 0; i < digit; i++) {
		str += (char)((num / (int)pow(10, digit - i - 1)) + '0');
		num %= (int)pow(10, digit - i - 1);
	}
	return str;
}
