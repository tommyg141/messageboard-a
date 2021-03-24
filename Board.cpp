#include <iostream>
#include "Board.hpp"

using namespace std;
namespace ariel {
    void Board::post (uint row, uint column, Direction direction, string message){
        if(message==""){
        __throw_invalid_argument("not inpup");
        }
        else{
            if(Direction::Horizontal==direction){
                for(uint i =0 ;i<message.length();i++){
                     board[row][column+i]=message.at(i);
                }
            }
            else{
                 for(uint i =0 ;i<message.length();i++){
                     board[row+i][column]=message.at(i);
            }
        }
    }
    }
    string Board::read(uint row, uint column, Direction direction, uint length){
        return " ";
    }
    void Board::show (){
        for(uint i=0 ; i<board.size();i++){
            cout<<to_string(i)+":\t";
            for(uint j =0 ; j<board[i].size();j++){
                cout<<board[i][j];

            }
            cout<<endl;
        }
    }

}