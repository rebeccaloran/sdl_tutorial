#ifndef _CAPP_H
    #define _CAPP_H_

#include <SDL/SDL.h>

class CApp {
    private:

        bool Running;
        
        SDL_Surface* Surf_Display;

    public:

        CApp();

        int OnExecute();

    public:

        bool OnInit();

        void OnEvent(SDL_Event* Event);

        void OnLoop();

        void OnRender();

        void OnCleanup();
};

#endif
