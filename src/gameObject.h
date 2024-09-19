#pragma once

class GameObject{
public:
    GameObject(int x,int y):posX(x),posY(y){}
    virtual ~GameObject();
    virtual void draw() const = 0;
    virtual void update() = 0;
protected:
    int posX;
    int posY;
};

inline GameObject::~GameObject(){}