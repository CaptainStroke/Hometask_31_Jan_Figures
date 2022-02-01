// 1. Написать программу, которая выводят на экран ромб(длины диагоналей ромба одинаковы по значению,
//но могут быть равны любому числу).
//Затем сделать то же самое, но чтоб фигура внутри была пустая(остаётся только контур).

//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//    int width;
//    cout << "Enter the number size(better odd) of Rombus. - ";
//    cin >> width;
//    int height = width;
//    for (int y = 0; y < height; y++)
//    {
//        for (int x = 0; x < width; x++)
//        {      // 3rd quadrant        1st quadrant         4th quadrant           2nd quadrant
//            if ( y == x + width/2 || y == x - width / 2 ||  y == width/2 - x|| y == (width * 3 / 2) - 1 - x) 
//            {
//                cout << "*";
//            }
//            else
//            {
//                cout << " ";
//            }
//        }
//        cout << "\n";
//    }
//}

//2. Вывести на экран каркас параллелепипеда размерностью AxBxC.

#include <iostream>
#include <Windows.h>
using namespace std;
int main()
{
	    int width = 19;
		int height = 19;
		int depth = 10;
	    char symbol = 178;
	    for (int y = 0; y < height; y++)
	    {
	        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
	
	        for (int x = 0; x < width; x++)
	        {
	            
	             if (x == 1 && y <= 10 && y >= 5 || x == 9 && y <= 10 && y >= 5 || x == 4 && y <= 7 && y >= 2 || x == 12 && y <= 7 && y >= 2)
	            {
	                 
	                SetConsoleTextAttribute(h, 12); // light blue diagonals
	
	            }
				 else if (y == 7 && x <= 11 && x >= 5 || y == 2 && x <= 11 && x >= 5 || y == 10 && x <= 8 && x >= 2 || y == 5 && x <= 8 && x >= 2)
				{

					 SetConsoleTextAttribute(h, 11); // light blue diagonals

				}
				 else if (y == width / 2 - x -3 && x<= 4 && x >= 1 || y == width / 2 - x + 2 && x <= 4 && x >= 1 || y == width / 2 - x + 5 && x <= 12 && x >= 9 || y == width / 2 - x +10 && x <= 12 && x >= 9)
				 {
					 SetConsoleTextAttribute(h, 10); // light blue diagonals
				 }
	           
	            else
	            {
	                 
	                SetConsoleTextAttribute(h, 9); // blue triangles
		            }
	            cout << symbol << symbol;
	        }
	        cout << "\n";
		    }
	}



//3. Вывести лестницу из отрезков определённой длины.Длина(например, 14) и количество ступенек(например, 4) указывается с клавиатуры.
//* *************
//**************
//**************
//**************

//4. Показать на экране лесенку. Количество ступенек(например, 5) указывает пользователь.
//
//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//    int width = 9;
//    cout << "Enter the number size(better odd) of Rombus. - \n";
//   // cin >> width;
//    int height = width;
//    for (int y = 0; y < height; y++)
//    {
//        for (int x = 0, z = 0; x < width; x++)
//        {      // 3rd quadrant        1st quadrant         4th quadrant           2nd quadrant
//            if(y *2 == x  || y*2 == x + 2)
//            {
//                cout << "*";
//            }
//            else if (y *2 + 1 == )
//            {
//                cout << "\n0";
//            }
//        }
//        cout << "\n";
//        
//    }
//}




//5. Пользователь указывает с клавиатуры нечётное число.Рисуется фигура с заданной стороной :

//6.  Необходимо  нарисовать ёлочку. С клавиатуры вводится количество ярусов, и высота каждого яруса ёлочки.
//Например, на картинке 4 яруса, высота каждого яруса – 5 символов.



//#include <iostream>
//#include <Windows.h>
//using namespace std;
//int main()
//{
//
//    int width = 12;
//    int height = 10;
//    char symbol = 178;
//    for (int y = 0; y < height; y++)
//    {
//        HANDLE h = GetStdHandle(STD_OUTPUT_HANDLE);
//
//        for (int x = 0; x < width; x++)
//        {
//            
//             if (x == y || x + 1 == y || x + 2 == y )
//            {
//                 
//                SetConsoleTextAttribute(h, 12); // light blue diagonals
//
//            }
//           
//            else
//            {
//                 cout << "  ";
//                SetConsoleTextAttribute(h, 9); // blue triangles
//
//            }
//            cout << symbol << symbol;
//        }
//        cout << "\n";
//        for (int x = 0; x < width; x++)
//        {
//
//            if (x == y + 2 && x + 1 == y && x + 2 == y)
//            {
//                SetConsoleTextAttribute(h, 3); // light blue diagonals
//            }
//            if (x == y )
//            { 
//                cout << "  ";
//                SetConsoleTextAttribute(h, 6); // light blue diagonals
//            }
//            else
//            {
//                SetConsoleTextAttribute(h, 9); // blue triangles
//                
//            }
//            cout << symbol << symbol;
//        }
//        cout << " \n";
//    }
//}