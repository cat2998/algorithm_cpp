#include <iostream>
#include <string>
#include <map>

using namespace std;
 
int main() {
    map<int, string> map;
 
    // insert 
    cout << "-----insert-----\n";
    map.insert(make_pair(3, "red"));
    map.insert(make_pair(1, "blue"));
    map[5] = "black";
 
    // 인덱스 기반 반목문으로 iterator을 활용하여 begin()부터 end()까지 찾는다.
    for (auto iter = map.begin(); iter != map.end(); iter++) {
        // make_pair 형식으로 저장 했으므로
        // key 값은 fisrt 로 접근 value 값은 second 로 접근한다.
        cout << "key : " << iter->first << " , value : " << iter->second << "\n";
    }
    cout << "key 값에 따라 자동정렬된 모습을 볼 수 있다.\n\n";

    // find
    cout << "-----find-----\n";
    cout << "key : 5 인 Value : ";
    cout << map.find(5)->second << "\n\n";

    // earse
    cout << "-----earse-----\n";
    map.erase(3);

    // 범위기반 반복문
	for (auto iter : map) {
		cout << "key : " << iter.first << " , value : " << iter.second << "\n";
	}

    return 0;
}