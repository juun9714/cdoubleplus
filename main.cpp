#include <iostream> //��ó�� ������
#include <climits>

/*
C++���� �Լ��� ����ϰ��� �Ѵٸ�, �ݵ�� �� �Լ��� ������ �̸� �����Ͽ��� �Ѵ�.
; : �������� ������ ��
C++���� �� main�̶�� �̸��� �ϴ� �Լ��� �־�� �Ѵ�.
endl : �ٹٲ�
<< : �������� �帧�� ��Ÿ��
using namespace std: std:: �����ϱ� ���ؼ� ���� ����
*/

/*
����: ���� �� �ִ� ��
���: ������ �ʴ� ��

1. �ڷ���
2. �̸�
	- ���ڷ� ������ �� ����
	- c++���� ����ϰ� �ִ� Ű����� ����� �� ���� ex) return
	- white space�� ����� �� ����
3. ��� ����Ǵ°�? (�����Ϸ��� ����)
*/

using namespace std;

int main() {

	/*

	int a; //����
	a = 7; //����
	int b = 10; //�ʱ�ȭ

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


	//char: ���� ������, a,b,c,d -> ASCII �ڵ�� ���
	// c++���� ""�� char ���� ����� �� ���� -> null ���� ������ -> �������� ���������� Ȯ���ϰ� ���ִ� null ���� �ʿ� which is '\0'
	//"" ū����ǥ�� ��� ��������� null ���ڰ� ���ԵǾ� ���� => String
	int a = 77;
	char b = 'a';

	char c[] = {'a', 'b' ,'c', '\0'}; // null ���ڸ� �Ƚ��־, ��ǻ�ʹ�  null ���ڰ� ���� ������ ��� �޸𸮿� ������ �ϴٰ� null ���ڸ� �쿬�� ������ ����
	cout << c << endl;

	//�ѱ��� �ƽ�Ű�ڵ� ���� �ȵ�

	//bool : 0 or 1, ���� or �� <= 0 �̿��� ��� ���� 1�� ���� => ��������� bool�� ��� ���� 0 �ƴϸ� 1�� ������
	bool a = 0;
	bool b = 1;
	bool c = 10;

	cout << a << b << c << endl;


	//���� ���� ���ϴ� ���α׷�
	//������*������*����
	//
	// 1. �ٲ� �ʿ䰡 ���� ��
	// 2. �ٲ��� �ȵǴ� ��
	// ���!�� ������ ������ �� ���� -> �� ���, �ʱ�ȭ�� ������θ� ���� ���� (����� ���ÿ� �Ҵ�)


	const float PIE = 3.1415926535;
	int r = 3;
	float s = r * r * PIE;

	int r2 = 5;
	float s2 = r2 * r2 * PIE;

	cout << s << endl;
	cout << s2 << endl;

	// �������� ��ȯ
	// 1. Ư�� ���������� ������ �ٸ� ���������� ���� �������� ��
	// 2. ���Ŀ� ���������� ȥ���Ͽ� ������� ��
	// 3. �Լ��� �Ű������� ������ ��

	// ���������� �������� ��ȯ
	// typeName(a) or (typeName)a or static_cast<int>(a)

	char ch = 'M';
	cout << (int)ch << "  " << int(ch) << "  " << static_cast<int>(ch) << endl;
	*/


	/*
	// ������, �ǿ�����

	int a = 3 + 2;
	cout << a << endl;

	// ���������� �� �ǿ����ڰ� ��� ������, ������� ���� ��
	// �ٵ� �� �ǿ����� �� �ϳ��� �ε��Ҽ���(�Ǽ�)�� �ȴٸ�, ������� �Ǽ����� ����

	float b = 9.0;
	int c = 5;

	cout << b / c << endl;

	//auto : ���� ���� �ڷ����� �˾Ƽ� �������ִ� ��ɾ�
	auto n = 0.0; //float
	float x = 0; //float
	auto z = 0; //int

	*/
	/*
	���� ���������� �����Ѵ�
	����� ���Ǵ�� ���ο� ���������� ���� �� �ִ�. 
	���� ��������: �⺻ �������� �ε��Ҽ������� ����
	�迭: ���� ���������� ����
	typeName arrayName[arraySize];

	*/

	/*
	
	//�迭�� ������ ����

	short month[12] = { 1,2,3 };
	cout << month << endl;

	//���ڿ� : ������ ��.
	char a[6] = { 'H','e','l','l','o','\0'};
	char b[] = "Hello"; //�ֵ���ǥ�� �ι��ڸ� �⺻������ �����ϰ� ����
	cout << a << endl;
	cout << b << endl;

	string���� ������ �ִ� Ư����
	=> �迭�� �ٸ� �迭�� ��°�� ������ �� ���µ�, string�� �����ϴ�. 
	=> ���ڿ��� ũ�⸦ �̸� ���������� �ʾƵ� �ȴ�.
	=> ���ڿ�ó�� index�ε� ���� ����

	char char1[20];
	char char2[20] = "jaguar";
	string str1;
	string str2 = "panda";
	// char1 = char2;
	str1 = str2;

	cout << str1 << endl;


	**����ü**
	������� �Ը���� ���ϴ� ���������� ���� �� ���� -> ����ü! 
	�迭 -> �� ��Ұ� ���� ���������̾�� ��
	����ü -> �������� ���������� �پ��� ���������� ���Ǵ� ������

	// �౸����


	struct MyStruct
	{
		// �Ʒ� ���� ��ҵ��� member��� �Ҹ�
		string name;
		string position;
		int height;
		int weight;
	} B;
	
	���� �� �����͸� �ϳ��� ������������ ������ �� ������ ���� ���� 
	�̷� �� ����ü�� ����ϸ� ����
	����ڰ� ������ ���ο� ���������� ����
	����ü�� ������ �ϰ�, ����ü�� ����� �����ϴ� ���� �ʱ�ȭ�� �� ����
	���������� ����� ���̶� �����ϱ� ������! 

	
	����ü�� ��� ������ : .

	cout << A.name << endl;
	cout << A.position << endl;
	cout << A.height << endl;
	cout << A.weight << endl;


	B = { 
		 �� �ȳ־��ָ� 0���� �ʱ�ȭ��
	};

	cout << B.height << endl;

	����ü ���� �迭�� ������ �� ����
	
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
	����ü(union)
	: ���� �ٸ� ���������� �� ���� �� ������ ������ �� �ִ� ��������
	: �ٸ� ���������� ���� ������ ������, ������ �����ߴ� ������ ���� �ҽǵ�
	: ���� ���������� ����� �� ������, ���ÿ� ����� ���� ���� => �޸𸮸� �Ƴ� �� ����

	����ü(enum)
	��ȣ ����� ����� �Ϳ� ���� �� �ٸ� ���
	1. spectrum�� ���ο� �������� �̸����� ����
	2. ���� ���� 0�������� 7���� �������� ���� ��Ÿ���� ��ȣ ����� ����. 

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
	// �����ڵ��� ���� ������ �� ����
	// �����ڵ� ������ ��������� �Ұ��� ex) red+orange �Ұ�
	// spectrum ������ ������ ���� ����Ұ�
	spectrum a = orange;
	cout << a << endl; //1�� ���

	int b; // int ������ �����ϸ� ���� ���� 
	b = blue;
	b = blue + 3; //int �� ������ �� ���� �����ϰ��� �� ���� �� �������� ���� int�� ��ȯ�Ǿ� ���Եȴ�. 
	cout << b << endl;
	*/

	/*
	 
	C++ : ��ü ���� ���α׷���
	������ �ð��� �ƴ� ���� �ð��� ��� ������ ���� �� �ִ�. 
	- �迭 ����
	: �緡�� ������ ���α׷��� : �迭�� ũ�Ⱑ �̸� ����
	: ��ü ���� ���α׷��� : �迭�� ũ�⸦ ���� �ð��� ����


	������ 

	���� ���� ����
	=> ������ ��򰡿� ����� -> �� ��򰡴� �ּҷ� ǥ����
	-> �ּ� ������ &

	����� �ּҿ� �̸��� ���δ�. 
	��, �����ʹ� �������� �̸��� �ּҸ� ��Ÿ���ϴ�. 
	������ ������, ���� ���� ������ *�� ������ �մϴ�. 

	// �Ʒ� �Ѵ� ����
	int *a; // c style
	int* b; // c++ style
	int* c, d; //c�� ������ ����, d�� int�� ������ ������ ��

	*/

/*
	int a = 6;
	int* b;

	b = &a;

	cout << "a�� �� " << a << endl;
	cout << "*b�� �� " << *b << endl;

	cout << "a�� �ּ� " << &a << endl;
	cout << "*b�� �ּ� " << b << endl;

	*b = *b + 1;
	cout << "���� a�� ���� " << a << endl;

*/
	
/*
 ������
 new
 � ������ ���� ���ϴ��� new �����ڿ� �˷��ָ� ��� �׿� �´� ũ���� �޸� ����� ã��, �� ����� �ּҸ� ������

*/

	int* po = new int; //4 bytes ũ���� ����� �Ҵ��ϰ�, �� �ּҰ��� ��ȯ��
	//=> �������� ��ü�� ����Ű�� �ִ�. 

	// new <-> delete
	// ����� �޸𸮸� �ٽ� �޸� Ǯ�� ȯ��

	delete po;
	// 1. new�� ������ �޸𸮸� delete�� ���� ����
	// 2. delete �ι� �Ұ�
	// 3. new[]�� �޸𸮸� ������ ���, delete[]�� ����
	// 4. ���ȣ�� ������� �ʾҴٸ�, delete�� ���ȣ�� ������� �ʴ´�. 


	double* p3 = new double[3]; // ���ȣ�� �޸𸮸� �Ҵ��Ͽ��� ������, double 3���� ���� �� �ִ� �޸𸮸� p3�� ����Ű�� ��, �迭�̱� ������ �� ��� p3�� �迭 �̸��� ��
	p3[0] = 0.2;
	p3[1] = 0.5;
	p3[2] = 0.8;

	cout << p3 << endl;
	cout << "p3[1] is " << p3[1] << "\n";

	p3 = p3 + 1; //������ ������ 1, 2�� ���� ����, 1�� 2�� double �� ������ 1���� �޸� ũ�⸦ �ǹ��Ѵ�. 
	cout << p3 << endl;

	cout << "Now p3[0] is " << p3[0] << " and ";
	cout << "p3[1] is " << p3[1] << "\n";

	p3 = p3 - 1;
	delete[] p3;

	return 0;
}