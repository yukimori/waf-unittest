# memo
20161027add
テストファイル(.cpp)をそれぞれ個別にbld.programに設定すると、
実行結果は以下のようになる

 22:32:27 2016/10/27$ ./waf build --checkall
Waf: Entering directory `/home/yukimori/programming/waf-unittest/build'
[17/21] utest: build/gtest_example2
[19/21] utest: build/gtest_example
[19/21] utest: build/test2
[20/21] utest: build/test
[21/21] utest: build/gtest_myint
Waf: Leaving directory `/home/yukimori/programming/waf-unittest/build'
test summary
  tests that pass 5/5
    /home/yukimori/programming/waf-unittest/build/test
    /home/yukimori/programming/waf-unittest/build/gtest_example
    /home/yukimori/programming/waf-unittest/build/test2
    /home/yukimori/programming/waf-unittest/build/gtest_example2
    /home/yukimori/programming/waf-unittest/build/gtest_myint
'build' finished successfully (0.157s)


次にwsscriptで以下のように設定する
複数の.cppファイルを一つのbld.programに記述するto,
実行結果は以下のようになる。
tests=1で、2つのテストケースが含まれているように表現されている

    # tab indentはエラーになる
    bld.program(
		features = 'gtest',
		source = ['test.cpp', 'test2.cpp'],
		includes = ".",
		target = 'test',
		use = ['lib'],
	)


test summary
  tests that pass 0/1
  tests that fail 1/1
    /home/yukimori/programming/waf-unittest/build/test
Running main() from gtest_main.cc
[==========] Running 2 tests from 2 test cases.
[----------] Global test environment set-up.
[----------] 1 test from testcase1
[ RUN      ] testcase1.test1_1
../test.cpp:6: Failure
Value of: 1024
Expected: foo(1024)
Which is: 1048576
[  FAILED  ] testcase1.test1_1 (0 ms)
[----------] 1 test from testcase1 (0 ms total)

[----------] 1 test from testcase2
[ RUN      ] testcase2.test2_1
[       OK ] testcase2.test2_1 (0 ms)
[----------] 1 test from testcase2 (0 ms total)

[----------] Global test environment tear-down
[==========] 2 tests from 2 test cases ran. (0 ms total)
[  PASSED  ] 1 test.
[  FAILED  ] 1 test, listed below:
[  FAILED  ] testcase1.test1_1

 1 FAILED TEST
