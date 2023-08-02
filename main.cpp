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

	string만이 가지고 있는 특장점
	=> 배열은 다른 배열에 통째로 대입할 수 없는데, string은 가능하다. 
	=> 문자열의 크기를 미리 지정해주지 않아도 된다.
	=> 문자열처럼 index로도 접근 가능

	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panda";
	// char1 = char2;
	str1 = str2;

	cout << str1 << endl;


	**구조체**
	사용자의 입맛대로 원하는 데이터형을 만들 수 있음 -> 구조체! 
	배열 -> 각 요소가 같은 데이터형이어야 함
	구조체 -> 데이터의 집합이지만 다양한 데이터형이 허용되는 집합임

	// 축구선수


	struct MyStruct
	{
		// 아래 구성 요소들은 member라고 불림
		string name;
		string position;
		int height;
		int weight;
	} B;
	
	위의 네 데이터를 하나의 데이터형으로 관리할 수 있으면 좋을 것임 
	이럴 때 구조체를 사용하면 좋음
	사용자가 정의한 새로운 데이터형을 만듦
	구조체를 선언을 하고, 구조체의 멤버에 대응하는 값을 초기화할 수 있음
	데이터형을 만드는 것이랑 동일하기 때문에! 

	
	구조체의 멤버 연산자 : .

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;


	B = { 
		 값 안넣어주면 0으로 초기화됨
	};

	cout << B.height << endl;

	구조체 역시 배열로 선언할 수 있음
	
	MyStruct A = {
		"Son",
		"Striker",
		183,
		77
	};

	MyStruct C[2] = {
		{"A","A",1,1},
		{"B","B",2,2}
	};

	std::cout << C[1].name << endl;
	*/


	/*
	공용체(union)
	: 서로 다른 데이터형을 한 번에 한 가지만 보관할 수 있는 데이터형
	: 다른 데이터형의 값을 보관할 때마다, 이전에 보관했던 데이터 값이 소실됨
	: 여러 데이터형을 사용할 수 있지만, 동시에 사용할 수는 없음 => 메모리를 아낄 수 있음

	열거체(enum)
	기호 상수를 만드는 것에 대한 또 다른 방법
	1. spectrum을 새로운 데이터형 이름으로 만듦
	2. 여러 색을 0에서부터 7까지 정수값을 각각 나타내는 기호 상수로 만듦. 

	union MyUnion {
		int intVal;
		long longVal;
		float floatVal;
	};

	MyUnion test;
	test.intVal = 3;
	std::cout << test.intVal << std::endl;
	test.longVal = 33;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl;

	test.floatVal = 3.3;
	std::cout << test.intVal << std::endl;
	std::cout << test.longVal << std::endl; 
	std::cout << test.floatVal << std::endl;

	enum spectrum {red, orange, yellow, green, blue, violet, indigo, ultraviolet};
	// 열거자들의 값만 대입할 수 있음
	// 열거자들 끼리의 산술연산은 불가함 ex) red+orange 불가
	// spectrum 변수에 대입할 때는 연산불가
	spectrum a = orange;
	cout << a << endl; //1이 출력

	int b; // int 변수에 대입하면 연산 가능 
	b = blue;
	b = blue + 3; //int 형 변수에 그 값을 대입하고자 할 때는 그 열거자의 값이 int로 변환되어 대입된다. 
	cout << b << endl;
	*/

	/*
	 
	C++ : 객체 지향 프로그래밍
	컴파일 시간이 아닌 실행 시간에 어떠한 결정을 내릴 수 있다. 
	- 배열 생성
	: 재래적 절차적 프로그래밍 : 배열의 크기가 미리 결정
	: 객체 지향 프로그래밍 : 배열의 크기를 실행 시간에 결정


	포인터 

	변수 선언 과정
	=> 변수는 어딘가에 저장됨 -> 그 어딘가는 주소로 표현됨
	-> 주소 연산자 &

	사용할 주소에 이름을 붙인다. 
	즉, 포인터는 포인터의 이름이 주소를 나타냅니다. 
	간접값 연산자, 간접 참조 연산자 *를 지원을 합니다. 

	// 아래 둘다 가능
	int *a; // c style
	int* b; // c++ style
	int* c, d; //c는 포인터 변수, d는 int형 변수로 선언이 됨

	*/

/*
	int a = 6;
	int* b;

	b = &a;

	cout << "a의 값 " << a << endl;
	cout << "*b의 값 " << *b << endl;

	cout << "a의 주소 " << &a << endl;
	cout << "*b의 주소 " << b << endl;

	*b = *b + 1;
	cout << "이제 a의 값은 " << a << endl;

*/
	
/*
 포인터
 new
 어떤 데이터 형을 원하는지 new 연산자에 알려주면 얘는 그에 맞는 크기의 메모리 블록을 찾고, 그 블록의 주소를 리턴함

*/

	int* po = new int; //4 bytes 크기의 블록을 할당하고, 그 주소값을 반환함
	//=> 데이터의 객체를 가리키고 있다. 

	// new <-> delete
	// 사용한 메모리를 다시 메모리 풀로 환수

	delete po;
	// 1. new로 대입한 메모리만 delete로 해제 가능
	// 2. delete 두번 불가
	// 3. new[]로 메모리를 대입할 경우, delete[]로 해제
	// 4. 대괄호를 사용하지 않았다면, delete도 대괄호를 사용하지 않는다. 


	double* p3 = new double[3]; // 대괄호로 메모리를 할당하였기 때문에, double 3개를 넣을 수 있는 메모리를 p3가 가리키게 됨, 배열이기 때문에 이 경우 p3가 배열 이름이 됨
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << p3 << endl;
	cout << "p3[1] is " << p3[1] << "\n";

	p3 = p3 + 1; //포인터 변수에 1, 2를 더할 때의, 1과 2는 double 형 데이터 1개의 메모리 크기를 의미한다. 
	cout << p3 << endl;

	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << "\n";

	p3 = p3 - 1;
	delete[] p3;

	return 0;
}