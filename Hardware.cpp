//
// Created by jjasan2 on 12/1/2022.
//

#include "iostream"
#include "Hardware.h"
#include "Instruction.h"

Hardware::Hardware() {
    register_a = register_b = program_counter = zero_result = overflow = 0;
}

void Hardware::setDataMemory(std::string key, int value) {
    data_memory[key] = value;
}

int Hardware::getDataMemory(std::string key) {
    return data_memory[key];
}

int Hardware::getRegisterA() const {
    return register_a;
}

void Hardware::setRegisterA(int registerA) {
    register_a = registerA;
}

int Hardware::getRegisterB() const {
    return register_b;
}

void Hardware::setRegisterB(int registerB) {
    register_b = registerB;
}

int Hardware::getProgramCounter() const {
    return program_counter;
}

void Hardware::setProgramCounter(int programCounter) {
    program_counter = programCounter;
}

void Hardware::incrementProgramCounter() {
    program_counter++;
}

int Hardware::getZeroResult() const {
    return zero_result;
}

void Hardware::setZeroResult(int zeroResult) {
    zero_result = zeroResult;
}

int Hardware::getOverflow() const {
    return overflow;
}

void Hardware::setOverflow(int overflow) {
    Hardware::overflow = overflow;
}

void Hardware::addInstruction(Instruction *i) {
    program_memory[program_counter] = i;
    program_counter++;
}

void Hardware::showInstructions(int index) {
    cout << program_memory[index]->printString << " " << program_memory[index]->argValue << endl;
//    int i = 0;
//    while(i < program_counter){
//        cout << program_memory[i]->printString << " " << program_memory[i]->argValue << endl;
//        i++;
//    }
}

int Hardware::executeNextInstruction() {
    if(program_memory[program_counter] == nullptr) {
        return 0;
    }
    else {
        showInstructions(program_counter);
        int isHalt = program_memory[program_counter]->execute();
        return isHalt;
    }
}

void Hardware::display() {
    // Display the values of arguments in data memory
    cout << "\nData memory contains : " << endl;
    for (auto i : data_memory){
        cout << i.first << " = " << i.second << endl;
    }

    cout << "Register A is " << register_a << "\n"
        "Register B is " << register_b << "\n"
        "Zero bit is " << zero_result << "\n"
        "Overflow bit is " << overflow << "\n"
        "Program counter is " << program_counter << "\n" << endl;
}

Hardware::~Hardware() {

}
