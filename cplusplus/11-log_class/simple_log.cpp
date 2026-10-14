#include <iostream>

class Log{
    public:
    // enum é uma forma de dar nomes a um grupo de inteiros
        enum Level{
            LevelError, LevelWarning, LevelInfo
        };
        

    private:
        Level m_LogLevel;

    public:
        int setLogLevel(Level level){
            return m_LogLevel = level;
        }

        void logMessage(const char* msg){
                if(m_LogLevel == 0){
                    std::cout << "[ERROR]: " << msg << std::endl;
                }else if(m_LogLevel == 1){
                    std::cout << "[WARNING]: " << msg << std::endl;
                } else if (m_LogLevel ==2) {
                    std::cout << "[INFO]: " << msg << std::endl;
                } else {
                       std::cout << "NOT FOUND" << std::endl;
                }                                    
            }
};    

int main() {
    Log log;

    log.setLogLevel(Log::LevelError);
    log.logMessage("teste");
}