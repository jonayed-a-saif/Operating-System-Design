// MVT (Multiprogramming with a Variable number of Tasks) is the memory management
//technique in which each job gets just the amount of memory it needs.
// That is, the partitioning of memory is dynamic and changes as jobs enter and leave the system.
// MVT is a more "efficient" user of resources.
// MFT suffers with the problem of internal fragmentation


#include<iostream>
using namespace std;

int main(){

    int m=0,m1=0,m2=0,p,count=0,i;
    cout<<"Enter the memory capacity:";
    cin>>m;
    cout<<"Enter the number of procss:";
    cin>>p;

    for(i=0;i<p;i++){
        cout<<"\nEnter memory req for "<<i+1<<" :";
        cin>>m1;
        count=count+m1;

        if(m1<=m){
            if(count==m)
                cout<<"there is no further memory require:";
            cout<<"the memory allocated for process "<< i+1 <<" is:"<<m;
            m2=m-m1;
            cout<<"\nremaining memory is: "<<m2;
            m=m2;
        }else{
            cout<<"memory is not allocated for process "<<i+1;
        }
        cout<<"\nexternal fragmentation for this process is: "<<m2;
    }
}


