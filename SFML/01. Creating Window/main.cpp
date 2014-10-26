//We import Graphics.hpp from SFML, because we want to draw things in our window. Normally, for opening and managing a window, you could import Window.hpp. Graphics.hpp has the exact window managing, so this is more useful to us.
#include <SFML/Graphics.hpp>

//This is where all the magic happens. When the application starts running, it's running everything in this function.
int main()
{
	 //The first thing that happens, yes, we create a RenderWindow. A window in which we can render things! (Gee, thank, Sherlock)
	 //In sf::VideoMode we can set the resolution, but that's not the only thing we could do with the window, but that's something for later on, let's just keep the focus on this for now.
	 //For more information on sf::RenderWindow/Window, check this page: http://sfml-dev.org/tutorials/2.1/window-window.php
    sf::RenderWindow window(sf::VideoMode(640, 480), "Silicon Programming Diary");

	//Without this while loop, the application would open and close, so we check if your Rendering Window is open or not. If so, we do everything in the loop. But, if not... we stop and close the application.
    while (window.isOpen())
    {
  
	  //We create an sf::Event variable. With this variable, we can check what exactly happens inside this window. For example, if we click the close button of the window, what key is pressed on the keyboard, if the mouse is being used. You get my point, I hope.
	  //For more information on the sf::Event, check this page: http://sfml-dev.org/tutorials/2.1/window-events.php
        sf::Event event;
  
		//While there are events happening
        while (window.pollEvent(event))
        {
			//Pretty obvious, if the event reads sf::Event::Closed, do window.close();
            if (event.type == sf::Event::Closed)
                window.close();
        }
 
		//We clear our window from all previously drawn things, this is necessary. If we wouldn't do it, all the previously drawn things would stay on screen and only the parts where something will be drawn, will be covered.
        window.clear();
  
		//Everything that should be drawn, do it here, right after window.clear() but before window.display. We want to display all our drawn things, right?
  
		//And finally, we show everything we want to show!
        window.display();
    }
}