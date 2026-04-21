#include <iostream>
#include <string>

class Drone {
private:
    std::string name;
    float altitude;
    float battery;
    float x_cord;
    float y_cord;
    bool is_armed;

public:
    //Constructor
    Drone(std::string drone_name, float battery_level) {
        name = drone_name;
        altitude = 0.0;
        battery = battery_level;
        is_armed = false;
        x_cord = 0.0;
        y_cord = 0.0;
    }

    // Methods
    void battery_check() {
        if (battery > 50.0) {
        std::cout << "Battery OK: " << battery << "%" << std::endl;
    } else if (battery > 20.0) {
        std::cout << "Battery LOW: " << battery << "%" << std::endl;
    } else {
        std::cout << "CRITICAL: Return to base!" << std::endl;
    }

    }

    void arm() {
        is_armed = true;
        std::cout << name << " is armed." << std::endl;
    }
    
    void takeoff(float target_altitude) {
        if (!is_armed) {
            std::cout << "Cannot takeoff - not armed!" << std::endl;
            return;
        }
        altitude = target_altitude;
        std::cout << name << " ascending to " << altitude << "m" << std::endl;
    }

    void land() {
        altitude = 0.0;
        is_armed = false;
        std::cout << name << " landed." << std::endl;
    }

    void fly_to(float x, float y) {
        std::cout << "flying to coordinates: " << x << " , " << y << std::endl;
        x_cord = x;
        y_cord = y;
        battery = battery - 5;
    }

    void status() {
        std::cout << "\n--- " << name << " Status ---" << std::endl;
        std::cout << "Armed: " << is_armed << std::endl;
        std::cout << "Altitude: " << altitude << "m" << std::endl;
        std::cout << "x is: " << x_cord << std::endl;
        std::cout << "y is: " << y_cord << std::endl;
        std::cout << "Battery: " << battery << "%" << std::endl;
    }
};

int main() {
    Drone my_drone("AERIS_01", 95.0);

    my_drone.status();
    my_drone.arm();
    my_drone.takeoff(50.0);
    my_drone.status();
    my_drone.fly_to(20,40);
    my_drone.battery_check();
    my_drone.land();
    my_drone.status();

    return 0;
}