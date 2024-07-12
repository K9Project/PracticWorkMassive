#include <iostream>
#include <ctime>

int main()
{
	const int N = 5;
	int sum = 0;
	int arr[N][N];

	struct tm buf;
	time_t t = time(NULL);
	localtime_s(&buf, &t);
	int index = buf.tm_mday % N;

	std::cout << "Array:" << std::endl;
	for (int i = 0; i < N; ++i)
	{
		for (int j = 0; j < N; ++j)
		{
			arr[i][j] = i + j;
			std::cout << arr[i][j] << " ";
			if (index == i)
			{
				sum += arr[index][j];
			}
		}
		std::cout << std::endl;
	}
	std::cout << "\nSum of elements in row " << index << " : " << sum << std::endl;

	return 0;
}
