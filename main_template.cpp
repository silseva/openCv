#include <QCoreApplication>
#include <iostream>
#include <camera.h>

using namespace std;


int main(int argc, char *argv[])
{
    QCoreApplication a(argc, argv);

    Camera camera = Camera();

    namedWindow("Window", CV_WINDOW_AUTOSIZE);

    if(camera.isOpened())
    {
        while(1)
        {
            camera.readFrame();

            if(!camera.getFrame().empty())
            {
                imshow("Window", camera.getFrame());
                //imshow("Window",camera.getGrayScaleFrame());
            }

            if(waitKey(1) == 'q')
            {
                break;
                destroyWindow("Window");
            }
        }
    }
    else
    {
        cout << "Cannot open camera device" << endl;
    }

    a.exit();
    return 0;
}
