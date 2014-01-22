//
//  MainMenuScene.h
//  MyGame
//
//  Created by YuShuHui on 14-1-22.
//
//

#ifndef __MyGame__MainMenuScene__
#define __MyGame__MainMenuScene__

#include "cocos2d.h"

class MainMenuScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(Object* pSender);
    void menuStartCallback(Object* pSender);
    void menuHelpCallback(Object* pSender);

    
    // implement the "static create()" method manually
    CREATE_FUNC(MainMenuScene);
};

#endif // __MainMenu_SCENE_H__