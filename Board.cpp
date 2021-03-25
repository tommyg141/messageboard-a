#include <iostream>
#include "Board.hpp"
#include <utility>
using namespace std;
namespace ariel {
    void Board::post (unsigned int row, unsigned int column, Direction direction, string message){
      if(max_col<column+message.length()){
          max_col= column+message.length();
      }
        if(max_row<row+message.length()){
          max_row= row+message.length();
      }
      if(min_col>column){
          min_col = column;
      }
      if(min_row>row){
          min_row = row;
      }
    if(Direction::Horizontal==direction){
        for(uint i =0 ;i<message.length();i++){
             board[{row,column+i}]=message.at(i);
                }
            }
    else{
         for(uint i =0 ;i<message.length();i++){
             board[{row+i,column}]=message.at(i);
            }
        }
    }
  
    string Board::read(unsigned int row, unsigned int column, Direction direction, uint length){
        
        std::string ans= "";
        if(Direction::Horizontal==direction){
            for(uint i =0 ;i<length;i++){
            char temp = '_';
            try
            {
            temp = board.at({row,column+i});
            }
            catch(const std::exception& e)
            {

            }
            
          
            ans += temp;
                }
            }
    else{
            for(uint i =0 ;i<length;i++){
                char temp = '_';
            try
            {
            temp = board.at({row+i,column});
            }
             catch(const std::exception& e)
            {}
              
            ans+= temp;
            }
        }
        
        
        return ans;
    }
    void Board::show (){
        cout<<to_string(max_row)<<endl;
       for(unsigned int i=min_row;i<max_row;i++){
           cout<<to_string(i)+":\t";
            cout<<Board::read(i,min_col,Direction::Horizontal,max_col-min_col);
       cout<<endl;
       }
       cout<<endl;
    }

}