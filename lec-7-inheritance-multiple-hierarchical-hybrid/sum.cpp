#include <iostream>
using namespace std;

class A {
public:
    int n1;
    A(int a){ 
	n1 = a; 
	}
};
// Single Inheritance (B inherits A)
class B : public A {
public:
    int n2;
    B(int a, int b) : A(a){ 
	n2 = b; 
	}
};

class C {
public:
    int n3;
    C(int c){ 
	n3 = c; 
	}
};

// Multiple Inheritance (D inherits B and C)
// Combined, this forms Hybrid Inheritance
class D : public B, public C {
public:
    int n4;
    D(int a, int b, int c, int d) : B(a, b), C(c) {
        n4 = d;
    }

    void calculateSum() {
        int sum = n1 + n2 + n3 + n4;
        cout << "Numbers: " << n1 << ", " << n2 << ", " << n3 << ", " << n4 << endl;
        cout << "Total Sum: " << sum << endl;
    }
};

int main() {
    int v1, v2, v3, v4;
   cout << "Enter first numbers: ";
    cin >> v1; 
    cout << "Enter second numbers: ";
    cin >> v2;
    cout << "Enter third numbers: ";
    cin >> v3;
    cout << "Enter four numbers: ";
    cin >> v4;

    D d(v1, v2, v3, v4);
    d.calculateSum();

    return 0;
}