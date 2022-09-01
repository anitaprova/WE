/*
 * Author: Anita Prova
 * Course: CSCI-135
 * Instructor: Genady Maryash
 * Assignment: Homework WE1
 * The program prints the time it takes for the robot to travel the segment. 
 */

#include <iostream>
#include <cmath>
using namespace std;

int main()
{
	double segment1_length = 6.0;
	double segment1_speed = 5.0;
	double segment2_speed = 2.0;
	double x_distance = 3.0;
	double y_distance = 10.0;
	double distance_on_road = 6.0;

	double segment1_time = segment1_length / segment1_speed;
	double segment2_length = sqrt(pow(x_distance, 2) + pow(y_distance - distance_on_road, 2));
	double segment2_time = segment2_length / segment2_speed;
	double total_time = segment1_time + segment2_time;
	
	cout << "Time to transverse first segment: " << segment1_time << endl;
	cout << "Length of segement two: " << segment2_length << endl;
	cout << "Time to transverse second segment: " << segment2_time << endl;
	cout << "Total time to travel: " << total_time << endl;	

	return 0;
}
