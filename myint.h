
class MyInt {
 public:
    MyInt();
    explicit MyInt(int num);
    void set(int num);
    int get();
    bool isOdd();
    bool isEven();
 private:
    int num_;
};
