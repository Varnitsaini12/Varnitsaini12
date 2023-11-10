#include <iostream>
#include <queue>

using namespace std;

struct Cell {
  int row;
  int col;
  int grade;
  int distance;

  bool operator<(const Cell& other) const {
    return this->grade < other.grade;
  }
};

int main() {
  int m, n, rangeLow, rangeHigh, startRow, startCol, numSeats;
  cin >> m >> n >> rangeLow >> rangeHigh >> startRow >> startCol >> numSeats;

  int grid[m][n];
  for (int i = 0; i < m; i++) {
    for (int j = 0; j < n; j++) {
      cin >> grid[i][j];
    }
  }

  priority_queue<Cell> pq;
  pq.push({startRow, startCol, grid[startRow][startCol], 0});

  int i = 0;
  while (!pq.empty() && i < numSeats) {
    Cell cell = pq.top();
    pq.pop();

    if (cell.grade >= rangeLow && cell.grade <= rangeHigh) {
      cout << cell.row << " " << cell.col << endl;
      i++;
    }

    if (cell.row - 1 >= 0) {
      pq.push({cell.row - 1, cell.col, grid[cell.row - 1][cell.col], cell.distance + 1});
    }

    if (cell.row + 1 < m) {
      pq.push({cell.row + 1, cell.col, grid[cell.row + 1][cell.col], cell.distance + 1});
    }

    if (cell.col - 1 >= 0) {
      pq.push({cell.row, cell.col - 1, grid[cell.row][cell.col - 1], cell.distance + 1});
    }

    if (cell.col + 1 < n) {
      pq.push({cell.row, cell.col + 1, grid[cell.row][cell.col + 1], cell.distance + 1});
    }
  }

  return 0;
}
