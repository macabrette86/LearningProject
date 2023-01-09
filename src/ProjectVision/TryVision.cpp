#include <opencv2/opencv.hpp>
#include <stdio.h>
using namespace cv;
using namespace std;

int main()
{
    // Read image
    Mat img = imread("../resources/grayscale.jpg");
    // Print Error message if image is null
    if (img.empty())
        {
            cout << "Could not read image" << endl;
        }
    // Draw line on image
    Mat imageLine = img.clone();
    Point pointA(350,270);
    Point pointB(550,270);
    Point pointC(450,170);
    Point pointD(450,370);
    Mat circle_image = img.clone();
    // define the center of circle
    line(circle_image, pointA, pointB, Scalar(255, 255, 0), 3, 8, 0);
    line(circle_image, pointC, pointD, Scalar(255, 255, 0), 3, 8, 0);
    Point circle_center(450,270);
    // define the radius of circle
    int radius = 100;
    // Draw a circle using the circle() Function
    circle(circle_image, circle_center, radius, Scalar(0, 0, 255), 3, 8, 0);
    circle(circle_image, circle_center, 10, Scalar(0, 0, 255), -1, 8, 0);
    // Display the result
    imshow("Circle on Image", circle_image);
    waitKey();
}
