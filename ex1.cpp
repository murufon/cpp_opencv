#include <iostream>
#include <opencv2/opencv.hpp>

using namespace std;

int main()
{
    cout << "start" << endl;

    cv::Mat img = cv::imread("../photo.jpg"); // 読み込ませたい画像ファイル名
    if(img.empty()) return -1;

    cv::namedWindow("hogehoge", cv::WINDOW_AUTOSIZE); // Windowのタイトルとサイズ設定
    cv::imshow("hogehoge", img);
    cv::waitKey(0); // キー入力を待つ

    cv::destroyAllWindows();
    cout << "Finish" << endl;
}
