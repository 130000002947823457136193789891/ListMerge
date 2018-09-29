#include<iostream>
using namespace std;
#define MAXSIZE 100
typedef int DataType;
class SequenList
{
public:
	friend void Merge(SequenList &A,SequenList &B,SequenList &C);
private:
	DataType data[MAXSIZE];
	int len;
};

void Merge(SequenList &A,SequenList &B,SequenList &C)
{
	int i,j,k;
	i=0;j=0;k=0;
	while(i<A.len&&j<B.len)
		if(A.data [i]<=B.data [j])
			C.data [k++]=A.data[i++];
		else  C.data [k++]=B.data [j++];
	while(i<A.len)
		C.data [k++]=A.data [i++];
	while(j<B.len)
		C.data [k++]=B.data [j++];
	C.len =k;
}

int main()
{
	return 0;
}