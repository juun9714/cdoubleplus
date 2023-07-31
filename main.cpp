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
	*/


	return 0;
}