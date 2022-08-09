//Round Robin is the preemptive process scheduling algorithm.
//Each process is provided a fix time to execute, it is called quantum.
//Once a process is execute for a given time period ,it is preemptive and other process execute for a given time period.
//Context switching is used to save states of preempted process.


#include <iostream>
using namespace std;

int main(){
    int et[30],ts,n,i,x=0,tot=0;
    char pn [10][10];
    cout << "Enter no of process : " << endl;
    cin>>n;
    cout << "Enter the time quantum : " << endl;
    cin>>ts;
    for(i=0;i<n;i++){
        cout << "Enter process name & estimated time : " << endl;
        cin>>pn[i]>>et[i];
    }
    cout << "The process are : " << endl;
    for(i=0;i<n;i++){
        tot=tot+et[i];
    }
    while(x!=tot){
        for(i=0;i<n;i++){
            if(et[i]>ts){
                x=x+ts;
                cout<<"-->"<<pn[i]<<"  "<<ts<<endl;
                et[i]=et[i]-ts;

            }
            else{
                if(et[i]<=ts&&et[i]!=0){
                    x=x+et[i];
                    cout<<"-->"<<pn[i]<<"  "<<et[i]<<endl;
                    et[i]=0;
                }
            }
        }
    }
    cout<<"Total estimated time : "<<x<< endl;
    return 0;
}
