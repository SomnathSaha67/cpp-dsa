#include <iostream>
#include <vector>
using namespace std;

vector<int> rowSums(const vector<vector<int>> &matrix){
  int rows= matrix.size();
  vector<int> sums(rows, 0);

  for (int i=0; i<rows; i++){
    for (int j=0; j<matrix[i].size(); j++){
      sums[i] += matrix[i][j];
    }
  }
  return sums;
}

vector<int> colSums(const vector<vector<int>> &matrix){
  int rows= matrix.size();
  int maxCols=0;
  for (const auto &row: matrix){
    if (row.size()>maxCols) maxCols= row.size();
  }
  vector<int> sums(maxCols, 0);
  
  for (int i=0; i< rows; i++){
    for (int j=0; j<matrix[i].size(); j++){
      sums[j]+= matrix[i][j];
    }
  }
  return sums;
}


int main() {
  int r;
  cout << "Enter rows: ";
  cin >> r;

  vector<vector<int>> matrix(r);

  for (int i = 0; i < r; i++) {
    int c;
    cout << "Enter number of elements in row " << i + 1 << ": ";
    cin >> c;
    matrix[i].resize(c);
    for (int j = 0; j < c; j++) {
      cin >> matrix[i][j];
    }
  }

  cout << "\nMatrix:\n";
  for (int i = 0; i < r; i++) {
    for (int j = 0; j < matrix[i].size(); j++) {
      cout << matrix[i][j] << " ";
    }
    cout << endl;
  }

  vector<int> rs = rowSums(matrix);
  vector<int> cs = colSums(matrix);

  cout << "\nRow sums:\n";
  for (int i = 0; i < r; i++) {
    cout << "Row " << i + 1 << ": " << rs[i] << endl;
  }

  cout << "\nColumn sums:\n";
  for (int j = 0; j < cs.size(); j++) {
    cout << "Column " << j + 1 << ": " << cs[j] << endl;
  }

    return 0;
}