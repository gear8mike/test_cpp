using namespace std;
using namespace TMath;

void test_2()
{
    int nmax = 100;
    int n_counts;
    
    vector<int> c;



    for(int i=2; i<=nmax; i++)
    {
        n_counts=0;
        for(int k=2; k<i; k++)
        {
            if (i % k == 0)
                break;
            n_counts++;
        }
        if (n_counts==(i-2))
            c.push_back(i);
    }
    for (int i=0; i<c.size(); i++)
        cout<<i<<"\t"<<c[i]<<endl;
}