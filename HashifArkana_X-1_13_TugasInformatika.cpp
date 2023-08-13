#include <stdlib.h>
#include <iostream>
using namespace std;

int Indeks_NilaiMin (int array[], int indeksAwal, int n)
{
	int nilaiMin = array[indeksAwal];
    int IndeksMin = indeksAwal;
    
    for(int i = IndeksMin + 1; i < n; i++)	{
    		if (array[i] < nilaiMin)
            {
				IndeksMin = i;
                nilaiMin = array[i];
            }
    }    
    return IndeksMin;
} 

void Selection_Sort (int array[], int n)
{
	int buffer, indeks;
    for(int i = 0; i <n; i++)
    {
    indeks = Indeks_NilaiMin(array, i, n);
    buffer = array[i];
    array[i] = array[indeks];
    array[indeks] = buffer;
    }
}    

int main()
{
	int i, n;
    cout << "Masukkan jumlah elemen yang diurutkan : ";
    cin >> n;
    int A[n];
    for(i = 0; i < n; i++)
    {
    	cout << "masukkan bilangan ke-" << i+1 << " : ";
        cin >> A[i];
    }
        Selection_Sort (A, n);
        cout<< "Hasil Pengurutan pilihan : ";
        for(i = 0; i < n; i++)
        {
        	cout << " " << A[i];
        }
        return 0;
}        