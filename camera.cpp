#include "camera.h"

Camera::Camera() { capture.open(0); }

Camera::~Camera()
{
    capture.release();
    frame.release();
}

void Camera::readFrame() { capture.read(frame); }

const Mat& Camera::getFrame() { return frame; }

const Mat& Camera::getGrayScaleFrame()
{
    cvtColor(frame, grayScaleFrame, CV_BGR2GRAY);
    return grayScaleFrame;
}

bool Camera::isOpened()
{
    if (capture.isOpened())
    {
        return true;
    }
    else
    {
        return false;
    }
}

