//
// Created by jjasan2 on 12/1/2022.
//

#ifndef PROJECT_4_HARDWARE_H
#define PROJECT_4_HARDWARE_H


#include <string>
#include <unordered_map>

class Instruction;

class Hardware {

//    std::string data_memory[128];
    std::unordered_map<std::string, int> data_memory;
    Instruction* program_memory[128];
    int register_a, register_b, program_counter, zero_result, overflow;

public:
    Hardware();

    void setDataMemory(std::string key, int value);

    int getDataMemory(std::string key);

    int getRegisterA() const;

    void setRegisterA(int registerA);

    int getRegisterB() const;

    void setRegisterB(int registerB);

    int getProgramCounter() const;

    void setProgramCounter(int programCounter);

    void incrementProgramCounter();

    int getZeroResult() const;

    void setZeroResult(int zeroResult);

    int getOverflow() const;

    void setOverflow(int overflow);

    void addInstruction(Instruction* i);

    void showInstructions(int index);

    int executeNextInstruction();

    void display();

    virtual ~Hardware();
};


#endif //PROJECT_4_HARDWARE_H
