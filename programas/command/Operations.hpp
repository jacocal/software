#include "Command.hpp"
#include "Sum.hpp"

template<class T, class Func>
class Operations {
    
    private:
        std::map<std::string, Func*> operationsWithPointers;
        std::map<std::string, Command<T,Func>*> operations;
    
    public:
        Operations()
        {
            
            operations.insert(std::make_pair("sum", new Sum<T,Func>));
            
        }
        
        void insert(std::string s,Func f)
        {
            
            operationsWithPointers.insert(std::make_pair(s,f));
            
        }
        
        Command<T,Func>* getOpFunc(std::string op)
        {
            typename std::map<std::string, Command<T,Func>*>::iterator it;
            it = operationsWithPointers.find(op);
            if(it != operationsWithPointers.end())
            {
                return it->second;
            }
            return NULL;
        }
        
        Command<T,Func>* getOp(std::string op)
        {
            typename std::map<std::string, Command<T,Func>*>::iterator it;
            it = operations.find(op);
            if(it != operations.end())
            {
                return it->second;
            }
            return NULL;
        }
    
};