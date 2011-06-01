using System;
using System.Collections.Generic;
using System.Linq;
using System.Text;
using System.Drawing;
using System.IO;

namespace KTSolution
{
    class Drawing
    {
        public static string WriteImageFile(
            List<movement> knightTourSequence, decimal width, bool showlines = true, bool showdots = true, string pngFilename = @"output.png")
        {
            if ((knightTourSequence == null) || (knightTourSequence.Count == 0))
            {
                if (File.Exists(pngFilename))
                {
                    File.Delete(pngFilename);
                }

                return null;
            }

            const int BlockPixelSize = 31;
            const int CirclePixelSize = 5;
            int SideLength = Convert.ToInt32(width);
            int TotalPixelSize = SideLength * BlockPixelSize;
            int BlockCenter = (int)Math.Round((double)BlockPixelSize / 2);
            using (var image = new Bitmap(TotalPixelSize, TotalPixelSize))
            using (var graphics = Graphics.FromImage(image))
            {
                graphics.Clear(Color.White);
                for (int y = 0; y < SideLength; y++)
                {
                    for (int x = (y % 2); x < SideLength; x += 2)
                    {
                        graphics.FillRectangle(
                            Brushes.Gray,
                            (x * BlockPixelSize),
                            (y * BlockPixelSize),
                            BlockPixelSize,
                            BlockPixelSize);
                    }

                    if (showdots)
                    {
                        for (int x = 0; x < SideLength; x++)
                        {
                            if (y == knightTourSequence[0].y && x == knightTourSequence[0].x)
                            {
                                graphics.FillEllipse(
                                    Brushes.Green,
                                    ((x * BlockPixelSize) + BlockCenter - (CirclePixelSize+5 >> 1)),
                                    ((y * BlockPixelSize) + BlockCenter - (CirclePixelSize+5 >> 1)),
                                    CirclePixelSize+5,
                                    CirclePixelSize+5);
                            }
                            else if (y == knightTourSequence[knightTourSequence.Count - 1].y && x == knightTourSequence[knightTourSequence.Count - 1].x)
                            {
                                graphics.FillEllipse(
                                    Brushes.Red,
                                    ((x * BlockPixelSize) + BlockCenter - (CirclePixelSize+5 >> 1)),
                                    ((y * BlockPixelSize) + BlockCenter - (CirclePixelSize+5 >> 1)),
                                    CirclePixelSize+5,
                                    CirclePixelSize+5);
                            }
                            else
                            {
                                graphics.FillEllipse(
                                    Brushes.Black,
                                    ((x * BlockPixelSize) + BlockCenter - (CirclePixelSize >> 1)),
                                    ((y * BlockPixelSize) + BlockCenter - (CirclePixelSize >> 1)),
                                    CirclePixelSize,
                                    CirclePixelSize);
                            }
                        }
                    }
                }

                if (showlines)
                {
                    int startX, startY, endX, endY;
                    startX = (((knightTourSequence[0].x) % SideLength) * BlockPixelSize) + BlockCenter;
                    startY = ((knightTourSequence[0].y) * BlockPixelSize) + BlockCenter;
                    for (int i = 1; i < knightTourSequence.Count; i++)
                    {
                        endX = (((knightTourSequence[i].x) % SideLength) * BlockPixelSize) + BlockCenter;
                        endY = ((knightTourSequence[i].y) * BlockPixelSize) + BlockCenter;
                        graphics.DrawLine(Pens.Black, startX, startY, endX, endY);
                        startX = endX;
                        startY = endY;
                    }
                }

                image.Save(pngFilename, System.Drawing.Imaging.ImageFormat.Png);
            }

            return pngFilename;
        }
    }
}
