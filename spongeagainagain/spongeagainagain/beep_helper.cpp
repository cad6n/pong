#include <windows.h>
#include <thread>

void playBeepAsync(int frequency, int duration) {
    std::thread([frequency, duration]() {
        Beep(frequency, duration);
        }).detach(); // Detach the thread to let it run independently
}
