# memo
20161027add
現状のwscriptで以下のようにテストを実行できる

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
