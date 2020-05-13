#include "Game.h"
using namespace std;

void Game::gamestart(sf::RenderWindow &window,string path,string path1 ,string path2){
    yellow.loadFromFile(path);/**/logo.loadFromFile(path1);/**/play.loadFromFile(path2);
    texture1.create(550,650);/**/texture2.create(410,400);/**/texture3.create(178,144);
    texture1.update(yellow);/**/texture2.update(logo);/**/texture3.update(play);
    texture1.setSmooth(true);/**/texture2.setSmooth(true);/**/texture3.setSmooth(true);
    sprite1.setTexture(texture1);/**/sprite2.setTexture(texture2);/**/sprite3.setTexture(texture3);
    sprite1.setPosition(0,0);/**/sprite2.setPosition(70,10);/**/sprite3.setPosition(176,400);
    window.draw(sprite1);/**/window.draw(sprite2);/**/window.draw(sprite3);
    window.display();

}

void Game::drawgrid(sf::RenderWindow &window,string path){
    yellow.loadFromFile(path);
    texture1.create(550,650);
    texture1.update(yellow);
    texture1.setSmooth(true);
    sprite1.setTexture(texture1);
    sprite1.setPosition(0,0);
    window.draw(sprite1);
    sf::Image lose;
    lose.loadFromFile("grid.png");
    sf::Texture textlose;
    textlose.create(467,466);
    textlose.update(lose);
    textlose.setSmooth(true);
    sf::Sprite splose;
    splose.setTexture(textlose);
    splose.setPosition(40,100);
    window.draw(splose);
    window.display();

}

void Game::winner_drawc(sf::RenderWindow &window, string path2,int var1,int var2,int var3,int var4){

    sf::Image backg;
    backg.loadFromFile(path2);
    sf::Texture textlos;
    textlos.create(160,160);
    textlos.update(backg);
    textlos.setSmooth(true);
    sf::Sprite splos;
    splos.setTexture(textlos);
   // window.draw(splos);
    ///
    splos.setPosition(var1,var4);
    window.draw(splos);
    /////
    splos.setPosition(var2,var4);
    window.draw(splos);
    ////
    splos.setPosition(var3,var4);
    window.draw(splos);
    ///
    window.display();






}

void Game::winner_drawl(sf::RenderWindow &window,string path2,int var1,int var2,int var3,int var4){

sf::Image backg;
    backg.loadFromFile(path2);
    sf::Texture textlos;
    textlos.create(160,160);
    textlos.update(backg);
    textlos.setSmooth(true);
    sf::Sprite splos;
    splos.setTexture(textlos);
   // window.draw(splos);
    ///
    splos.setPosition(var4,var1);
    window.draw(splos);
    /////
    splos.setPosition(var4,var2);
    window.draw(splos);
    ////
    splos.setPosition(var4,var3);
    window.draw(splos);
    ///
    window.display();





}

void Game::winner_drawD(sf::RenderWindow &window,string path2){

  sf::Image backg;
    backg.loadFromFile(path2);
    sf::Texture textlos;
    textlos.create(160,160);
    textlos.update(backg);
    textlos.setSmooth(true);
    sf::Sprite splos;
    splos.setTexture(textlos);
   // window.draw(splos);
    ///
    splos.setPosition(35,95);
    window.draw(splos);
    /////
    splos.setPosition(195,255);
    window.draw(splos);
    ////
    splos.setPosition(355,412);
    window.draw(splos);
    ///
    window.display();


}

void Game::winner_drawAD(sf::RenderWindow &window,string path2){
sf::Image backg;
    backg.loadFromFile(path2);
    sf::Texture textlos;
    textlos.create(160,160);
    textlos.update(backg);
    textlos.setSmooth(true);
    sf::Sprite splos;
    splos.setTexture(textlos);
   // window.draw(splos);
    ///
    splos.setPosition(355,95);
    window.draw(splos);
    /////
    splos.setPosition(195,255);
    window.draw(splos);
    ////
    splos.setPosition(35,412);
    window.draw(splos);
    ///
    window.display();




}

void Game::human_sign(sf::RenderWindow &window,string path2,int var1,int var2){
    sf::Image logo;
    logo.loadFromFile(path2);
    texture1.create(160,160);
    texture1.update(logo);
    texture1.setSmooth(true);
    sprite1.setTexture(texture1);
    sprite1.setPosition(var1,var2);
    window.draw(sprite1);
    window.display();
}

void Game::check_end(sf::RenderWindow &window ,string path){
    sf::Image logo;
    logo.loadFromFile("retry.png");
    texture1.create(145,152);
    texture1.update(logo);
    texture1.setSmooth(true);
    sprite1.setTexture(texture1);
    sprite1.setPosition(210,250);
    ///
    sf::Image yellow;
    yellow.loadFromFile(path);
    texture2.create(550,650);
    texture2.update(yellow);
    texture2.setSmooth(true);
    sprite2.setTexture(texture2);
    sprite2.setPosition(0,0);
    //////

    window.draw(sprite2);
    window.draw(sprite1);
    window.display();



}


Game::Game()
{
void draw(sf::RenderWindow &window);
    //ctor
}

Game::~Game()
{
    //dtor
}
