//
// Created by jjasan2 on 12/2/2022.
//

#ifndef PROJECT_4_INSTRUCTION_H
#define PROJECT_4_INSTRUCTION_H


#include <string>
#include "Hardware.h"

using namespace std;

class Instruction {
    std::string printString, argValue;

public:
    Instruction();
    Instruction(string instruction);
    virtual void execute() = 0;
};

class DEC : public Instruction {
public:
    explicit DEC(const string &instruction);

private:
    void execute();
};

class LDA : public Instruction {
public:
    explicit LDA(const string &instruction);

private:
    void execute();
};

class LDB : public Instruction {
public:
    explicit LDB(const string &instruction);

private:
    void execute();
};

class LDI : public Instruction {
public:
    explicit LDI(const string &instruction);

private:
    void execute();
};

class STR : public Instruction {
public:
    explicit STR(const string &instruction);

private:
    void execute();
};

class XCH : public Instruction {
public:
    explicit XCH(const string &instruction);

private:
    void execute();
};

class JMP : public Instruction {
public:
    explicit JMP(const string &instruction);

private:
    void execute();
};

class JZS : public Instruction {
public:
    explicit JZS(const string &instruction);

private:
    void execute();
};

class JVS : public Instruction {
public:
    explicit JVS(const string &instruction);

private:
    void execute();
};

class ADD : public Instruction {
public:
    explicit ADD(const string &instruction);

private:
    void execute();
};

class HLT : public Instruction {
public:
    explicit HLT(const string &instruction);

private:
    void execute();
};
#endif //PROJECT_4_INSTRUCTION_H
