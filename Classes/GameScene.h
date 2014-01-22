//
//  GameScene.h
//  MyGame
//
//  Created by YuShuHui on 14-1-22.
//
//

#ifndef __MyGame__GameScene__
#define __MyGame__GameScene__

#include "cocos2d.h"

#include "Box2d/Box2d.h"


using namespace cocos2d;


#define PTM_TATIO 32
#define WORLD_TO_SCREEN(n) ((n) * PTM_TATIO)



class GameScene : public cocos2d::Layer
{
public:
    // there's no 'id' in cpp, so we recommend returning the class instance pointer
    static cocos2d::Scene* createScene();
    
    // Here's a difference. Method 'init' in cocos2d-x returns bool, instead of returning 'id' in cocos2d-iphone
    virtual bool init();
    
    // a selector callback
    void menuCloseCallback(Object* pSender);
    
    void menuBackCallback(Object* pSender);
    
    void tick(float dt);
    void createStar(Point p);
    bool touchBegan(Touch* touch, Event* event);

    // implement the "static create()" method manually
    CREATE_FUNC(GameScene);
};

#endif // __HELLOWORLD_SCENE_H__