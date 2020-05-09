#include "CApp.h"

bool CApp::OnInit() {
    
    if (SDL_Init(SDL_INIT_EVERYTHING) < 0) {
        
        return false; 
    }
    
    // (width, height, bit resolution(16 or 32), display flags)
    // SDL_HWSURFACE: use hardware memory
    // SDL_DOUBLEBUF: prevent flickering
    // SDL_FULLSCREEN
    if((Surf_Display = 
        SDL_SetVideoMode(640, 480, 32, SDL_HWSURFACE | SDL_DOUBLEBUF)) == NULL) {
        
        return false; 
    }  
    
    return true;
}
