#include <queue>
#include <iostream>
using namespace std;

int main()
{
	queue<int> que;	//�����洢int�������ݵĶ���
	que.push(1);	//{}     -->  {1}
	que.push(2);	//{1}    -->  {1,2}
	que.push(3);	//{1,2}  -->  {1,2,3}
	cout<<que.front()<<endl;	//front()���ʶ�����׶˵�����
	que.pop();		//{1,2,3}-->  {1,2}
	cout<<que.front()<<endl; 
	que.pop();		//{1,2}  -->  {1}
	cout<<que.front()<<endl;
	que.pop();		//{1}    -->  {}
	return 0;
}
