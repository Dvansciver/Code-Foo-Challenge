//Daniel Van Sciver

using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;

namespace KTSolution
{
    class KnightsTour
    {
        bool[,] board = new bool[8, 8];
        public List<movement> moves = new List<movement>();
        int _width;
        int _height;
        int squares;

        public KnightsTour(int width, int height)
        {
            board = new bool[width, height];
            _width = width;
            _height = height;
            squares = width * height;
        }

        // Takes the starting point and looks at the move branching from it with the lowest degree to move to
        public void Move(movement start)
        {
            if (start.x == -1)
            {
                return;
            }

            board[start.x, start.y] = true;
            moves.Add(start);

            if (moves.Count < squares)
            {
                Move(getLowestDegree(start.x, start.y));
            }
        }

        //Checks all the move degrees from each starting move branch to see which contains the lowest
        movement getLowestDegree(int x, int y)
        {
            int lowest = 9;
            int temp;
            movement m = new movement();
            m.x = -1;
            m.y = -1;

            //up 2 left 1
            if (isValid(x - 2, y - 1))
            {
                temp = getDegree(x - 2, y - 1);

                if (temp <= lowest)
                {
                    m.x = x - 2;
                    m.y = y - 1;
                    lowest = temp;
                }
            }

            //up 2 right 1
            if (isValid(x - 2, y + 1))
            {
                temp = getDegree(x - 2, y + 1);

                if (temp <= lowest)
                {
                    m.x = x - 2;
                    m.y = y + 1;
                    lowest = temp;
                }
            }

            //down 2 left 1
            if (isValid(x + 2, y - 1))
            {
                temp = getDegree(x + 2, y - 1);

                if (temp <= lowest)
                {
                    m.x = x + 2;
                    m.y = y - 1;
                    lowest = temp;
                }
            }

            //down 2 right 1
            if (isValid(x + 2, y + 1))
            {
                temp = getDegree(x + 2, y + 1);

                if (temp <= lowest)
                {
                    m.x = x + 2;
                    m.y = y + 1;
                    lowest = temp;
                }
            }

            // up 1 right 2
            if (isValid(x - 1, y + 2))
            {
                temp = getDegree(x - 1, y + 2);

                if (temp <= lowest)
                {
                    m.x = x - 1;
                    m.y = y + 2;
                    lowest = temp;
                }
            }

            // up 1 left 2
            if (isValid(x - 1, y - 2))
            {
                temp = getDegree(x - 1, y - 2);

                if (temp <= lowest)
                {
                    m.x = x - 1;
                    m.y = y - 2;
                    lowest = temp;
                }
            }

            // down 1 left 2
            if (isValid(x + 1, y - 2))
            {
                temp = getDegree(x + 1, y - 2);

                if (temp <= lowest)
                {
                    m.x = x + 1;
                    m.y = y - 2;
                    lowest = temp;
                }
            }

            // down 1 right 2
            if (isValid(x + 1, y + 2))
            {
                temp = getDegree(x + 1, y + 2);

                if (temp <= lowest)
                {
                    m.x = x + 1;
                    m.y = y + 2;
                    lowest = temp;
                }
            }

            return m;
        }

        //If the move is legal we keep track to use the count as the degree
        int getDegree(int x, int y)
        {
            int count = 0;
            if (isValid(x - 2, y - 1))
            {
                count++;
            }
            
            if (isValid(x - 2, y + 1))
            {
                count++;
            }

            if (isValid(x + 2, y - 1))
            {
                count++;
            }

            if (isValid(x + 2, y + 1))
            {
                count++;
            }

            if (isValid(x - 1, y - 2))
            {
                count++;
            }

            if (isValid(x - 1, y + 2))
            {
                count++;
            }

            if (isValid(x + 1, y - 2))
            {
                count++;
            }

            if (isValid(x + 1, y + 2))
            {
                count++;
            }
            return count;
        }

        // Checks to see if the move is within the bounds of the size of the board
        bool isValid(int x, int y)
        {
            if (x < _width && x >= 0 && y < _height && y >= 0)
            {
                if (!board[x, y])
                {
                    return true;
                }
            }
            return false;
        }
    }
}