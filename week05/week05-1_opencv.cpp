#include <opencv/highgui.h>
int main()
{
    ///Ipl=Intel performance library
    IplImage * img = cvLoadImage("C:/0.jpg");
    cvShowImage("week05",img);
    cvWaitKey(0);
}
