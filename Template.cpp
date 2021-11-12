/*
템플릿은 매개변수화 되는 테이터형을 제공한다. 즉 템플릿은 클래스나
함수설계도에 데이터형 이름을 매개변수로 넘겨줄수 있다.

템플릿은 함수 템플릿과 클래스 템플릿이 있다.
*/

#include <iostream>
#include <string>

using namespace std;

//함수 템플릿
template <typename T> T sum(T V1, T V2) { return V1 + V2; }

//클래스 템플릿
template <class T> class Person {
  string _name;
  T _height;

public:
  Person(string name, T height); // 생성자
  void printinfo();
};

template <class T> Person<T>::Person(string name, T height) {
  _name = name;
  _height = height;
}

template <class T> void Person<T>::printinfo() {
  cout << "name : " << _name << endl;
  cout << "height : " << _height << endl;
}

/*
템플릿 클래스를 사용할 때 주의할 점은 템플릿을 프로그램에 포함시키는
것만으로는 템플릿 클래스가 생성되지 않는다는 것입니다. 템플릿 클래스를
생성하려면 구체화를 요청해야 합니다. 구체화 요청은 템플릿 클래스형 객체를
선언하되 포괄적인 데이터형 이름을 구체적인 테이터형으로 대체해야 합니다.

Person <int> P 선언을 발견했을때 컴파일러는 Person<T> 템플릿을 사용하여 클래스
선언과 메서드들의 집합을 생성 할 것입니다. 그리고  Person<int> P 선언은 T를 모두
int로 대체할 것입니다.
*/

int main() {

  // 1. 함수 템플릿
  cout << "1. 함수 템플릿" << endl;
  cout << sum<int>(5, 5) << endl;
  cout << sum<double>(5.5, 5.5) << endl;
  cout << sum<string>("Hello", "World") << endl;
  //문자열 연산의 경우 포인터 연산이 되지 않으므로 <string>으로 사용할 타입을
  //명시해줄 수 있습니다.
  //그럼 데이터형 T에 string이 들어가게 됩니다.

  // 2. 클래스 템플릿
  cout << "2. 클래스 템플릿" << endl;
  Person<int> P("Bryan", 187);
  P.printinfo();

  return 0;
}