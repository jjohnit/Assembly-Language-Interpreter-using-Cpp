//
// Created by jjasan2 on 12/2/2022.
//

#ifndef PROJECT_4_INSTRUCTION_H
#define PROJECT_4_INSTRUCTION_H


#include <string>
#include "Hardware.h"

class Instruction {
public:
    Instruction(string instruction);

protected:
    static Hardware hardware;
    std::string printString, argValue;

    virtual void execute() = 0;

};

class DEC : Instruction {
public:
    explicit DEC(const string &instruction);

private:
    void execute();
};

class LDA : Instruction {
public:
    explicit LDA(const string &instruction);

private:
    void execute();
};

class LDB : Instruction {
public:
    explicit LDB(const string &instruction);

private:
    void execute();
};

class LDI : Instruction {
public:
    explicit LDI(const string &instruction);

private:
    void execute();
};

class STR : Instruction {
public:
    explicit STR(const string &instruction);

private:
    void execute();
};

class XCH : Instruction {
public:
    explicit XCH(const string &instruction);

private:
    void execute();
};

class JMP : Instruction {
public:
    explicit JMP(const string &instruction);

private:
    void execute();
};

class JZS : Instruction {
public:
    explicit JZS(const string &instruction);

private:
    void execute();
};

class JVS : Instruction {
public:
    explicit JVS(const string &instruction);

private:
    void execute();
};

class ADD : Instruction {
public:
    explicit ADD(const string &instruction);

private:
    void execute();
};

class HLT : Instruction {
public:
    explicit HLT(const string &instruction);

private:
    void execute();
};
#endif //PROJECT_4_INSTRUCTION_H
