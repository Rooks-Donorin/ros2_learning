#include <iostream>

int main() {
    // If statement
    float battery = 78.5;

    if (battery > 50.0) {
        std::cout << "battery OK: " << battery << "%" << std::endl;
    }
    else if (battery > 20.0) {
        std::cout << "battery LOW: " << battery << "%" << std::endl;
    }
    else {
        std::cout << "CRITICAL: Return to base!" << std::endl;
    }

    // For loop - simulating sensor readings
    std::cout << "\nSensor readings:" << std::endl;
    for (int i = 0; i < 5; i++) {
        std::cout << "  Reading "<< i + 1 << ": " << (20.0 + i * 0.5) << std::endl;
    }

    // While loop
    int countdown = 5;
    while (countdown > 0) {
        std::cout << "  " << countdown << std::endl;
        countdown--;
    }
    std::cout << "  Liftoff!" << std::endl;

    return 0;
}