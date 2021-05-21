#include <cstdio>
#include <cstdlib>
#include <wchar.h>
#include "pinyin_util.h"

const char* temp = "程序员";

int main(void) {
	printf("%ld\n", time(NULL));
	std::vector<std::string> str = WordToPinyin(L'国');
	for(int i = 0; i < str.size(); ++i) {
		printf("str:%s, i:%d\n", str[i].c_str(), i);
	}
	str = WordToNumber(L'家');
	for(int i = 0; i < str.size(); ++i) {
		printf("str:%s, i:%d\n", str[i].c_str(), i);
	}
	str = WordToNumber(L'G');
	for(int i = 0; i < str.size(); ++i) {
		printf("str:%s, i:%d\n", str[i].c_str(), i);
	}
	
	wchar_t* dest;
	int ret = CharToWchar(&dest, temp);
	if(ret != -1) {
		for(int i = 0; i < wcslen(dest); ++i) {
			str = WordToNumber(dest[i]);
			for(int i = 0; i < str.size(); ++i) {
				printf("str:%s, i:%d\n", str[i].c_str(), i);
			}
		}
	} 
	//记得释放内存
	delete[] dest;
	printf("%ld\n", time(NULL));

	return 0;
}

