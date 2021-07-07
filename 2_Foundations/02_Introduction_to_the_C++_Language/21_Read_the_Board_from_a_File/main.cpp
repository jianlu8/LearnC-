#include <iostream>
#include <string>
#include <vector>
using std::cout;
using std::string;
using std::vector;

#include<fstream>
using std::fstream;

// TODO: Add the ReadBoardFile function here.
vector<vector<uint8_t>> ReadBoardFile(string file_path){
    fstream board_file(file_path);
    vector<vector<uint8_t>> board;
    if(board_file){
        string line;
        int i=0;
        while(getline(board_file,line)){
            cout << line << "\n";
            board[i].assign(line.begin(), line.end());
            i=i+1;
        }
    }else{
        cout<< "no such file "<< file_path << "\n";
    }
    return board;
}

// PrintBoard not used in this exercise
void PrintBoard(const vector<vector<uint8_t>> board) {
  for (int i = 0; i < board.size(); i++) {
    for (int j = 0; j < board[i].size(); j++) {
      cout << board[i][j];
    }
    cout << "\n";
  }
}

int main() {
  // TODO: Call the ReadBoardFile function here.
  string file_path = "files/1.board";
  vector<vector<uint8_t>> board = ReadBoardFile(file_path);
  // Leave the following line commented out.
  PrintBoard(board);
}
