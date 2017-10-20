//Author: John Crosby
#include<iostream>
#include<vector>

using namespace std;

int main()
{
    // Declaring Variables
    int rows, col;
    vector< vector<char> > star;

    //Asking for user input
    cout<<"Enter rows and columns of stars:"<<endl;
    cin>>rows;
    cin>>col;

    //Seeing if the input meets requirements then filling the parameters with stars
    if(rows > 0 && col > 0)
    {

        star.resize(rows);
        for(int r=0; r < rows; r++)
        {
            star[r].resize(col);
        }

        for(int r=0; r < star.size(); r++)
        {
            for(int c=0; c < star[r].size(); c++)
            {
                star[r][c] = '*';
            }
        }

        for(int r=0; r < star.size(); r++)
        {
            for(int c=0; c < star[r].size(); c++)
            {
                cout<<star[r][c];
            }
            cout<<endl;
        }    
    }


    return 0;

}
