#pragma once
#include <vector>
#include <tuple>
#include <cmath>
#include <tuple>
#include <vector>

using namespace std;

typedef vector<double> Point;
typedef vector<double> Pose;


class Car {
public:
    Car() {
    };
    Car(Pose pose_) : pose(pose_) {
    };
    void setPose(double x, double y, double yaw);
private:
    Pose pose; // x, y, yaw
};