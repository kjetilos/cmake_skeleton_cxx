#pragma once

class Foo {
public:
    Foo(int n) : _n(n) {}

    void do_food() const;
    int add(int a, int b) const;
private:
    int _n;
};
