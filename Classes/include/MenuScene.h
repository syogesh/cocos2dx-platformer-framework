#ifndef __MENU_SCENE_H__
#define __MENU_SCENE_H__

#include "shef.h"

class MenuScene : public cocos2d::Scene
{
public:
    static cocos2d::Scene* createScene();

    virtual bool init();

    void menuCloseCallback(cocos2d::Ref* pSender);
    void levelOneCallback(cocos2d::Ref* pSender);

    CREATE_FUNC(MenuScene);
};

#endif // __MENU_SCENE_H__
