#include<opencv2/opencv.hpp>

using namespace cv;
using namespace std;

int main()
{
	VideoCapture cap;

	cap.open(0);

	double fps = cap.get(CAP_PROP_FPS);
	std::cout << "fps" << fps << std::endl;


	while (1)
	{
		cv::Mat frame;
		cv::Mat SobelMat;
		cap.read(frame);
		Sobel(frame, SobelMat, 6, 1, 1,3,1,0);
		imshow("SobelMat", SobelMat);
		imshow("frame", frame);
		waitKey(30);

	}






}