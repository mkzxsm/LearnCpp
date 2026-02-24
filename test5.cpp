#include <iostream>
#include <fstream>

using namespace std;

class Domino
{
private:
    int left;
    int right;
public:
    Domino(): left(0), right(0){};
    Domino(int l, int r): left(l), right(r){};
    void rotate()
    {
        int temp = left;
        left = right;
        right = temp;
    }
    bool isDouble() const
    {
        return left==right;
    }
    int getRight() const
    {
        return right;
    }
    int getLeft() const
    {
        return left;
    }

    friend istream& operator>>(istream& is, Domino& d)
    {
        is >> d.left >> d.right;
        return is;
    }
    friend ostream& operator<<(ostream& os, const Domino& d)
    {
        os << d.left << "|" << d.right;
    }
    bool operator==(const Domino& other)
    {
        return (right==other.right && left==other.left)||(right==other.left && left==other.right);
    }
};

int main()
{
    ifstream inFile("input.txt");
    ofstream outFile("output.txt");
    if (!inFile)
    {
        cerr << "File not exist";
        return 1;
    }
    int n;
    inFile >> n;
    if (n==0)
    {
        cout << "File is empty";
        return 1;
    }
    Domino* arr = new Domino[n];
    for (int i = 0; i < n; i++)
    {
        inFile >> arr[i];
    }

    bool isValid = true;
    Domino lastValid = arr[0];
    for (int i = 0; i < n-1; i++)
    {
        if (arr[i].getRight()!=arr[i+1].getLeft())
        {
            isValid = false;
            lastValid = arr[i];
            break;
        }
        lastValid = arr[i+1];
    }
    cout << "Is Valid: " << (isValid ? "Yes" : "No" ) << endl;
    outFile << "Is Valid: " << (isValid ? "Yes" : "No" ) << endl;
    cout << "Last Valid: " << lastValid << endl;
    outFile << "Last Valid: " << lastValid << endl;

    cout << "Doubles: ";
    outFile << "Doubles: ";
    bool anyFound = false;
    for (int i = 0; i < n; i++)
    {
        if (arr[i].isDouble())
        {
            anyFound = true;
            cout << arr[i];
            outFile << arr[i];
        }
    }
    if (!anyFound)
    {
        cout << "Not found";
        outFile << "Not found";
    }
    inFile.close();
    outFile.close();
    delete[] arr;
    return 0;
}