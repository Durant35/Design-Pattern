/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#pragma once

class AbstractionImpl {
 public:
    virtual ~AbstractionImpl();

    virtual void Operate() = 0;

 protected:
    AbstractionImpl();
};

class ConcreteAbstractionImplA : public AbstractionImpl {
 public:
    ConcreteAbstractionImplA();

    ~ConcreteAbstractionImplA();

    virtual void Operate();
};

class ConcreteAbstractionImplB : public AbstractionImpl {
 public:
    ConcreteAbstractionImplB();

    ~ConcreteAbstractionImplB();

    virtual void Operate();
};
