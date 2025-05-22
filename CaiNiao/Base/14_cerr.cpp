#include <iostream>
#include <string>
int main(){
    std::string err_msg="Error Occured!";
    std::string normal_msg="Normal Message!";
    std::clog<<normal_msg<<std::endl;
    std::cerr<<err_msg<<std::endl;
    std::clog<<normal_msg<<std::endl;
    std::clog<<normal_msg<<std::endl;
    std::clog<<normal_msg<<std::endl;
    std::clog<<normal_msg<<std::endl;
    std::cerr<<err_msg<<std::endl;
    std::cerr<<err_msg<<std::endl;
    std::clog<<normal_msg<<std::endl;
    std::clog<<normal_msg<<std::endl;
    std::clog<<normal_msg<<std::flush;
    return 0;
}