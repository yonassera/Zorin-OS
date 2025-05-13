#include<iostream>
#include<sys/utsname.h>
using namespace std;

int main(){
    struct utsname sys_info;
    
    if(uname(&sys_info)==-1){
        cout<<"The system call failed to retrieve information"<<endl;
        return 1;
    }

    cout<<"    System Information"<<endl;
    cout<<"System Name: "<<sys_info.sysname<<endl;
    cout<<"Node Name: "<<sys_info.nodename<<endl;
    cout<<"Release: "<<sys_info.release<<endl;
    cout<<"Version: "<<sys_info.version<<endl;
    cout<<"Machine: "<<sys_info.machine<<endl;

    return 0;
}