//// Round Robin
//#include <iostream>
//#include <time.h>
//#include <vector>
//using namespace std;
//
//vector<int> waitTime(int n, vector<int>  burst, vector<int>  wait, int quantum)
//{
//	vector<int> burstCopy;
//	vector<int> temp;
//
//	for (int i = 0; i < burst.size(); i++)
//	{
//		burstCopy.push_back(burst[i]);
//	}
//	
//	int t = 0;
//
//	while (1)
//	{
//		bool done = true;
//
//		for (int i = 0; i < n; i++)
//		{
//			if (burstCopy.at(i) > 0)
//			{
//				done = false;
//
//				if (burstCopy.at(i) > quantum)
//				{
//					t += quantum;
//					burstCopy.at(i) -= quantum;
//				}
//				else
//				{
//					t += burstCopy.at(i);
//
//					temp.push_back(t - burstCopy.at(i));
//
//					burstCopy.at(i) = 0;
//				}
//			}
//		}
//
//		if (done == true)
//		{
//			break;
//		}
//	}
//	return burstCopy;
//}
//
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
//void findAvg(vector<int> processes, int n, vector<int> burst, int quantum)
//{
//	vector<int> wait;
//	vector<int> turntime;
//	int totalWait = 0;
//	int totalTurn = 0;
//	int waitT = 0;
//	int turnT = 0;
//
//	wait = waitTime(n, burst, wait, quantum);
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
//		cout << "   " << i + 1 << "\t\t" << burst.at(i) << "\t    "
//			<< wait.at(i) << "\t\t  " << turntime.at(i) << endl;
//	}
//
//	cout << "Average waiting time = "
//		<< (float)totalWait / (float)n << " in milliseconds";
//	cout << "\nAverage turn around time = "
//		<< (float)totalTurn / (float)n << " in milliseconds" << endl << endl;
//}
//
//int main()
//{
//	vector<int> processes;
//	vector<int> processesC;
//	vector<int> burst;
//	vector<int> burstC;
//
//	srand(time(0));
//	for (int i = 1; i < 26; i++)
//	{
//		processes.push_back(i);
//		burst.push_back(rand() % 25);
//	}
//
//	const int n = sizeof processes / sizeof processes[0];
//
//
//
//	burstC = burst;
//	processesC = processes;
//	burstC.push_back(rand() % 25);
//	processesC.push_back(23);
//
//	int quantum = 2;
//
//	cout << "Round Robin" << endl;
//
//	findAvg(processes, n, burst, quantum);
//
//	cout << endl << "Transient Round Robin" << endl;
//
//	processesC.push_back(23);
//	burstC.push_back(rand() % 25);
//	const int m = sizeof processesC / sizeof processesC[0];
//
//	findAvg(processesC, m, burstC, quantum);
//
//	return 0;
//}