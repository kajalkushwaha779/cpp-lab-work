#include <iostream>
using namespace std;

// Base Class
class RBI {
public:
    float rate;
    void getROI() {
        cout << "Rate of Interest: " << rate << "%" << endl;
    }
};
// Child Class 1
class SBI : public RBI {
public:
    SBI(){ 
	rate = 5.4;
	}
};
// Child Class 2
class BOB : public RBI {
public:
    BOB(){ 
	rate = 6.2; 
	}
};
// Child Class 3
class ICICI : public RBI {
public:
    ICICI(){ 
	rate = 7.1;
	}
};
int main() {
    SBI s;
    BOB b;
    ICICI ic;
    cout << "--- Bank Interest Rates ---" << endl;
    cout << "SBI   -> "; s.getROI();
    cout << "BOB   -> "; b.getROI();
    cout << "ICICI -> "; ic.getROI();

    return 0;
}