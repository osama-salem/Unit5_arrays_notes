#include <iostream>
#include <iomanip>
#include <vector>
using namespace std;

//function prototype
void showValues(int [], int);
const int COLS1 = 2;
void show2DArray(int [][COLS1],int);

int main() {
  //delcarng an array
  int test [1];
  
  const int SIZE = 5;
  int test1 [SIZE];

  cout << "test array: ";
  test[0] = 23;//assigning value to first memory location
  cout << test[0] << "\n\n";
  
  //Can accept user input and put it in array
  /*cout << "Enter a value to add to previous value: ";
  cin >> test1[0];
  test[4] = test[0] + test1[0]; //array maths expressions
  cout << test1[4] << endl;
  int z = 4;
  cout << test[z] << "\n\n";*/

  //Filling an array with values using for loop
  const int ARRAY_SIZE = 5;
  int numbers[ARRAY_SIZE];
  for(int count = 0; count < ARRAY_SIZE; count++)
    numbers[count] = 99;

  //Filling an array with an initialization list
  cout << "Filling test2 array with an initialization list: \n"; 
  int test2[SIZE] = {1,2,3,4,5};
  for(int count = 0; count < SIZE; count++)
    cout << test2[count] << " ";
  cout << "\n\n";

  //Range-based loop to display elements of array
  cout << "Range-based loop to display elements of test2 array\n";
  for (int val : test2)
    cout << val << ' ';
  cout << "\n\n";

  //Range-based loop to modify elements of array
  /*cout << "Range-based loop to modify elements of test3 array\n";
  int test3[SIZE];
  for (int &val: test3){
    cout << "Enter an integer value: ";
    cin >> val;
    }
  cout << "Display elements of test3 array\n";
  for (int val : test3)
    cout << val << ' ';
  cout << "\n\n";*/
    
  //Displaying char arrays
  cout << "Display char array\n";
  char Name[] = "Osama"; // Only works on char arrays, others must print element by element
  cout << Name << "\n\n";

  //Summing and Averaging elements of an array 
  cout << "Summing and Averaging elements of test2 array\n";
  double average = 0.0, sum = 0.0;
  for (int i = 0; i < SIZE; i++)
    sum += test2[i];
  average = sum / SIZE;
  cout << "Sum of test2 array is " << sum
    << endl << "Average of test2 array is " << average << "\n\n";
  //Can also do this with range based loop sum += val;

  //Finding highest and lowest value of an array
  int highest = test2[0];
  for (int i = 1; i < SIZE; i++){
    if (test2[i] > highest)
      highest = test2[i];
  }
  cout << "Highest value of test2 array is " << highest << endl;
  int lowest = test2[0];
  for (int i = 1; i < SIZE; i++){
    if (test2[i] < lowest)
      lowest = test2[i];
  }
  cout << "Lowest value of test2 array is " << lowest << "\n\n";

  //Comparing arrays
  int test4[SIZE] = {5,10,15,20,25};
  int test5[SIZE] = {5,10,15,20,25};
  bool arraysEqual = true; //Flag variable
  int counter = 0; //loop counter

  while (arraysEqual && counter < SIZE){
    if (test4[counter] != test5[counter])
      arraysEqual = false;
    counter++;
  }
  
  if (arraysEqual)
    cout << "The arrays are equal!\n\n";
  else
    cout << "The arrays are NOT equal\n\n";

  //Parallel Arrays
 /* int stdId[SIZE]; //student id
  double stdAverage[SIZE]; //course average
  char grade[SIZE]; //letter grade

  cout << "Enter each student's ID, course average and letter grade.\n" ;
  for (int i = 0; i < SIZE; i++){
    cout << "Student #ID : ";
    cin >> stdId[i];
    cout << "Course AVG : ";
    cin >> stdAverage[i];
    cout << "Letter Grade : ";
    cin >> grade[i];
    }

  //Displaying the parallel array
  cout << "\nHere's the list you made!\n";
  for (int i = 0; i < SIZE; i++){
    cout << "Student #ID: " << stdId[i]
      << "\tCourse Average : " << stdAverage[i]
      << "\tLetter Grade : " << grade[i] << endl;
  }
  */

  //Arrays as function arguments
  cout << "Using a function to display values of an array\n";
  showValues(test2, SIZE);
  /*
  //2D ARRAYS
  const int ROWS = 4,
            COLS = 3;
  double test6[ROWS][COLS];
  double valueTotal = 0.0;

  cout << "This will display the sum of all the values in the 2D array\n";
  cout << "Enter the values\n";
  for (int row = 0; row < ROWS; row++){
    for (int col = 0; col < COLS; col++){
      cout << "Row " << row << " Column " << col << " : ";
      cin >> test6[row][col];
    }
    cout << endl; //After filling values across this will start a new line
  }

  //adding elements
  for (int row = 0; row < ROWS; row++){
    for (int col = 0; col < COLS; col++){
      valueTotal += test6[row][col];
    }
  }

  cout << fixed << showpoint << setprecision(2);
  cout << "The sum of the values is " << valueTotal << "\n\n";
*/
  //2D array used as a argument/parameter in a function
  int test7[2][COLS1] = {{1,2},
                         {3,4}};
  cout << "Display the 2D array test7 with a function\n";
  show2DArray(test7, 2);

  //Define and initialize a vetor
  vector<int> test8 {10,20,30,40,50};
  //Display vector elements
  cout << "\nDiplaying the elements of a vector called test8\n";
  for (int val: test8)
    cout << val << ' ';
  cout << "\n\n";

  return 0;
}

//Fnction Definition
void showValues(int array[], int SIZE){
  for(int count = 0; count < SIZE; count++)
    cout << array[count] << " ";
  cout << "\n\n";
}
void show2DArray(int array[][COLS1], int rows){
  for (int row = 0; row < rows; row++){
    for (int col = 0; col < COLS1; col++){
      cout << setw(4) << array[row][col];
    }
    cout << endl;
  }
}