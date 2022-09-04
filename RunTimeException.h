//
// Created by jeffr on 26/8/2022.
//

#pragma once
#include <iostream>
using namespace std;
class RunTimeException{
private:
    string errormsg;
public:
    RunTimeException(const string err){errormsg=err; }
    string getMessage() const {return errormsg; }
};
class StackEmpty : public RunTimeException { public:
       StackEmpty(const string err) : RunTimeException(err){}
    };
class StackFull : public RunTimeException { public:
StackFull(const string err) : RunTimeException(err){}
};


