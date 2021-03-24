/**
 * Demo program for message-board exercise.
 * 
 * Author: Erel Segal-Halevi
 * Since : 2021-03
 */

#include "Board.hpp"
#include "Direction.hpp"
using ariel::Direction;

#include <iostream>
#include <stdexcept>
using namespace std;

int main() {
	ariel::Board test;
	//  board.post(/*row=*/0, /*column=*/5, Direction::Horizontal, "abcd");
	// cout << board.read(/*row=*/99, /*column=*/201, Direction::Vertical, /*length=*/3) << endl;  
	// 	// prints "_b_" (starts at row 99 which is empty; then at row 100 there is "b"; then row 101 is empty again).
	// board.post(/*row=*/99, /*column=*/202, Direction::Vertical, "xyz");
	// cout << board.read(/*row=*/100, /*column=*/200, Direction::Horizontal, /*length=*/6) << endl;  
	// 	// prints "abyd__" (First letters are ab; then y from the "xyz"; then d; then two empty cells).
	test.post(0,0,Direction::Horizontal,"hello");//6
	test.post(1,2,Direction::Vertical,"my");//2
	test.post(2,4,Direction::Horizontal,"name");//4
	test.post(3,6,Direction::Vertical,"is");//2
	test.post(4,8,Direction::Horizontal,"tommy");//5
	test.post(5,10,Direction::Vertical,"how");//3
	test.post(6,12,Direction::Horizontal,"are");//3
	test.post(7,14,Direction::Vertical,"you");//3
	test.post(8,16,Direction::Horizontal,"today");//5
	test.post(9,18,Direction::Vertical,"?");//1


	test.show(); // shows the board in a reasonable way. For example:
		//    98:  _________
		//    99:  ____x____
		//    100: __abyd___
		//    101: ____z____
		//    102: _________
}

