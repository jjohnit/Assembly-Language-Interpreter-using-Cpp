//
// Created by jjasan2 on 12/2/2022.
//

#include "Instruction.h"

using namespace std;

Instruction::Instruction(std::string instruction) {}

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
