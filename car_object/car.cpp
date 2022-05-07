#include "Car.h"

// Set the pose of the car
void Car::setPose(double x, double y, double yaw) {
    pose.push_back(x);
    pose.push_back(y);
    pose.push_back(yaw);
    this->pose = pose;
}