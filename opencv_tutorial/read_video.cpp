#include <opencv4/opencv2/highgui.hpp>
#include <iostream>
#include <string>

void PlayVideo()
{
    std::cout << "Video Player" << std::endl;

    // video path
    std::string video_path = "/home/ronux/cpp_works/opencv_tutorial/video.mp4";
    
    // window name
    std::string window_name = "Video Player";

    // create an object from cv::VideoCapture
    cv::VideoCapture video_capture;

    // open the predefined video
    video_capture.open(video_path);

    if(video_capture.isOpened())
    {
        double fps=video_capture.get(cv::CAP_PROP_FPS);
        cv::Mat frame;
        cv::namedWindow(window_name);
        
        for(;;)
        {
            if(!video_capture.read(frame))
            {
                break;
            }
            
            // show the frame which captured
            cv::imshow(window_name,frame);
            
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
        std::cout << "Video File " << video_path << " Not Opened ..." << std::endl;
    }
}

int main()
{
    PlayVideo(); // function call
    return 0;
}
