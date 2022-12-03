//
// Created by jjasan2 on 12/2/2022.
//

#include <cstring>
#include "Instruction.h"
#include "iostream"
#include <sstream>

using namespace std;

Hardware Instruction::hardware;

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
    cout << "DEC Execute" << std::endl;
    return 1;
}

int LDA::execute() {
    cout << "LDA Execute";
    return 1;
}

int LDB::execute() {
    cout << "LDB Execute";
    return 1;
}

int LDI::execute() {
    cout << "LDI Execute";
    return 1;
}

int STR::execute() {
    cout << "STR Execute";
    return 1;
}

int XCH::execute() {
    cout << "XCH Execute";
    return 1;
}

int JMP::execute() {
    cout << "JMP Execute";
    return 1;
}

int JZS::execute() {
    cout << "JZS Execute";
    return 1;
}

int JVS::execute() {
    cout << "JVS Execute";
    return 1;
}

int ADD::execute() {
    cout << "ADD Execute";
    return 1;
}

int HLT::execute() {
    cout << "HLT Execute";
    return -1;
}