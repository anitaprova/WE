#include <iostream>

int main()
{
	int segment1_length;
	int segment1_speed;
	int segment2_length;
	int segment2_speed;
	int x_distance;
	int y_distance;
	int distance_on_road;
	
	
	double segment1_time = segment1_length / segment1_speed;
	double segment2_length = sqrt(pow(x_distance, 2) + pow(y_distance - distance_on_road, 2));
	double segment2_time = segment2_length / segment2_speed;
	double total_time = segment1_time + segment2_time;

	return 0;
}
