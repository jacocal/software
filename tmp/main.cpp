#include <iostream>
#include <ctime>
#include <cstdlib>
#include "sortingAlgorithms.h"
#include <chrono>
#include <vector>
#include <fstream>

using namespace std;
using namespace std::chrono;

void generateNumbers(int n)
{
    int rndGen;

    ofstream myfile;

    if( remove( "numberArray.txt" ) != 0 )
    perror( "Error deleting file!" );
        else
    puts( "Previous file successfully deleted!" );

    myfile.open ("numberArray.txt");
    srand (time(NULL));
    for (int i = 0; i < n + 1; i++)
    {
        rndGen = 0;
        // De acuerdo con lo investigado, rand solo puede tener numeros hasta el 32,767.
        // Este for genera numeros del 0 al millon usando varias llamadas a rand (31 en total).
        for(int i = 0; i<20 ; i++)
        {
            rndGen += rand();
        }
        myfile << rndGen << endl;
    }
    myfile.close();
}

void copyArray(int a[], int n)
{
    string line;
    int value;
    int i = 0;
    ifstream myfile ("numerosDesordenados.txt");
    if (myfile.is_open())
    {
        while ( getline (myfile,line) )
        {
            value = atoi(line.c_str());
            a[i] = value;
            i++;
        }
        myfile.close();
    }
    else cout << "Unable to open file";
}

void saveTimes(int a[])
{

     ofstream myfile;

    if( remove( "resultsFile.txt" ) != 0 )
    perror( "Error deleting file!" );
        else
    puts( "Previous file successfully deleted!" );

    myfile.open ("resultsFile.txt");

    myfile << "-------------- RESULTS --------------" << endl;
    myfile << "1.- Bubble Sort ------------------- " << a[0] << " micros | " << a[0]/1000 << "ms | " << a[0]/1000000 << "s" << endl;
    myfile << "2.- Insertion Sort ----------------- " << a[2] << " micros | " << a[2]/1000 << "ms | " << a[2]/1000000 << "s" << endl;
    myfile << "3.- Merge Sort -------------------- " << a[5] << " micros | " << a[5]/1000 << "ms | " << a[5]/1000000 << "s" << endl;
    myfile << "4.- Selection Sort ---------------- " << a[9] << " micros | " << a[9]/1000 << "ms | " << a[9]/1000000 << "s" << endl;
    myfile << "5.- Heap Sort -------------------- " << a[10] << " micros | " << a[10]/1000 << "ms | " << a[10]/1000000 << "s" << endl;
    myfile << "6.- Quick Sort ------------------- " << a[11] << " micros | " << a[11]/1000 << "ms | " << a[11]/1000000 << "s" << endl;
    myfile << endl << endl;

    myfile.close();
}

void displayTimes(int a[])
{
    cout << endl << endl;
    cout << "-------------- RESULTS --------------" << endl;
    cout << "1.- Bubble Sort ------------------- " << a[0] << " micros | " << a[0]/1000 << "ms | " << a[0]/1000000 << "s" << endl;
    cout << "2.- Insertion Sort ----------------- " << a[2] << " micros | " << a[2]/1000 << "ms | " << a[2]/1000000 << "s" << endl;
    cout << "3.- Merge Sort -------------------- " << a[5] << " micros | " << a[5]/1000 << "ms | " << a[5]/1000000 << "s" << endl;
    cout << "4.- Selection Sort ---------------- " << a[9] << " micros | " << a[9]/1000 << "ms | " << a[9]/1000000 << "s" << endl;
    cout << "5.- Heap Sort -------------------- " << a[10] << " micros | " << a[10]/1000 << "ms | " << a[10]/1000000 << "s" << endl;
    cout << "6.- Quick Sort ------------------- " << a[11] << " micros | " << a[11]/1000 << "ms | " << a[11]/1000000 << "s" << endl;
    cout << endl << endl;
}


int main()
{
    cout << "This program will use 6 sorting methods to sort the same N number array." << endl;
    cout << "For each method, time will be taken from the start of the sorting to the end of the sorting." << endl;
    cout << "Times for each method will be desplayed at the end of all sorting methods." << endl;
    cout << endl;


    int ammount;
    int timesArray[12];

    cout << "Enter the ammount of numbers to sort:" << endl;
    cin >> ammount;

    int* temporalArray = new int[ammount];

    cout << "Generating " << ammount << " numbers... ";

    generateNumbers(ammount);

    cout << "Done!" << endl << endl;

     high_resolution_clock::time_point t1;
     high_resolution_clock::time_point t2;

    // Total time
    high_resolution_clock::time_point tot1 = high_resolution_clock::now();

    // BEGIN Bubble Sort
    cout << "1/6: Sorting with Bubble Sort... " << endl;

    copyArray(temporalArray, ammount);

    t1 = high_resolution_clock::now();
    bubbleSort(temporalArray, ammount);
    t2 = high_resolution_clock::now();

    auto duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    timesArray[0] = duration;

    cout << "Done in " << duration << " microseconds!" << endl;

    // END Bubble Sort


    // BEGIN Insertion Sort
    copyArray(temporalArray, ammount);

    cout << "2/6: Sorting with Insertion Sort... " << endl;

    t1 = high_resolution_clock::now();
    insertionSort(temporalArray, ammount);
    t2 = high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    timesArray[2] = duration;

    cout << "Done in " << duration << " microseconds!" << endl;

    // END Insertion Sort


    // BEGIN Merge Sort
    copyArray(temporalArray, ammount);

    cout << "3/6: Sorting with Merge Sort... " << endl;

    t1 = high_resolution_clock::now();
    mergeSort(temporalArray, ammount);
    t2 = high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    timesArray[5] = duration;

    cout << "Done in " << duration << " microseconds!" << endl;

    // END Merge Sort


    // BEGIN Selection Sort
    copyArray(temporalArray, ammount);

    cout << "4/6: Sorting with Selection Sort... " << endl;

    t1 = high_resolution_clock::now();
    selectionSort(temporalArray, ammount);
    t2 = high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    timesArray[9] = duration;

    cout << "Done in " << duration << " microseconds!" << endl;

    // END Selection Sort

    // BEGIN Heap Sort

    copyArray(temporalArray, ammount);

    cout << "5/6: Sorting with Heap Sort... " << endl;

    t1 = high_resolution_clock::now();
    heapSort(temporalArray, ammount);
    t2 = high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    timesArray[10] = duration;

    cout << "Done in " << duration << " microseconds!" << endl;


    // END Heap Sort

    // BEGIN Quick Sort
    copyArray(temporalArray, ammount);

    cout << "6/6: Sorting with Quick Sort... " << endl;

    t1 = high_resolution_clock::now();
    quickSort(temporalArray, 0, ammount-1);
    t2 = high_resolution_clock::now();

    duration = std::chrono::duration_cast<std::chrono::microseconds>( t2 - t1 ).count();

    timesArray[11] = duration;

    cout << "Done in " << duration << " microseconds!" << endl;

//     END Quick Sort

    displayTimes(timesArray);
    saveTimes(timesArray);

    // Total Time
    high_resolution_clock::time_point tot2 = high_resolution_clock::now();

    auto totalDuration = std::chrono::duration_cast<std::chrono::seconds>( tot2 - tot1 ).count();

    cout << "Time executing: " << totalDuration << " seconds."<< endl;

    return 0;
}