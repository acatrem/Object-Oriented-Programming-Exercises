#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;

bool assertEqualInt(int actual, int expected, const char* name, int testNo) {
	if (actual == expected) {
		cout << "Passed Test " << testNo << " (" << name << ")\n";
		return true;
	}
	cout << "Failed Test " << testNo << " (" << name << ") " << "Expected: " << expected << " but got " << actual << "\n";
	return false;
}


// eps : epsilon , bilgisayar biliminde "kabul edilebilir küçük bir hata payını" temsil eden küçük bir sayidir.
// 1e-9 : 1 x 10^-9 anlamina gelir. Bilgisayarlarda ondalikli sayilari ikilik (binary) tabanda saklarken tam olarak temsil edemeyebilirler.
// exp -> 0.1 gibi basit bir sayi ikilik tabanda sonsuz acilima sahip olabilir. Bu durum, "floating-point" hatalarina yol acar.
// "0.1 + 0.2 = 0.3" olmalidir ancak bilgisayarda bu sonuc "0.30000000004" gibi cok yakin ama farkli değer olabilir.
// iki ondalikli sayinin esit olup olmadigini kontrol etmek yerine, aralarindaki farki kabul edilebilir olup olmadigina bakariz 

bool assertNear(double actual, double expected, double eps, const char* name, int testNo) {
	if (fabs(actual - expected) <= eps) {
		cout << "Passed Test " << testNo << " (" << name << ")\n";
		return true;
	}
	cout << "Failed Test " << testNo << " (" << name << ") " << "Expected: " << expected << " but got " << actual << "\n";
	return false;
	
}

int isEven(int);
int max2(int, int);
double rectArea(double, double);
double celsiusToF(double);



int main() {

	cout << fixed << setprecision(6); // ondalik noktadan sonra 6 hane gosterir
	int t = 1;

	assertEqualInt(isEven(4), 1, "isEven(4)", t++);
	assertEqualInt(isEven(7), 0, "isEven(7)", t++);
	assertEqualInt(max2(3, 5), 5, "max2(3,5)", t++);
	assertEqualInt(max2(-2, -8), -2, "max2(-2,-8)", t++);
	assertNear(rectArea(3.0, 4.0), 12.0, 1e-9, "rectArea(3,4)",t++);
	assertNear(rectArea(-3.0, 4.0), 0.0, 1e-12, "rectArea(3,4)",t++);
	assertNear(celsiusToF(0.0), 32.0, 1e-12, "celsiusToF(0)", t++);
	assertNear(celsiusToF(100.0), 212.0, 1e-12, "celsiusToF(100)", t++);

	return 0;
}

int isEven(int n) {

	if (n % 2 == 0) {
		return 1;
	}
	else {
		return 0;
	}
}

int max2(int n1, int n2){

	if(n1 > n2){
		return n1;
	}else{				// n1==n2 ise direkt sayiyi gönder
		return n2;
	}
	
}

double rectArea(double length, double width){
	if(length > 0 && width > 0){
		return (length * width);
	}else{
		return 0;
	}
}

double celsiusToF(double h){
	return (h * 1.8) + 32;
}