//
// Created by jjasan2 on 12/2/2022.
//

#include <cstring>
#include "Instruction.h"
#include "iostream"
#include <sstream>

using namespace std;

Instruction::Instruction() {
    printString = argValue = "";
}

Instruction::Instruction(std::string instruction) {

    // Assign the values of data members by splitting the input
    stringstream splittedString(instruction);
    splittedString >> printString;
    splittedString >> argValue;

    cout << "data members are " << printString << " & " << argValue << std::endl;
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

void DEC::execute() {
    cout << "DEC Execute" << std::endl;
}

void LDA::execute() {
    cout << "LDA Execute";
}

void LDB::execute() {
    cout << "LDB Execute";
}

void LDI::execute() {
    cout << "LDI Execute";
}

void STR::execute() {
    cout << "STR Execute";
}

void XCH::execute() {
    cout << "XCH Execute";
}

void JMP::execute() {
    cout << "JMP Execute";
}

void JZS::execute() {
    cout << "JZS Execute";
}

void JVS::execute() {
    cout << "JVS Execute";
}

void ADD::execute() {
    cout << "ADD Execute";
}

void HLT::execute() {
    cout << "HLT Execute";
}