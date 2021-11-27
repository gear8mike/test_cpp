using namespace std;

void test_2()
{
    int nmax = 30;
    
    vector<int> c;


    for(int i=2; i<=nmax; i++)
    {
        for(int k=2; k<i; k++)
        {
            if (i % k == 0)
                break;
            else
                c.push_back(i);
        }
    }
    for (int i=0; i<c.size(); i++)
        cout<<i<<"\t"<<c[i]<<endl;
}