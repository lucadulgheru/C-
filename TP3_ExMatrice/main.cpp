#include <iostream>

using namespace std;


template <typename T>
class Matrix
{
    int n, m;
    T values [50][50];

    public:
        Matrix (int n, int m)
        {
            this->n=n;
            this->m=m;

            cout << "Insert elements: " << endl;
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cin>>values[i][j];
                }
            }
        }

        void printMatrix()
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    cout<<values[i][j]<<" ";
                }
                cout<<endl;
            }
        }

        void setElement(int row, int col, T value)
        {
            this->values[row][col] = value;
        }

        T getElement(int row, int col)
        {
            return this->values[row][col];
        }

        void addMatrix(Matrix mat)
        {
            for (int i = 0; i < n; i++)
            {
                for (int j = 0; j < m; j++)
                {
                    values[i][j] += mat.getElement(i, j); // sau m.values[i][j] daca values e public
                }
            }
        }

};

int main()
{
    int n, m;
    cout<<"Input n: ";
    cin>>n;
    cout<<endl;

    cout<<"Input m: ";
    cin>>m;
    cout<<endl;

    Matrix <int> mat (n, m);
    //mat.printMatrix();

    Matrix <int> mat2 (n, m);
    mat.addMatrix(mat2);
    mat.printMatrix();
    return 0;
}
