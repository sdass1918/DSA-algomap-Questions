#include <bits/stdc++.h>
using namespace std;


//Implemented using some extra space of O(n^2) and with the time complexity of O(n^2)
void rotate(vector<vector<int>>& matrix) {
    int n = matrix.size();
    vector<vector<int>> ans(n, vector<int>(n));
        
    for(int i=0; i<n; i++)
    {
        for(int j=0; j<n; j++)
        {
        	ans[j][n-1-i] = matrix[i][j];
        }
    }
    for(int i=0; i<ans.size(); i++){
        for(int j=0; j<ans.size(); j++){
            cout<<ans[i][j]<<" ";
        }
        cout<<endl;
    }
}

//Efficient Solution which has been implemented using two steps transposition and reversing each row

void rotate(vector<vector<int>>& matrix) {
    for(int i=0; i<matrix.size()-1; i++)
    {
        for(int j=i+1; j<matrix.size(); j++)
        {
            if(i!=j)
            {
                swap(matrix[i][j], matrix[j][i]);
            }
        }
    }
    for(int i=0; i<matrix.size(); i++)
    {
        reverse(matrix[i].begin(), matrix[i].end());
    }
    for(int i=0; i<matrix.size(); i++){
        for(int j=0; j<matrix.size(); j++){
            cout<<matrix[i][j]<<" ";
        }
        cout<<endl;
    }
}




int main()
{
#ifndef ONLINE_JUDGE
    freopen("input.txt", "r", stdin);
    freopen("output.txt", "w", stdout);
#endif

	vector<vector<int>> v(3, vector<int>(3));
	for(int i=0; i<3; i++){
		for(int j=0; j<3; j++){
			cin>>v[i][j];
		}
	}
	rotate(v);
}
