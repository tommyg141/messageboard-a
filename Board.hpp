#pragma once
#include "Direction.hpp"
#include <string>
#include <vector>
namespace ariel{
    class Board{
      unsigned int ROW;
      unsigned int CAL;
     std::vector<std::vector<char>> board;
      public:
      Board(){
     board = std::vector<std::vector<char>>(35,std::vector<char>(35,'_'));
      };

       void post(uint  row, uint column, Direction direction, std::string message);
        static std::string read(uint row, uint column, Direction direction,  uint length);
        void show();
    };

}