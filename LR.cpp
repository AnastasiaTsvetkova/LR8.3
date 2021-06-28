#include <iostream>
	using namespace std;
	

	float avg(int size, int *mas)
	{
	    int a = 0;
	    for (int i = 0; i < size; i++)
	        a += mas[i]; //сумма всех э-ментов массива
	    return ((float)a / size); //среднее арифметическое 
	}
	

	int main()
	{
	    setlocale(LC_ALL,"RU");
	    int size;
	  
	    cout << "Введите размер массива: \n";
	    cin >> size;
	    int arr[size];
	    cout << "Введите элементы: \n";
	    for (int i = 0; i < size; i++)//заполнение 
	        cin >> arr[i];
	    cout << "Итог: " << avg(size, arr);
	    return 0;
	}
