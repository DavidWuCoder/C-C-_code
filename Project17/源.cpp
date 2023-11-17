//#include<cmath>
//#include <iostream>
//#include<iomanip>
//using namespace std;
//
//int main()
//{
//	int n = 0;
//	int a;
//	cin >> n;
//	int arr1[99];
//	int arr2[99];
//	int sum = 0;
//	for (int i = 0; i < n; i++)
//		{
//			cin >> a;
//			arr1[i] = a;
//		}
//	for (int i = 0; i < n; i++)
//		{
//			cin >> a;
//			arr2[i] = a;
//		}
//	for (int i = 0; i < n; i++)
//	{
//		int temp=(arr1[i] - arr2[i]);
//		sum += (temp * temp);
//	}
//	double distance=sqrt(sum);
//	cout << fixed;
//	cout.precision(2);
//	cout<< distance;
//	return 0;
//}

//int main()
//{
//	char b = (char)97;
//	return 0;
//}

//
//#include<iostream>
//using namespace std;
//
//double get_average(int* arr, int rows, int cols)
//{
//	int count = rows * cols;
//	int sum = 0;
//	for (int i = 0; i < count; i++)
//	{
//		sum += arr[i];
//	}
//	return (double)(sum / count);
//}
//
//int main()
//{
//	int arr_1D[5];
//	int arr_2D[2][3];
//	for (int i = 0; i < 5; i++)
//	{
//		cin >> arr_1D[i];
//	}
//	for (int i = 0; i < 2; i++)
//	{
//		for (int j = 0; j < 3; j++)
//		{
//			cin >> arr_2D[i][j];
//		}
//	}
//
//	double av1 = get_average(arr_1D,1,5);
//	double av2 = get_average((int*)arr_2D,2,3);
//	cout << av1 << ' ' << av2;
//	return 0;
//}

//#include<iostream>
//using namespace std;
//void transform(int x)
//{
//	if (x == 0)
//		return;
//	else
//	{
//		transform(x / 2);
//		cout << x % 2;
//	}
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	transform(a);
//	return 0;
//}

//#include<iostream>
//#include<cstring>
//#include<cstdio>
//using namespace std;
//
//int main()
//{
//	char a;
//	char ch[100] = { 0 };
//	int i = 0;
//	while(1)
//	{
//		a = getchar();
//		if (a == '\n')
//			break;
//		else
//		{
//			ch[i] = a;
//			i++;
//		}
//	}
//	int len = strlen(ch);
//	for (int i = 1; i < len; i++)
//	{
//		cout << ch[i];
//	}
//	cout << ch[0];
//	return 0;
//}

//#include<iostream>
//#include<string>
//using namespace std;
//
//int main()
//{
//	string str;
//	cin >> str;
//	char a = str[0];
//	str.erase(0, 1);
//	str += a;
//	cout << str;
//	return 0;
//}


//#include<iostream>
//#include<vector>
//using namespace std;
//
//void BubbleSort(vector<int>* arr, int n)
//{
//	for (int i = 0; i < n; i++)
//	{
//		for (int j = 0; j < n- 1 - i; j++)
//		{
//			if ((*arr)[j] > (*arr)[j + 1])
//			{
//				int temp = (*arr)[j];
//				(*arr)[j] = (*arr)[j + 1];
//				(*arr)[j + 1] = temp;
//			}
//		}
//	}
//}
//
//void Remove_same(vector<int>* arr, int* n)
//{
//	for (int i = 0; i < *n; i++)
//	{
//		for (int j = i+1; j < *n; )
//		{
//			if ((*arr)[i] == (*arr)[j])
//			{
//				for (int k = j; k < (*n) - 1; k++)
//				{
//					(*arr)[k] = (*arr)[k + 1];
//				}
//				(*n)--;
//			}
//			else
//				j++;
//		}
//	}
//}
//
//int main()
//{
//	int n;
//	cin >> n;
//	vector<int> arr(n);
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	BubbleSort(&arr, n);
//	Remove_same(&arr,&n);
//
//	cout << n << endl;
//	for (int i = 0; i < n - 1; i++)
//	{
//		cout << arr[i] << ' ';
//	}
//	cout <<arr[n-1];
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int function1(int a,int b)
//{
//	return a / b;
//}
//
//int function2(int a, int b)
//{
//	return a % b;
//}
//
//void function3(int a)
//{
//	if (a>9)
//		function3(function1(a, 10));
//		cout << function2(a, 10)<<' ';
//}
//
//int main()
//{
//	int a;
//	cin >> a;
//	function3(a);
//	getchar();
//	return 0;
//}

//#include<iostream>
//using namespace std;
//
//int main()
//{
//	int a = 1, b = 1, c = 2, d = 0, sum = 0, n;
//	cin >> n;
//	for (int i = 0; i < n-7; i++)
//	{
//		d = a + c;
//		a = b;
//		b = c;
//		c = d;
//		sum += c;
//	}
//	if (n >= 4 && n<=6)
//		cout << n-2;
//	else if (n < 4)
//		cout << a;
//	else cout << sum + 6;
//	
//
//	return 0;
//}

//#include<iostream>
//#include<algorithm>
//using namespace std;
//
//int change(int arr[],int n,int num)
//{
//	for (int i = 0; i < n; i++)
//	{
//		if (num >= arr[i])
//		{
//			return i + 1;
//		}
//	}
//	return n + 1;
//}
//
//int main()
//{
//	int n,num=0;
//	cin >> n;
//	int* arr = new int[n];
//	for (int i = 0; i < n; i++)
//	{
//		cin >> arr[i];
//	}
//	cin >> num;
//
//	sort(arr, arr + n, greater <int>());
//	cout<<change(arr, n, num);
//	delete[]arr;
//	return 0;
//}

#include <iostream>
using namespace std;

int main() {
    int va, vb, vc;
    cin >> va >> vb >> vc;

    int* iptr = &va; 
    if (*iptr < vb) {
        iptr = &vb; 
    }
    if (*iptr < vc) {
        iptr = &vc; 
    }

    cout  << *iptr << endl;

    return 0;
}