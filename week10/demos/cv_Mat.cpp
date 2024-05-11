//
// Created by suyi on 24-5-9.
//

#include <iostream>
#include <opencv2/opencv.hpp>

using namespace cv;

int main() {
	float a[4]{1.f, 2.f, 3.f, 4.f};
	Mat A(2, 2, CV_32FC1, a);
	Mat B(2, 2,CV_32FC1, a);
	std::cout << A + B << std::endl;
	return 0;
}
