#include <iostream>

using namespace std;

// Funksiyalar

//==================================================================

int three_five(int array_one[], int size)
{
    srand(time(NULL));

    int min_num_one = 0;
    int max_num_one = 100;
    int total_one = 0;

    for (int i = 0; i < size; i++)
    {
        array_one[i] = rand() % (max_num_one - min_num_one + 1) + min_num_one;

        if ((array_one[i] % 3 == 0) && (array_one[i] % 5 != 0))
        {
            total_one++;
        }
    }

    return total_one;
}

//==================================================================

int ten_thirty(int array_two[], int size)
{
    srand(time(NULL));

    int min_num_two = -10;
    int max_num_two = 30;
    int num_one_ = 0;
    bool check = false;

    for (int j = 0; j < size; j++)
    {
        array_two[j] = rand() % (max_num_two - min_num_two + 1) + min_num_two;

        if (check)
        {
            num_one_ += array_two[j];
        }
        if ((array_two[j] < 0) && (!check))
        {
            check = true;
        }
    }

    return num_one_;
}

//==================================================================

int twenty_thirty(int array_three[], int size)
{
    srand(time(NULL));

    int min_num_three = -30;
    int max_num_three = 20;
    int num_three_ = 0;
    bool check_three = false;

    for (int j = 0; j < size; j++)
    {
        array_three[j] = rand() % (max_num_three - min_num_three + 1) + min_num_three;

        if (check_three)
        {
            num_three_ += array_three[j];
        }
        if ((array_three[j] > 0) && (!check_three))
        {
            check_three = true;
        }
    }

    return num_three_;

}

//==================================================================

int twenty(int array_four[], int size, int& min_num, int& max_num) {
    srand(time(NULL));

    int __min__num = 0;
    int __max__num = 100;
    min_num = 100;
    max_num = 0;

    for (int i = 0; i < size; i++) {
        array_four[i] = rand() % (__max__num - __min__num + 1) + __min__num;

        if (array_four[i] < min_num) {
            min_num = array_four[i];
        }
        if (array_four[i] > max_num) {
            max_num = array_four[i];
        }
    }

    return max_num - min_num;
}

//==================================================================

int one_two_three(int array_five[], int size,  int& num_one,int& num_two,int& num_three)
{
    srand(time(NULL));

    int min_num_five = 0;
    int max_num_five = 300;

    for (int i = 0; i < size; i++) {
        array_five[i] = rand() % (max_num_five - min_num_five + 1) + min_num_five;

        if (array_five[i] >= 0 && array_five[i] <= 9) {
            num_one = array_five[i];
        }
        else if (array_five[i] >= 10 && array_five[i] <= 99) {
            num_two += array_five[i];
        }
        else if (array_five[i] >= 100 && array_five[i] <= 999) {
            num_three += array_five[i];
        }
    }

    return num_one - num_two - num_three;
}


//==================================================================

int main()
{

    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 1";
    cout << "\n\n\n\n";

    const int size = 10;
    int array_[size] = {};

    int answer_one = three_five(array_, size);

    cout << "Array : ";


    for (int i = 0; i < size; i++)
    {
        cout << array_[i] << ",";
    }
    cout << "\n";

    cout << "Answer: " << answer_one << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 2";
    cout << "\n\n\n\n";

    const int size_two = 10;
    int array_two[size_two] = {};

    int answer_two = ten_thirty(array_two, size_two);

    cout << "Array: ";

    for (int j = 0; j < size_two; j++)
    {
        cout << array_two[j] << ",";
    }

    cout << "\n";

    cout << "Answer : " << answer_two << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 3";
    cout << "\n\n\n\n";

    const int size_three = 10;
    int array_three[size_three] = {};

    int answer_three = twenty_thirty(array_three, size_three);

    cout << "Array: ";

    for (int j = 0; j < size_three; j++)
    {
        cout << array_three[j] << ",";
    }

    cout << "\n";

    cout << "Answer : " << answer_three << endl;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 4";
    cout << "\n\n\n\n";

    int min_num__four;
    int max_num__four;

    const int size_four = 10;
    int array_four[size_four] = {};

    int answer_four = twenty(array_four, size_four, min_num__four, max_num__four);

    cout << "Array: ";

    for (int j = 0; j < size_four; j++)
    {
        std::cout << array_four[j] << ",";
    }

    cout << "\n";

    cout << "Min number : " << min_num__four << "\n";
    cout << "Max number : " << max_num__four;

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=============================================";
    cout << "\n\n";
    cout << "Tap - 5";
    cout << "\n\n\n\n";

    int one_digiht = 0;
    int two_digiht = 0;
    int three_digiht = 0;
    const int size_five = 20;
    int array_five[size_five] = {};

    int answer_five = one_two_three(array_five, size_five, one_digiht, two_digiht, three_digiht);

    cout << "array : ";

    for (int i = 0; i < size_five; i++)
    {
        cout << array_five[i] << ",";
    }

    cout << "\n";

    cout << "One digiht : " << one_digiht << "\n";
    cout << "Two digiht : " << two_digiht << "\n";
    cout << "Three digiht : " << three_digiht << "\n";

    cout << "\n\n\n";
    system("pause");
    cout << "\n\n\n";
    cout << "=============================================";
}
