//
// Created by jjasan2 on 12/1/2022.
//

#include "Hardware.h"

Hardware::Hardware() {
    register_a = register_b = program_counter = zero_result = overflow = 0;
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

Hardware::~Hardware() {

}
