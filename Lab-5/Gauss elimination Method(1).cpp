#include <bits/stdc++.h>
#define Naba ios_base::sync_with_stdio(false);cin.tie(0);cout.tie(0);
using namespace std;

int main() {
    Naba

    int n = 3;
    double a[3][4];  // Augmented matrix: 3x4 for 3 equations

    cout << "Enter coefficients and constants for 3 equations:\n";
    cout << "(Each row should be: a1 a2 a3 b)\n";
    for (int i = 0; i < n; i++) {
        cout << "Equation " << i + 1 << ": ";
        for (int j = 0; j < n + 1; j++) {
            cin >> a[i][j];
        }
    }

    // Forward elimination
    for (int i = 0; i < n; i++) {
        for (int j = i + 1; j < n; j++) {
            double factor = a[j][i] / a[i][i];
            for (int k = i; k < n + 1; k++) {
                a[j][k] -= factor * a[i][k];
            }
        }
    }

    double x[3];

    // Back substitution
    for (int i = n - 1; i >= 0; i--) {
        x[i] = a[i][n];
        for (int j = i + 1; j < n; j++) {
            x[i] -= a[i][j] * x[j];
        }
        x[i] /= a[i][i];
    }

    // Print solution
    cout << "\nSolution:\n";
    for (int i = 0; i < n; i++) {
        cout << "x" << i + 1 << " = " << x[i] << endl;
    }

    return 0;
}





// #include<bits/stdc++.h>
// using namespace std;
// int main(){

// 	int n;	cin >> n;
// 	float arr[10][10],x[10];
// 	for(int i=1;i<=n;i++){
// 		for(int j=1;j<=n+1;j++){
// 			cin >> arr[i][j];
// 		}
// 	}
// 	float ratio;
// 	for(int i=1;i<=n-1;i++){
// 		for(int j=i+1;j<=n;j++){
// 			ratio = arr[j][i]/arr[i][i];
// 			for(int k=1;k<=n+1;k++){
// 				arr[j][k] = arr[j][k]-ratio*arr[i][k];
// 			}
// 		}
// 	}
// 	x[n] = arr[n][n+1]/arr[n][n];
// 	for(int i=n-1;i>=1;i--){
// 		x[i] = arr[i][n+1];
// 		for(int j=i+1;j<=n;j++){
// 			x[i] = x[i]-arr[i][j]*x[j];
// 		}
// 		x[i] = x[i]/arr[i][i];
// 	}

// 	for(int i=1;i<=n;i++){
// 		cout << x[i] << endl;
// 	}
// }
