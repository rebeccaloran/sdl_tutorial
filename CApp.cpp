#include "CApp.h"

CApp::CApp() {
    Running = true;
}

// Try to init game, if fail, error code, close program
int CApp::OnExecute() {
    if(OnInit() == false) {
        return -1;
    }

    // Structure that holds information about events
    SDL_Event Event;

    while(Running) {

        // Function that will grab any events waiting in the queue
        // Use `SDL_PollEvent` to check for events;
        // pass them one at a time to `OnEvent`
        while(SDL_PollEvent(&Event)) {
            OnEvent(&Event);
        }

        // Continue to loop, move data around, etc.
        OnLoop();

        // Render everything
        OnRender();

        // Repeat everything indefinitely until exit
    }

    // Clean up resources
    OnCleanup();

    return 0;
}

int main(int argc, char* argv[]) {
    CApp theApp;

    return theApp.OnExecute();
}
