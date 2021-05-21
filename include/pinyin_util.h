#ifndef _PINYIN_UTIL_H_
#define _PINYIN_UTIL_H_

#ifdef __cplusplus
extern "C" {
#endif

#define ARRAY_SIZE(x)	(sizeof(x)/sizeof(x[0]))

typedef struct _multpinyin {
	wchar_t word;
	const char* duopinyin[5];
}MultPinyin;

#ifdef __cplusplus
}
#endif

#include <vector>
#include <string>

std::vector<std::string> WordToPinyin(wchar_t word);
std::vector<std::string> WordToNumber(wchar_t word);
//delete[] dest;
int CharToWchar(wchar_t** dest, const char* src);
std::string WcharToChar(const wchar_t* src);
bool isChinese(wchar_t word);

#endif /*_PINYIN_UTIL_H_*/
