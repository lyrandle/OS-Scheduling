////FINISHED
//#include <iostream>
//#include <time.h>
//#include<vector>
//
//using namespace std;
//
////find wait time for processes
//vector<int> waitTime(int n, vector<int>  burst, vector<int>  wait)
//{
//	vector<int> temp1;
//	temp1.push_back(0);
//	int temp;
//
//	for (int i = 1; i < burst.size(); i++)
//	{
//		temp = burst.at(i-1) + temp1.at(i-1);
//		temp1.push_back(temp);
//	}
//
//
//	return temp1;
//}
//
////find turn time for processes
//vector<int> turnTime(int n, vector<int>  burst, vector<int>  wait, vector<int>  turntime)
//{
//	int temp;
//	vector<int> temp1;
//
//	for (int i = 0; i < burst.size(); i++)
//	{
//		temp = burst.at(i) + wait.at(i);
//		temp1.push_back(temp);
//	}
//	return temp1;
//}
//
//void findAvg(vector<int> processes, int n, vector<int> burst, vector<int> arrival)
//{
//	vector<int> wait;
//	vector<int> turntime;
//	int totalWait = 0;
//	int totalTurn = 0;
//	int waitT = 0;
//	int turnT = 0;
//
//	wait = waitTime(n, burst, wait);
//
//	turntime = turnTime(n, burst, wait, turntime);
//
//	cout << "|Processes|  " << "|Arrival| " << " |Burst time|  "
//		<< " |Waiting time|  " << " |Turn around time|\n";
//
//	for (int i = 0; i < arrival.size(); i++)
//	{
//		waitT = wait.at(i);
//		turnT = turntime.at(i);
//		totalWait += waitT;
//		totalTurn += turnT;
//		cout << "   " << processes.at(i) << "\t\t" << arrival.at(i) << "\t  " << burst.at(i) << "\t\t    " << wait.at(i) << "\t\t " << turntime.at(i) << endl;
//	}
//
//	cout << "Average waiting time = "
//		<< (float)totalWait / (float)n << "in miliseconds";
//	cout << "\nAverage turn around time = "
//		<< (float)totalTurn / (float)n << "in miliseconds";
//
//}
//
//int main()
//{
//
//	//genreating variables
//	vector<int> processes;
//	vector<int>  burst;
//	vector<int> arrival;
//
//	//filling vectors
//	srand(time(0));
//	for (int i = 1; i < 23; i++)
//	{
//		processes.push_back(i);
//		burst.push_back(rand() % 51);
//		arrival.push_back(rand() % 25);
//	}
//
//	const int n = sizeof processes / sizeof processes[0];
//
//	//sort by arrival time
//	for (int i = 0; i < arrival.size(); i++)
//	{
//		for (int j = 0; j < arrival.size(); j++)
//		{
//			if (arrival[i] < arrival[j])
//			{
//				swap(burst[i], burst[j]);
//				swap(processes[i], processes[j]);
//				swap(arrival[i], arrival[j]);
//
//			}
//		}
//	}
//
//	cout << "First Come First Serve" << endl;
//
//	findAvg(processes, n, burst, arrival);
//
//	cout << endl << "Transient First Come First Serve" << endl;
//	
//	processes.push_back(23);
//	burst.push_back(rand() % 51);
//	arrival.push_back(rand() % 25);
//	const int m = sizeof processes / sizeof processes[0];
//
//	findAvg(processes, m, burst, arrival);
//
//	return 0;
//}