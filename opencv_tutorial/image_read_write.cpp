#include <opencv4/opencv2/highgui.hpp>
#include <iostream>

void ImageReadWrite()
{
    std::cout << "Image read write" << std::endl;
    
    //ClearImages();
    
    cv::Mat  image=cv::imread("/home/ronux/cpp_works/opencv_tutorial/f16.jpg");

    if(image.data)
    {
        cv::namedWindow("Fly");
        cv::imshow("Fly",image);

        std::cout << "Fly is loaded press any key ..." << std::endl;

        cv::waitKey(0);

        cv::imwrite("/home/ronux/cpp_works/opencv_tutorial/f16.png",image);

        cv::destroyAllWindows();

    }
    else
    {
        std::cout << "Image not opened..." << std::endl;
 
    }
}

int main()
{
    ImageReadWrite();

    return 0;
}
