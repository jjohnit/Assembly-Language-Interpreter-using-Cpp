#include <iostream>
#include <fstream>
#include <sstream>

#include "Hardware.h"
#include "Instruction.h"
#include "ALI.h"

using namespace std;

int main() {

    ALI ali;
    ali.execute();
    return 0;
}
