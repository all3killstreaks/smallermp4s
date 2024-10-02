# smallermp4s
A linux project dedicated to simplifying the process of shrinking mp4 sizes. This was mainly made for sending files over discord for users that do not have the money to spend on their ***Nitro*** subscription.

# Dependencies
You will need the following packages: GCC and ffmpeg.

Install them using these commands:
```bash
sudo pacman -S gcc ffmpeg
```
```bash
sudo apt install gcc ffmpeg
```

# Build
You can build it buy running g++.
```bash
g++ mp4.cpp -o mp4.out
```



# Usage
You can use **smallermp4s** by running it in a terminal emulator.
```bash
mp4.out
```

# Breakdown of Program
This program will ask for the name of your mp4 file.

"*Enter the MP4:* "

Then, it will start the compression process and use ffmpeg to shrink the file size. It will produce the a new file named "output.mp4"
