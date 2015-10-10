//Header files contain definitions of classes

#ifndef GRAPHICS_H //header guards
#define GRAPHICS_H

struct SDL_Window; //forward declaring
struct SDL_Renderer; //helps to not include things too many times

class Graphics {
public:
	Graphics();
	~Graphics();
private:
	SDL_Window* _window; //where we render to
	SDL_Renderer* _renderer; //does the rendering to the window
};

#endif
