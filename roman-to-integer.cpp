#include <iostream>
#include <string>
#include <map>

int romanToInt (std::string s) {
	std::map<char, int> map;
	map['I'] = 1;	map['V'] = 5;	map['X'] = 10;
	map['L'] = 50;	map['C'] = 100;	map['D'] = 500;
	map['M'] = 1000;
	/* 变量 ret 初始值为字符串最右端的字符所对应的数值
	  （注意不能使用最左端的数值来做，想想为什么？） */
	int ret = map[ s[s.length() - 1] ];
	/* 从左到右遍历字符串中字符，转化成数值并累加到 ret 变量 */
	for (int i = 0; i < s.length() - 1; i++) {
		if (map[ s[i] ] < map[ s[i + 1] ]) {
			ret -= map[ s[i] ];
		} else {
			ret += map[ s[i] ];
		}
	}
	return ret;
}

int main () {
	std::cout << romanToInt("DCXXI") << std::endl;
	return 0;
}