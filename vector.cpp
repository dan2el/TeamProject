#include <iostream>
#include <locale>
#include <vector>

using namespace std;

/*
vector는 동적 배열로서 객체를 삽입하거나 제거할 때 자동으로 크기를 조정하는
능력을 갖습니다.

vector 템플릿 클래스는 일부 STL 컨테이너들만이 가지고 있는 몇 가지 메서드들을
가지고 있습니다.

push_back()이라는 간단한 메서드는 백터의 끝에 하나의 원소를 추가합니다.

이 함수를 실행하는 동안 이 메서드는 메모리 관리에 관여하여 백터의 끝에 멤버를
추가할 수 있도록

백터의 크기를 늘립니다. 즉 다음과 같은 코드를 작성할 수 있습니다.
*/

int main() {

  //   예제 1
  vector<int> Numvec;
  Numvec.push_back(1);
  Numvec.push_back(2);
  Numvec.push_back(3);

  vector<int>::iterator iter;

  for (iter = Numvec.begin(); iter != Numvec.end(); ++iter) {
    cout << *iter << "번째 원소 : " << *iter << endl;
  }

  // 예제 2
  vector<int> Number;
  int temp;

  cout << "양수 입력 ㄱㄱ, 그만할거면 양수 ㄴㄴ" << endl;

  while (cin >> temp && temp > 0) {
    Number.push_back(temp);
    Number.shrink_to_fit();
  }

  cout << Number.size() << "개의 양수가 입력되었습니다." << endl;
  Number.erase(Number.begin(), Number.begin() + 2);
  cout << Number.size() << "개의 양수가 남았습니다." << endl;

  return 0;
}
