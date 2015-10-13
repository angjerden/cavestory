//Header files contain definitions of classes

#ifndef GRAPHICS_H //header guards
#define GRAPHICS_H

#include <map>
#include <string>

/*
 * Graphics class
 * Holds all information dealing with graphics for the game
 */

struct SDL_Window; //forward declaring
struct SDL_Renderer; //helps to not include things too many times

class Graphics {
public:
	Graphics();
	~Graphics();

	/* SDL_Surface* loadImage
	 * Loads an image into the _spriteSheets map if it doesn't already exist
	 * As a result, each image will only be loaded once
	 * Returns the image from the map regardless of whether or not it was just loaded
	 */
	SDL_Surface* loadImage(const std::string &filePath);

	/* void blitSurface
	 * Draws a texture to a certain part of the screen
	 */
	void blitSurface(SDL_Texture* source, SDL_Rect* sourceRectangle, SDL_Rect* destinationRectangle);

	/* void flip
	 * Renders everything to the screen
	 */
	void flip();

	/* void clear
	 * Clears the screen
	 */
	void clear();

	/* SDL_Renderer* getRenderer
	 * Returns the renderer so that we can use it elsewhere
	 */
	SDL_Renderer* getRenderer() const;
private:
	SDL_Window* _window; //where we render to
	SDL_Renderer* _renderer; //does the rendering to the window

	std::map<std::string, SDL_Surface*> _spriteSheets; //holds every sprite sheet we have loaded into the game
};

#endif
