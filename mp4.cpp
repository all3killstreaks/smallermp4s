#include <iostream>
#include <string>
#include <cstdlib>

using namespace std;

int main() {
    string mp4name;


    cout << "Enter the MP4: ";
    cin >> mp4name;
    cout << "Starting compression... \n";

    string command = "ffmpeg -i " + mp4name + " -vcodec libx265 -crf 28 output.mp4";

    system(command.c_str());

    return 0;
}