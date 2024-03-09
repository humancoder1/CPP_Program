#include<bits/stdc++.h>
using namespace std;


int char_count(string S){
    int last_ch = 1;
    for(int i = S.size()-2 ; i > 0 ; i--){
        if(S[i] == S[S.size()-1]){
            last_ch++;
            break;
        }
    }
    // cout << last_ch << endl;
    return last_ch;
}

int Substring_length(string s){
	int ans = 1, count = 1;

	for (int i = 1; i < s.size(); i++) {
		if (s[i] == s[i - 1]) {
			++count;
		}
		else {
			ans = max(ans, count);
			count = 1;
		}
	}
	ans = max(ans, count);
	return ans;
}

void Solve(string S , int N , int Q){
    int last_ch_count = char_count(S);
    // cout << "last_ch_count : "<< last_ch_count << endl;
    int max_substr_length = Substring_length(S);
    char ele ;
    char last_char = S[S.size()-1];
    cout << max_substr_length ;
    for(int i = 0 ; i < Q ; i++){
        cin >> ele;
        if(ele == last_char){
            last_ch_count++;
            // cout << "count : "<< last_ch_count << endl;
        }
        else{
            last_char = ele;
            last_ch_count = 1;
        }
        max_substr_length = max(max_substr_length , last_ch_count);
        cout << " " << max_substr_length ;
        // cout << last_char;
    }
    cout << endl;
}


int main(){
    int test_case ;
    cin >> test_case;
    while(test_case--){
        int N , Q;
        cin >> N >> Q;
        string S;
        cin >> S;
        Solve(S, N , Q);
    }
    return 0;
}