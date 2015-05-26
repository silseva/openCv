#ifndef CAMERA_H
#define CAMERA_H

#include <opencv2/core/core.hpp>
#include <opencv2/highgui/highgui.hpp>
#include <opencv2/imgproc/imgproc.hpp>

using namespace cv;

class Camera
{

private:
    VideoCapture capture;
    Mat frame;
    Mat grayScaleFrame;


public:
    //Constructor
    Camera();
    //Destructor
    ~Camera();
    void readFrame();
    const Mat& getFrame();
    const Mat& getGrayScaleFrame();
    bool isOpened();

};

#endif // CAMERA_H
