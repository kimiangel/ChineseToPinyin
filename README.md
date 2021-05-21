###汉字换拼音


####背景
很多时候需要T9输入算法，而算法的基础是数据，在做中文T9算法时，关键的一步是需要把中文转成拼音，然后拼音再转成9宫格按键对应的数字键，例如: "程序员" --> "chengxuyuan" --> 24364989826

九宫格按出的数字对应数字去搜索就容易和方便很多了。 整理出来的这些数字加上一些权重的设计就是T9算法。

####用法
#####测试用例
	arm64 平台
	aarch64-linux-g++ -o pinyin_test tests/test.cpp -I./include -lpinyin -L./src/arm64/

	x86 平台
	g++ -o pinyin_test tests/test.cpp -I./include -lpinyin -L./src/x86/


###运行测试用例

	export LD_LIBRARY_PATH=$LD_LIBRARY_PATH:./src/<平台>/

	./pinyin_test

