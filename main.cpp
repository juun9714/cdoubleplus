#include <iostream> //전처리 지시자
#include <climits>

/*
C++에서 함수를 사용하고자 한다면, 반드시 그 함수의 원형을 미리 정의하여야 한다.
; : 종결자의 역할을 함
C++에는 꼭 main이라는 이름을 하는 함수가 있어야 한다.
endl : 줄바꿈
<< : 데이터의 흐름을 나타냄
using namespace std: std:: 생략하기 위해서 쓰는 거임
*/

/*
변수: 변할 수 있는 수
상수: 변하지 않는 수

1. 자료형
2. 이름
	- 숫자로 시작할 수 없음
	- c++에서 사용하고 있는 키워드는 사용할 수 없음 ex) return
	- white space를 사용할 수 없음
3. 어디에 저장되는가? (컴파일러가 해줌)
*/

using namespace std;

int main() {

	/*

	int a; //선언
	a = 7; //대입
	int b = 10; //초기화

	cout << &a << endl;
	cout << &b << endl;

	// short, int, long, long long

	int n_int = INT_MAX;
	short n_short = SHRT_MAX;
	long n_long = LONG_MAX;
	long long n_longlong = LLONG_MAX;

	cout << n_short << ", size: "<< sizeof n_short << endl;
	cout << n_int << ", size: " << sizeof n_int << endl;
	cout << n_long << ", size: " << sizeof n_long << endl;
	cout << n_longlong << ", size: " << sizeof n_longlong << endl;

	unsigned short ub = -1;
	cout << ub << endl;

	float a = 3.14;
	int b = 3.14;

	cout << a <<b << endl;


	//char: 작은 문자형, a,b,c,d -> ASCII 코드로 사용
	// c++에서 ""는 char 형에 사용할 수 없음 -> null 문자 때문임 -> 어디까지가 문자인지를 확인하게 해주는 null 문자 필요 which is '\0'
	//"" 큰따옴표의 경우 명시적으로 null 문자가 포함되어 있음 => String
	int a = 77;
	char b = 'a';

	char c[] = {'a', 'b' ,'c', '\0'}; // null 문자를 안써주어서, 컴퓨터는  null 문자가 나올 때까지 계속 메모리에 접근을 하다가 null 문자를 우연히 만나면 멈춤
	cout << c << endl;

	//한글은 아스키코드 지원 안됨

	//bool : 0 or 1, 거짓 or 참 <= 0 이외의 모든 값을 1로 저장 => 결과적으로 bool은 모든 값을 0 아니면 1로 저장함
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << b << c << endl;


	//원의 넓이 구하는 프로그램
	//반지름*반지름*파이
	//
	// 1. 바뀔 필요가 없는 수
	// 2. 바뀌어서는 안되는 수
	// 상수!를 변수에 저장할 수 있음 -> 이 경우, 초기화의 방식으로만 정의 가능 (선언과 동시에 할당)


	const float PIE = 3.1415926535;
	int r = 3;
	float s = r * r * PIE;

	int r2 = 5;
	float s2 = r2 * r2 * PIE;

	cout << s << endl;
	cout << s2 << endl;

	// 데이터형 변환
	// 1. 특정 데이터형의 변수에 다른 데이터형의 값을 대입했을 때
	// 2. 수식에 데이터형을 혼합하여 사용했을 때
	// 3. 함수에 매개변수를 전달할 때

	// 강제적으로 데이터형 변환
	// typeName(a) or (typeName)a or static_cast<int>(a)

	char ch = 'M';
	cout << (int)ch << "  " << int(ch) << "  " << static_cast<int>(ch) << endl;
	*/


	/*
	// 연산자, 피연산자

	int a = 3 + 2;
	cout << a << endl;

	// 나눗셈에서 두 피연산자가 모두 정수면, 결과값은 몫이 됨
	// 근데 두 피연사자 중 하나라도 부동소수점(실수)이 된다면, 결과값은 실수값이 나옴

	float b = 9.0;
	int c = 5;

	cout << b / c << endl;

	//auto : 값을 보고 자료형을 알아서 정의해주는 명령어
	auto n = 0.0; //float
	float x = 0; //float
	auto z = 0; //int

	*/
	/*
	복합 데이터형을 제공한다
	사용자 정의대로 새로운 데이터형을 만들 수 있다. 
	복합 데이터형: 기본 정수형과 부동소수점형의 조합
	배열: 같은 데이터형의 집합
	typeName arrayName[arraySize];

	*/

	/*
	
	//배열을 선언한 것임

	short month[12] = { 1,2,3 };
	cout << month << endl;

	//문자열 : 문자의 열.
	char a[6] = { 'H','e','l','l','o','\0'};
	char b[] = "Hello"; //쌍따옴표는 널문자를 기본적으로 포함하고 있음
	cout << a << endl;
	cout << b << endl;
	*/


	return 0;
}