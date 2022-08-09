// It is simple and easy to understand & implement.
// It is efficiently used for small systems
// It does not cause more overheads
// The process effectiveness is low.
// When we increase the number of frames while using FIFO, we are giving more memory
//to processes. So, page fault should decrease, but here the page faults are increasing.


#include<iostream>
using namespace std;
int main(){

    int a[5],b[20],n,p=0,q=0,m=0,h,k,i,q1=1;
    char f='F';
    cout<<"Enter the number of pages:";
    cin>>n;
    cout<<"Enter "<<n<<" page numbers:";
    for(i=0;i<n;i++){
        cin>>b[i];
    }
    for(i=0;i<n;i++){
        if(p==0){
            if(q>=3)
                q=0;
        a[q]=b[i];
        q++;
        if(q1<3){
            q1=q;
        }
        }
        cout<<"\n"<<b[i];
        cout<<"\t";
        for(h=0;h<q;h++){
        cout<<a[h];
        }
        if((p==0)&&(q<=3)){
            cout<<"-->"<<f;
            m++;
        }
        p=0;
        for(k=0;k<q1;k++){
            if(b[i+1]==a[k])
            p=1;
        }
    }
    cout<<"\nNumber of faults:"<<m;

}
