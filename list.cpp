/*
list 템플릿 클래스는 이중 링크드 리스트를 나타냅니다. 첫 번째 원소와 마지막
원소를 제외하고 각 원소들은 앞뒤로 하나씩 링크되어 있어. 그 리스트는 전후방으로
훑고 지나갈 수 있습니다.

list와 vector의 가장 큰 차이는 list는 원소들의 신속한 삽입과 삭제를 강조하고
vector는 임의 접근을 통한 빠른 접근을 강조합니다. 그리고 list는 배열 표기와 임의
접근을 지원하지 않습니다.

vector 이터레이터와 다르게 list 이터레이터는 원소들이 컨테이너에 삽입되거나
컨테이너로부터 삭제된 후에도 같은 원소를 지시합니다. 리스트에 새로운 원소를
삽입하는 것은 기존의 원소들을 옮기지 않고 링크 정보만 변경합니다. 특정 원소를
지시하는 이터레이터는 여전히 같은 원소를 지시하지만. 이전과는 다른 원소들에
링크될 수도 있습니다.

list 템플릿 클래스는 list 지향적인 멤버 함수들을 가지고 있습니다. 다음 표에
정리해놓았습니다.

---------------------------------------------------------------------------

void merge(list<T, Alloc> & x);
-> 리스트 x를 호출한 리스트와 합병한다 두 리스트가 모두 정렬되어 있어야 한다.
결과로 얻어지는 정렬된 리스트는 호출한 리스트에 남게 되고 x는 비게 된다.

void remove(const T & val);
-> 리스트에 들어 있는 모든 val을 삭제한다.

void sort();
-> 리스트를 정렬한다. (디폴트는 오름차순)

void splice(iterator pos, list<T,Alloc> x);
-> pos 위치 앞에 리스트 x의 내용을 삽입한다. x는 비워지게 된다.

void unique();
-> 같은 원소들의 연속된 그룹을 하나의 원소로 만든다.

----------------------------------------------------------------------------
*/
#include <iostream>
#include <list>

using namespace std;

int main() {
  list<int> lst;

  lst.push_back(2);
  lst.push_back(1);
  lst.push_back(3);
  lst.push_back(5);
  lst.push_back(4);

  list<int>::iterator iter;

  for (iter = lst.begin(); iter != lst.end(); ++iter) {
    cout << *iter << endl;
  }
  lst.sort();
  cout << "<오름차순 정렬 후>" << endl;

  for (iter = lst.begin(); iter != lst.end(); ++iter) {
    cout << *iter << endl;
  }
  return 0;
}