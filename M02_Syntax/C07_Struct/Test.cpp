#include <cstdio>

int main(){

}

Mat Plate::BGRToRGB(Mat img) {
    Mat image(img.rows, img.cols, CV_8UC3);
    for (int i = 0; i < img.rows; ++i)
    {
        // 获取第i行首像素指针
        Vec3b *p1 = img.ptr<Vec3b>(i);
        Vec3b *p2 = image.ptr<Vec3b>(i);
        for(int j=0; j<img.cols; ++j)
        {
            // 将img的bgr转为image的rgb
            p2[j][2] = p1[j][0];
            p2[j][1] = p1[j][1];
            p2[j][0] = p1[j][2];
        }
    }
    return image;
}
