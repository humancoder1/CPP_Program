#include<bits/stdc++.h>
using namespace std;

int Solve(vector<pair<int,int>> arr){
    int match_player = 0;
    int max_points = 0;
    int points = 0;
    for(int i = 0 ; i < 22 ; i++){
        points = (arr[i].first + (arr[i].second*20));
        // cout << points << " " ;
        if(points > max_points){
            max_points = points;
            match_player = i;
        }

    }
    cout << endl;
    return (match_player+1);
}

int main(){
    int T;
    cin >> T;
    while(T--){
        vector<pair<int,int>> players;
        int runs;
        int scores;

        for(int i = 0 ; i < 22 ; i++){
            cin >> runs ;
            cin >> scores;
            players.push_back({runs , scores});
        }
        cout << Solve(players) << endl;
    }
    return 0 ;
}