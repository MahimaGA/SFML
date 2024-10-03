#include <SFML/Graphics.hpp>

int main()
{
    sf::RenderWindow window(sf::VideoMode(800, 800), "SFML works!");

    sf::RectangleShape bunnie;
    bunnie.setSize(sf::Vector2f(80.0f, 80.0f));
    bunnie.setPosition(sf::Vector2f(bunnie.getPosition().x, window.getSize().y-bunnie.getSize().y));

    while (window.isOpen())
    {
        sf::Event event;
        while (window.pollEvent(event))
        {
            switch(event.type)
            {
                case sf::Event::Closed:
                    window.close();
                    break;

                case sf::Event::KeyPressed:
                    if (sf::Keyboard::Key::A == event.key.code)
                    {
                        bunnie.move(-80,0);
                    }
                    if (sf::Keyboard::Key::D == event.key.code)
                    {
                        bunnie.move(80,0);
                    }
                    if (sf::Keyboard::Key::W == event.key.code)
                    {
                        bunnie.move(0,-80);
                    }
                    if (sf::Keyboard::Key::S == event.key.code)
                    {
                        bunnie.move(0,80);
                    }


                    break;

                    
            }


        }

        window.clear();
        window.draw(bunnie);
        window.display();
    }

    return 0;
}