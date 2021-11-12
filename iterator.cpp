#include <iostream>
#include <list>
#include <vector>

using namespace std;

int main() {
  /*
  이터레이터는 포인터의 일반화입니다. 각 컨테이너 클래스는 하나의 적절한
  이터레이터를 정의합니다.

  그 이터레이터의 데이터형 이름은 iterator인데 클래스 사용 범위를 가지는
  typedef입니다.

  예를 들어 vector의 double형 특수화를 위한 이터레이터를 선언하려면*/

  vector<double> vec;
  vector<double>::iterator iter; //← 위와 같이 선언할 수 있습니다. 그럼 이제
                                 //이터레이터를 사용할 수 있습니다.
  iter = vec.begin(); // iter가 첫 번째 원소를 지시하게 만든다
  *iter = 22.3; // iter를 내용 참조하여 첫 번째 원소에 값을 대입한다
  ++iter; // iter가 그 다음 원소를 지시하게 만든다.

  /*
  보다시피 이터레이터는 포인터처럼 행동합니다.

  begin()는 컨테이너에 있는 첫 번째 원소를 참조하는 이터레이터를 반환합니다.

  end()는 컨테이너에 있는 마지막 원소 바로 다음(past-the-end)을 참조하는
  이터레이터를 반환합니다.

  앞에서 list에 예문 코드에서 이 부분을 봅시다
  */
  list<int> lst;
  list<int>::iterator iter1;

  for (iter1 = lst.begin(); iter1 != lst.end(); ++iter1) {
    cout << *iter1 << endl;
  }

  /*
  lt.end() 함수는 past-the-end 위치를 인식합니다. 이터레이터를 컨테이너에 있는
  첫 번째 원소로 설정하고

  이터레이터를 계속 증가시켜 past-the-end에 도달하면 컨테이너 안에 있는 전체
  내용을 통과한 셈이 됩니다.

  따라서 컨테이너의 원소들을 모두 출력할 수 있게 됩니다.
  */

  return 0;
}