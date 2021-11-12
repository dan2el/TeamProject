#include <iostream>
#include <map>
#include <string>
#include <utility>

using namespace std;

// map은 원소를 key와 value의 쌍으로 이루어져 있으며 pair 객체 형태로
// 저장됩니다. 저장된 원소들은 오름차순으로 자동 정렬됩니다.

int main() {
  map<int, string> M;

  M.insert(make_pair(1, "item1"));
  M.insert(make_pair(3, "item3"));
  M.insert(make_pair(2, "item2"));

  map<int, string>::iterator iter;

  for (iter = M.begin(); iter != M.end(); ++iter) {
    cout << "Item Number : " << (*iter).first
         << " Item Name : " << (*iter).second << endl;
  }
  return 0;
}