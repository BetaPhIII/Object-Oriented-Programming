#include <string> 
#include <iostream> 
 
using std::string; 
 
class Attendance { 
    public:
    //user defined constructor
    Attendance(const string& atd) { 
        setAttendance(atd);
    } 
    //method checkAttendance calls private functions
    bool checkAttendance() { 
        if(isAbsent()) {return false;}
        else if(isLate()) {return false;}
        else {return true;}
    } 
    void setAttendance(string atd_) {
        attendance = atd_;
    } 
    private:
    string attendance;
    //implementation of isAbsent function
    bool isAbsent() { 
        int absenceCount = 0; 
        for(int i = 0; i<attendance.size(); i++) {
            if(attendance[i] == 'A') {
                absenceCount++;
                if(absenceCount>=2) {return true;}
            }
        } 
        return false;
    }
    
    //implementation of isLate function
    bool isLate() { 
        for(int i = 0; i<attendance.size(); i++) {
            if(attendance[i] == 'L' && attendance[i+1] == 'L' && attendance[i+2] == 'L') {
                return true;
            }
        }
        return false;
    } 
}; 
 
int main(void) { 
    //declare two Attendance objects named atd1 and atd2
    Attendance atd1("PPALLP"); 
    Attendance atd2("PPALLL"); 
 
    //check if the objects passed or failed using the checkAttendance function
    (atd1.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";     std::cout << std::endl; 
    (atd2.checkAttendance()) ? std::cout << "PASSED" : std::cout << "FAILED";     std::cout << std::endl; 
 
    return 0; 
} 
