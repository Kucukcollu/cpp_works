#include "opencv4/opencv2/highgui.hpp"
#include <iostream>
#include <string>

void ReadCamera()
{
    std::cout << "Camera opening..." << std::endl;
    
    // window name
    std::string window_name = "CAMERA";

    // create an object from cv::VideoCapture
    cv::VideoCapture video_capture(0);

    if(video_capture.isOpened())
    {
        double fps = video_capture.get(cv::CAP_PROP_FPS);
        
        cv::Mat frame ;
        cv::namedWindow(window_name);
        
        for(;;)
        {
            if(video_capture.read(frame))
            {
                cv::imshow(window_name,frame);
            }
            if(cv::waitKey(1000/fps)>=0)
            {
                break;
            }
        }

        video_capture.release();
        cv::destroyWindow(window_name);
    }
    else
    {
        std::cout << "The camera cannot opened..." << std::endl;
    }
}

int main()
{
    ReadCamera(); // function call
    return 0;
}
