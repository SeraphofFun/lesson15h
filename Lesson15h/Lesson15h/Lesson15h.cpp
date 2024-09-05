#include <iostream>
using namespace std;
void createarray(int arr[], int len) {
	srand(time(NULL));
	int min = -30;
	int max = 50;
	for (int i = 0; i < len; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr[i] = random;
	}

}
void createarray(float arr[], int len) {
	srand(time(NULL));
	int min = -3000;
	int max = 5000;
	for (int i = 0; i < len; i++)
	{
		float random = min + rand() % (max - min + 1);
		arr[i] = random / 100;
	}

}
void createarray(double arr[], int len) {
	srand(time(NULL));
	int min = -30000000;
	int max = 50000000;
	for (int i = 0; i < len; i++)
	{
		double random = min + rand() % (max - min + 1);
		arr[i] = random / 100000;
	}

}
void createarray(char arr[], int len) {
	srand(time(NULL));
	int min = 40;
	int max = 110;
	for (int i = 0; i < len; i++)
	{
		char random = min + rand() % (max - min + 1);
		arr[i] = random;
	}

}



void createarraydiapozon(int arr[], int len, int min, int max) {
	srand(time(NULL));

	for (int i = 0; i < len; i++)
	{
		int random = min + rand() % (max - min + 1);
		arr[i] = random;
	}
}



void showarray(char arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
void showarray(int arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}
void showarray(double arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}void showarray(float arr[], int len) {

	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;

}


void sortarray(int arr[], int len, bool b) {
	int t;
	for (int i = 0; i < len-1; i++)
	{
		for (int j = i + 1; j < len ; j++)
		{
			if (b && arr[i] >= arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
			if (!b && arr[i] <= arr[j])
			{
				t = arr[i];
				arr[i] = arr[j];
				arr[j] = t;
			}
		}

	}




}

void findellement(int arr[], int len, int h) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == h)
		{
			cout << " elementin indeksi = " << i << endl;
		}

	}
}

void findellement(char arr[], int len, char h) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == h)
		{
			cout << " elementin indeksi = " << i << endl;
		}

	}
}

void findellement(float arr[], int len, float h) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == h)
		{
			cout << " elementin indeksi = " << i << endl;
		}

	}
}


void findellement(double arr[], int len, double h) {
	for (int i = 0; i < len; i++)
	{
		if (arr[i] == h)
		{
			cout << " elementin indeksi = " << i << endl;
		}

	}

}
void mini(int arr1[], int len) {
	int mini = arr1[0];

	for (int i = 1; i < len; i++)
	{
		if (arr1[i] < mini)
		{
			mini = arr1[i];
		}
		
	}
	cout << "\n minimum = " << mini<<endl;

}
void maxi(int arr1[], int len) {
	int maxi = arr1[0];
	

	for (int i = 1; i < len; i++)
	{
		
		if (arr1[i] > maxi)
		{
			maxi = arr1[i];
		}
	}
	cout << "\nmaksimum = " << maxi << endl;

}
void mini(float arr1[], int len) {
	float mini = arr1[0];

	for (int i = 1; i < len; i++)
	{
		if (arr1[i] < mini)
		{
			mini = arr1[i];
		}

	}
	cout << "\n minimum = " << mini << endl;

}
void maxi(float arr1[], int len) {
	float maxi = arr1[0];


	for (int i = 1; i < len; i++)
	{

		if (arr1[i] > maxi)
		{
			maxi = arr1[i];
		}
	}
	cout << "\nmaksimum = " << maxi << endl;

}
void mini(double arr1[], int len) {
	double mini = arr1[0];

	for (int i = 1; i < len; i++)
	{
		if (arr1[i] < mini)
		{
			mini = arr1[i];
		}

	}
	cout << "\n minimum = " << mini << endl;

}
void maxi(double arr1[], int len) {
	double maxi = arr1[0];


	for (int i = 1; i < len; i++)
	{

		if (arr1[i] > maxi)
		{
			maxi = arr1[i];
		}
	}
	cout << "\nmaksimum = " << maxi << endl;

}
void sur(int arr[], int len, int surin) {
	for (int i = 0; i < surin+1; i++)
	{
		int y = arr[0];
		for (int j = 0; j < len-1; j++)
		{
			arr[j] = arr[j + 1];
		}
		arr[len - 1] = y;
	}
}

int main()
{
	int i[10];
	createarray(i, 10);
	float f[10];
	createarray(f, 10);
	double d[10];
	createarray(d, 10);
	char c[10];
	createarray(c, 10);

	int t[10];

	int max;
	cout << "maksimum = ";
	cin >> max;
	int min;
	cout << "minimum = ";
	cin >> min;
	createarraydiapozon(t, 10, min, max);
	showarray(i, 10);
	showarray(c, 10);
	showarray(d, 10);
	showarray(f, 10);
	showarray(t, 10);
	cout << "true or false = ";
	int b;
	cin >> b;
	sortarray(t, 10, b);
	showarray(t, 10);
	int n1;
	cout << "int = ";
	cin >> n1;
	findellement(i, 10, n1);

	char n2;
	cout << "char = ";
	cin >> n2;
	findellement(c, 10, n2);
	float n3;
	cout << "float = ";
	cin >> n3;
	findellement(f, 10, n3);
	double n4;
	cout << "double = ";
	cin >> n4;
	findellement(d, 10, n4);


	mini(f, 10);
	mini(i, 10);
	mini(d, 10);
	maxi(f, 10);
	maxi(d, 10);
	maxi(i, 10);
	int s;
	cout << "surusmek ";
	cin >> s;
	sur(t, 10, s);
	showarray(t, 10);
}