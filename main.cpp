#include <iostream>
#include <fstream>
#include <sstream>

#include "Hardware.h"
#include "Instruction.h"

using namespace std;

int main() {
    Hardware hardware;
    Instruction::hardware = &hardware;

    // For reading a file
    fstream file;
    file.open("../mul.txt");
    string sal;
    string instruction_type;
    if(file.is_open()){
        // For reading each line in a file
        while (getline(file, sal)) {

            // Create the instruction object based on the instruction type.
            Instruction *instruction;
            stringstream stream(sal);
            stream >> instruction_type;

            if (instruction_type == "DEC"){
                instruction = new DEC(sal);
            }
            else if (instruction_type == "LDA"){
                instruction = new LDA(sal);
            }
            else if (instruction_type == "LDB"){
                instruction = new LDB(sal);
            }
            else if (instruction_type == "LDI"){
                instruction = new LDI(sal);
            }
            else if (instruction_type == "STR"){
                instruction = new STR(sal);
            }
            else if (instruction_type == "XCH"){
                instruction = new XCH(sal);
            }
            else if (instruction_type == "JMP"){
                instruction = new JMP(sal);
            }
            else if (instruction_type == "JZS"){
                instruction = new JZS(sal);
            }
            else if (instruction_type == "JVS"){
                instruction = new JVS(sal);
            }
            else if (instruction_type == "ADD"){
                instruction = new ADD(sal);
            }
            else if (instruction_type == "HLT"){
                instruction = new HLT(sal);
            }
            else {
                cout << "Couldn't recognise the instruction type " << instruction_type << endl;
                break;
            }

            hardware.addInstruction(instruction);
        }
    }

    // Reset the program counter to start from the 0th position
    hardware.setProgramCounter(0);

    while (true){
        cout << "s -> Execute a single line of code\n"
                "a -> Execute all the instructions until a halt instruction\n"
                "q -> Quit" << endl;
        cout << "Enter a command :";
        char command;
        cin >> command;
        cout << "\n";
        switch (command) {
            case 's':
                hardware.executeNextInstruction();
                hardware.display();
                break;
            case 'a':
                // Execute the instruction
                while(true) {
                    // break when there is no instruction to execute or after executing halt
                    if (hardware.executeNextInstruction() <= 0){
                        break;
                    }
                }
                break;
            case 'q':
                return 0;
        }
    }
    return 0;
}
