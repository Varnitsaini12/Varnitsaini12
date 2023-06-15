#include <opencv2/core.hpp>
#include <opencv2/imgproc.hpp>
#include <opencv2/highgui.hpp>


#include<iostream>
using namespace cv;
using namespace std;


int main() {
  // Create a VideoCapture object to capture frames from the webcam.
  VideoCapture cap(0);

  // Check if the webcam is opened successfully.
  if (!cap.isOpened()) {
    cout << "Error opening webcam!" << endl;
    return -1;
  }

  // Create a namedWindow object to display the webcam feed.
  namedWindow("Webcam Feed", WINDOW_AUTOSIZE);

  // Create a CascadeClassifier object to load the Haar cascade classifier for hand detection.
  CascadeClassifier cascade("haarcascade_hand.xml");

  // Create a Mat object to store the current frame from the webcam.
  Mat frame;

  // Create a vector of Point objects to store the detected hand landmarks.
  vector<Point> landmarks;

  // Create a while loop to continuously capture frames from the webcam and detect hands.
  while (true) {
    // Capture the current frame from the webcam.
    cap >> frame;

    // If the frame is empty, break out of the loop.
    if (frame.empty()) {
      break;
    }

    // Convert the frame to grayscale.
    Mat grayscale;
    cvtColor(frame, grayscale, COLOR_BGR2GRAY);

    // Detect hands in the grayscale frame.
    cascade.detectMultiScale(grayscale, landmarks, 1.1, 2, 0 | CASCADE_SCALE_IMAGE, Size(30, 30));

    // Draw the detected hand landmarks on the frame.
    for (int i = 0; i < landmarks.size(); i++) {
      circle(frame, landmarks[i], 3, Scalar(0, 0, 255), -1);
    }

    // Display the frame.
    imshow("Webcam Feed", frame);

    // Wait for a key press.
    int key = waitKey(1);

    // If the key `q` is pressed, break out of the loop.
    if (key == 'q') {
      break;
    }
  }

  // Close all windows.
  destroyAllWindows();

  return 0;
}
