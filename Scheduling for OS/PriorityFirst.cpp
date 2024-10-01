////Priotity First
//
//#include <iostream>
//#include <time.h>
//#include <vector>
//using namespace std;
//
/////find waiting time 
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
//void findAvg(vector<int> processes, int n, vector<int> burst, vector<int> priority)
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
//	cout << "|Processes|  " << "|Priority| " << " |Burst time|  "
//		<< " |Waiting time|  " << " |Turn around time|\n";
//
//	for (int i = 0; i < processes.size(); i++)
//	{
//		totalWait += wait[i];
//		totalTurn += turntime[i];
//		cout << processes[i] << "\t\t" << priority[i] << "\t\t" << burst[i] << "\t    "
//			<< wait[i] << "\t\t  " << turntime[i] << endl;
//	}
//
//	cout << "Average waiting time = "
//		<< (float)totalWait / (float)n << " in miliseconds";
//	cout << "\nAverage turn around time = "
//		<< (float)totalTurn / (float)n << " in miliseconds";
//
//}
//
//int main()
//{
//	//creating vars
//	vector<int> processes;
//	vector<int> burst;
//	vector<int> priority;
//	const int n = sizeof processes / sizeof processes[0];
//
//	srand(time(0));
//	
//	//filling vars
//	for (int i = 1; i < 23; i++)
//	{
//		priority.push_back(rand() % 100);
//		processes.push_back(i);
//		burst.push_back(rand() % 25);
//
//	}
//
//	//copied for transient event
//	vector<int> processesC = processes;
//	vector<int> burstC = burst;
//	vector<int> priorityC = priority;
//
//	//printing pre-sorted list
//	cout << "Priority First Pre-Sort\n";
//	cout << "|Process|  |Priority|\n";
//	for (int j = 0; j < priority.size(); j++)
//	{
//		cout << processes[j] << "\t\t" << priority[j] << endl;
//	}
//
//	//sorting by highest priority
//	for (int i = 0; i < priority.size(); i++)
//	{
//		for (int j = 0; j < priority.size(); j++)
//		{
//			if (priority[i] > priority[j])
//			{
//				swap(priority[i], priority[j]);
//				swap(burst[i], burst[j]);
//				swap(processes[i], processes[j]);
//			}
//		}
//	}
//
//	//processing
//	cout << "Priority First" << endl;
//
//	findAvg(processes, n, burst, priority);
//
//	//adding transient event
//	priorityC.push_back(rand() % 100);
//	processesC.push_back(23);
//	burstC.push_back(rand() % 25);
//
//	cout << "\nTransient Priority First Pre-Sort\n";
//	cout << "|Process|  |Priority|\n";
//	for (int j = 0; j < priorityC.size(); j++)
//	{
//		cout << processesC[j] << "\t\t" << priorityC[j] << endl;
//	}
//
//	//sorting by highest priority
//	for (int i = 0; i < priorityC.size(); i++)
//	{
//		for (int j = 0; j < priorityC.size(); j++)
//		{
//			if (priorityC[i] > priorityC[j])
//			{
//				swap(priorityC[i], priorityC[j]);
//				swap(burstC[i], burstC[j]);
//				swap(processesC[i], processesC[j]);
//			}
//		}
//	}
//
//	cout << "\nTransient Priority First Pre-Sort" << endl;
//
//	findAvg(processesC, n, burstC, priorityC);
//	return 0;
//}
