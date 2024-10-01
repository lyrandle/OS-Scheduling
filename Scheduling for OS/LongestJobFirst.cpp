////Longest Job First
//#include <iostream>
//#include <time.h>
//#include<vector>
//#include <algorithm>
//using namespace std;
//
////find waiting time 
//vector<int> waitTime(int n, vector<int>  burst, vector<int>  wait)
//{
//	vector<int> temp1;
//	temp1.push_back(0);
//	int temp;
//
//	for (int i = 1; i < burst.size(); i++)
//	{
//		temp = burst.at(i - 1) + temp1.at(i - 1);
//		temp1.push_back(temp);
//	}
//
//
//	return temp1;
//}
//
////find turnaround time
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
////find average of waiting and turnaround time
//void findAvg(vector<int> processes, int n, vector<int> burst)
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
//	cout << "|Processes|  " << " |Burst time|  "
//		<< " |Waiting time|  " << " |Turn around time|\n";
//
//	for (int i = 0; i < processes.size(); i++)
//	{
//		waitT = wait.at(i);
//		turnT = turntime.at(i);
//		totalWait += waitT;
//		totalTurn += turnT;
//		cout << "   " << processes.at(i) << "\t\t" << burst.at(i) << "\t    "
//			<< wait.at(i) << "\t\t  " << turntime.at(i) << endl;
//	}
//
//	cout << "Average waiting time = "
//		<< (float)totalWait / (float)sizeof waitT << " in milliseconds";
//	cout << "\nAverage turn around time = "
//		<< (float)totalTurn / (float)sizeof turnT << " in milliseconds" << endl << endl;
//}
//
//int main()
//{
//	//genreating variables
//	vector<int> processes;
//	vector<int> burst;
//	vector<int> processesC;
//	vector<int> burstC;
//
//	//genreating processes
//	srand(time(0));
//	for (int i = 1; i < 23; i++)
//	{
//		processes.push_back(i);
//		burst.push_back(rand() % 25);
//	}
//
//	const int n = sizeof processes / sizeof processes[0];
//
//	processesC = processes;
//	burstC = burst;
//
//	cout << "Longest Job First Starting Order" << endl;
//
//	cout << "Processes \t\t Burst" << endl;
//
//	for (int i = 0; i < processes.size(); i++)
//	{
//		cout << processes[i] << "\t\t\t" << burst[i] << endl;
//	}
//
//	for (int i = 0; i < burst.size(); i++)
//	{
//		for (int j = 0; j < burst.size(); j++)
//		{
//			if (burst[i] > burst[j])
//			{
//				swap(burst[i], burst[j]);
//				swap(processes[i], processes[j]);
//			}
//		}
//	}
//
//	cout << endl << " Longest Job First Ending Order" << endl;
//
//	findAvg(processes, n, burst);
//
//	cout << endl << " Transientevent Longest Job First Starting Order" << endl;
//
//	processesC.push_back(23);
//	burstC.push_back(rand() % 25);
//
//	cout << "Processes \t\t Burst" << endl;
//
//	for (int i = 0; i < processesC.size(); i++)
//	{
//		cout << processesC[i] << "\t\t\t" << burstC[i] << endl;
//	}
//
//	for (int i = 0; i < burstC.size(); i++)
//	{
//		for (int j = 0; j < burstC.size(); j++)
//		{
//			if (burstC[i] > burstC[j])
//			{
//				swap(burstC[i], burstC[j]);
//				swap(processesC[i], processesC[j]);
//			}
//		}
//	}
//
//	const int m = sizeof processesC / sizeof processesC[0];
//
//	cout << endl << " Transientevent Longest Job First Ending Order" << endl;
//
//	findAvg(processesC, m, burstC);
//
//	return 0;
//
//}