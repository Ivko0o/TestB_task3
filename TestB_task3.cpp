#include <iostream>

using namespace std;

bool IsSawSequence(int array[], int size);
void TransformSequence(int array[], int size);

int main()
{
    int array[5] = {1,3,2,5,3};
    int size = sizeof(array) / sizeof(array[0]);

    //Prints the array
    for (int i = 0; i < 5; i++) {
        cout << array[i];
    }
    cout << endl << endl;


    //Checks if the array is in 'SawSequence' or not
    if (IsSawSequence(array, size)) {
        cout << "It is Saw Sequence \n\n";
    }
    else {
        cout << "It is not Saw Sequence \n\n";
    }

    //If the array is not in 'SawSequence' - it will be changed
    if (!IsSawSequence(array, size)) {
        TransformSequence(array, size);
    }

    //Prints the final form of the array
    for (int i = 0; i < 5; i++) {
        cout << array[i];
    }
    

}

//Checks if the given array is in 'SawSequence'
bool IsSawSequence(int array[], int size) {

    for (int i = 1; i < size - 1; i++) {
        if(!((array[i] > array[i - 1]) && (array[i] > array[i + 1]) || 
            (array[i] < array[i - 1]) && (array[i] < array[i + 1]))) {
            return false;
        }
    }

    return true;
}

//Transforms the array in 'SawSequence'
void TransformSequence(int array[], int size) {
    bool flag = true;

    for (int i = 0; i < size - 1; i++) {
        if (flag)
        {

            if (array[i] > array[i + 1])
                swap(array[i], array[i + 1]);
        }
        else
        {
            if (array[i] < array[i + 1])
                swap(array[i], array[i + 1]);
        }
        flag = !flag;
    }
}
