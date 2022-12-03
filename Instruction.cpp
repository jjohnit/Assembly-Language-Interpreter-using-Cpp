//
// Created by jjasan2 on 12/2/2022.
//

#include <cstring>
#include "iostream"
#include <sstream>
#include <cmath>

#include "Instruction.h"

using namespace std;

Hardware* Instruction::hardware;

Instruction::Instruction() {
    printString = argValue = "";
}

Instruction::Instruction(std::string instruction) {

    // Assign the values of data members by splitting the input
    stringstream splittedString(instruction);
    splittedString >> printString;
    splittedString >> argValue;

//    cout << "data members are " << printString << " & " << argValue << std::endl;
}

DEC::DEC(const std::string &instruction) : Instruction(instruction) {}

LDA::LDA(const string &instruction) : Instruction(instruction) {}

LDB::LDB(const string &instruction) : Instruction(instruction) {}

LDI::LDI(const string &instruction) : Instruction(instruction) {}

STR::STR(const string &instruction) : Instruction(instruction) {}

XCH::XCH(const string &instruction) : Instruction(instruction) {}

JMP::JMP(const string &instruction) : Instruction(instruction) {}

JZS::JZS(const string &instruction) : Instruction(instruction) {}

JVS::JVS(const string &instruction) : Instruction(instruction) {}

ADD::ADD(const string &instruction) : Instruction(instruction) {}

HLT::HLT(const string &instruction) : Instruction(instruction) {}

int DEC::execute() {
    hardware->setDataMemory(argValue, 0);
    hardware->incrementProgramCounter();
    return 1;
}

int LDA::execute() {
    hardware->setRegisterA(hardware->getDataMemory(argValue));
    hardware->incrementProgramCounter();
    return 1;
}

int LDB::execute() {
    hardware->setRegisterB(hardware->getDataMemory(argValue));
    hardware->incrementProgramCounter();
    return 1;
}

int LDI::execute() {
    hardware->setRegisterA(stoi(argValue));
    hardware->incrementProgramCounter();
    return 1;
}

int STR::execute() {
    hardware->setDataMemory(argValue, hardware->getRegisterA());
    hardware->incrementProgramCounter();
    return 1;
}

int XCH::execute() {
    int temp = hardware->getRegisterA();
    hardware->setRegisterA(hardware->getRegisterB());
    hardware->setRegisterB(temp);
    hardware->incrementProgramCounter();
    return 1;
}

int JMP::execute() {
    hardware->setProgramCounter(stoi(argValue));
    return 1;
}

int JZS::execute() {
    if(hardware->getZeroResult() == 1){
        hardware->setProgramCounter(stoi(argValue));
    }
    else {
        hardware->incrementProgramCounter();
    }
    return 1;
}

int JVS::execute() {
    if(hardware->getOverflow() == 1){
        hardware->setProgramCounter(stoi(argValue));
    }
    else {
        hardware->incrementProgramCounter();
    }
    return 1;
}

int ADD::execute() {
    // Check for overflow before adding the values
    if (hardware->getRegisterA() >= 0 && hardware->getRegisterB() >= 0
        && (hardware->getRegisterA() > INT_MAX - hardware->getRegisterB())) {
        hardware->setOverflow(1);
    }
    else if (hardware->getRegisterA() < 0 && hardware->getRegisterB() < 0
             && (hardware->getRegisterA() < INT_MIN - hardware->getRegisterB())) {
        hardware->setOverflow(1);
    }
    // Add the values if there won't be an overflow
    else {
        hardware->setRegisterA(hardware->getRegisterA() + hardware->getRegisterB());
        if (hardware->getRegisterA() == 0) {
            hardware->setZeroResult(1);
        }
        else {
            hardware->setZeroResult(0);
        }
    }
//    if (hardware->getRegisterA() > (pow(2, 31) - 1) ||
//            hardware->getRegisterA() < -(pow(2, 31))) {
//        hardware->setOverflow(1);
//    }
//    else {
//        hardware->setOverflow(0);
//    }
    hardware->incrementProgramCounter();
    return 1;
}

int HLT::execute() {
    hardware->display();
    hardware->incrementProgramCounter();
    hardware->setRegisterA(0);
    hardware->setRegisterB(0);
    hardware->setOverflow(0);
    hardware->setZeroResult(0);
    return -1;
}