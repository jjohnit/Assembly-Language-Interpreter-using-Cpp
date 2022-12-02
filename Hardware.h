//
// Created by jjasan2 on 12/1/2022.
//

#ifndef PROJECT_4_HARDWARE_H
#define PROJECT_4_HARDWARE_H


#include <string>
#include <unordered_map>
#include "Instruction.h"

class Hardware {

//    std::string data_memory[128];
    std::unordered_map<std::string, int> data_memory;
    Instruction program_memory[128];
    int register_a, register_b, program_counter, zero_result, overflow;

public:
    Hardware();

    const Instruction *getProgramMemory() const;

    int getRegisterA() const;

    void setRegisterA(int registerA);

    int getRegisterB() const;

    void setRegisterB(int registerB);

    int getProgramCounter() const;

    void setProgramCounter(int programCounter);

    int getZeroResult() const;

    void setZeroResult(int zeroResult);

    int getOverflow() const;

    void setOverflow(int overflow);
};


#endif //PROJECT_4_HARDWARE_H
