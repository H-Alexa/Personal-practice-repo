#include<iostream>
using namespace std;
class Heap{
    private:
        int ar[100];
        int siz=0;
        int sortedSize = 0;
    public:
        int getsiz()
        {
            return siz;
        }
        void print()
        {
            int i;
            for(i=1;i<=siz;i++) cout<<ar[i]<<" ";
            cout<<"\n";
            return;
        }
        void printsiz(int n)
        {
            int i;
            for(i=1;i<=n;i++) cout<<ar[i]<<" ";
            cout<<"\n";
            return;
        }
        int peek()
        {
            if(siz<1) {
                cout<<"No element found\n";
                return -1;
            }
            return ar[1];
        }
        void insertelements(int el[], int n)
        {
            int i;
            for(i=1;i<=n;i++)
            {
                insertOne(el[i]);
            }
            return;
        }
        void insertOne(int val)
        {
            siz++;
            int n=siz;
            ar[n]=val;
            int i=n;
            while(i>1&&val>ar[i/2])
            {
                ar[i]=ar[i/2];
                i=i/2;
            }
            ar[i]=val;
            return;
        }
        void heapSort(int el[], int n)
        {
            insertelements(el,n);
            print();
            int i;
            sortedSize=n;
            for(i=n;i>0;i--)
            {
                ar[i]=deleteEl();
                cout<<" _ "<<ar[i]<<" _ ";
            }
            cout<<"\n";
            return;
        }

        int deleteEl()
        {
            int val = ar[1];
            ar[1]=ar[siz];
            siz--;
            int j,i;
            i=1;j=2*i;
            while(j<siz)
            {
                if(ar[j+1]>ar[j])
                {
                    j+=1;
                }
                if(ar[i]<ar[j])
                {
                    int temp= ar[i];
                    ar[i]=ar[j];
                    ar[j]=temp;
                    i=j;j=2*i;
//                    cout<<i<<" * "<<j<<"\n";
                }
                else break;
            }
//            cout<<getsiz()<<" \t";
            return val;
        }
        void Hclear()
        {
            siz=0;
            sortedSize=0;
        }
        void heapcheck(int n)
        {

        }
        void heapify(int el[], int n)
        {
            if(n<1) {
            cout<<"Error!\n";
            return;
            }
            ar[1]=el[1];
            for(i=2;i<=n;i++)
            {

            }

        }

};
int main()
{
    Heap h;
    int ar[]={0,3,2,5,7,6,8};
    int ell[]={3,5,2};
    h.heapSort(ar,6);
    h.printsiz(6);
    h.Hclear();
    cout<<h.getsiz()<<"\n";
    h.heapify(ar,6);
    return 0;
}
