#include <iostream>
#include <string>
using namespace std;

int main() {

	string s = "";
    cin >> s;
    int n ;
    cin >> n;
    int con;
    for(int i = 0;i < n; i ++){
        cin >> con;
        switch(con){
            case 1:
                char temp;
                int a,b;
                cin >> a >> b;
                temp =s[b-1];
                s[b-1] = s[a-1];
                s[a-1] = temp;
                cout <<s << endl;
                break;
            case 2:
                char c,d;
                cin >> c >> d;
                for(int j = 0; j < s.length(); j ++){
                    if(s[j] == c){
                        s[j] = d;
                    }
                }
                cout << s << endl;
                break;
        }

    }
	return 0;

}