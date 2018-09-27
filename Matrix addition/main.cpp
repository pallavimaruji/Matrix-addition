#include <iostream>

using namespace std;

class matrix
{
    int mat[3][3];
public:
    void getdata()
    {
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                cin>>mat[i][j];
    }
    void display()
    {
        for(int i=0;i<3;i++)
            {
                for(int j=0;j<3;j++)
                    cout<<mat[i][j]<<"\t";
                    cout<<endl;
            }
    }
    friend matrix operator+(matrix m1,matrix m2)
    {
        matrix m3;
        for(int i=0;i<3;i++)
            for(int j=0;j<3;j++)
                m3.mat[i][j]=m1.mat[i][j]+m2.mat[i][j];
        return m3;
    }
};
int main()
{
    matrix m1,m2,m3;
    cout<<"Enter elements of matrix 1:";
    m1.getdata();
    cout<<"Enter elements of matrix 2:";
    m2.getdata();
    m3=m1+m2;
    cout<<"Sum of matrices:"<<endl;
    m3.display();
    return 0;
}
