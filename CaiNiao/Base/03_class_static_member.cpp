#include <iostream>
using namespace std;
class Logger{
    public:
        static int log_count;
        static void log(const string& messages){
            cout <<"[LOG]:"<< messages <<endl;
            log_count++;
        }
};
int Logger::log_count=0;
int main(){
    Logger::log("Program Started");
    cout<<"log_count:"<<Logger::log_count<<endl;
    Logger log_obj;
    log_obj.log("Program Running");
    cout<<"log_count:"<<Logger::log_count<<endl;
    return 0;
}
