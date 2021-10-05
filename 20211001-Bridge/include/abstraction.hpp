/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#pragma once
#include <memory>

class AbstractionImpl;

class Abstraction {
 public:
    Abstraction(std::shared_ptr<AbstractionImpl> &impl);

    virtual ~Abstraction();

    virtual void Operate() = 0;

 protected:
    std::shared_ptr<AbstractionImpl> impl_ = nullptr;
};

class RefinedAbstraction : public Abstraction {
 public:
    RefinedAbstraction(std::shared_ptr<AbstractionImpl> &impl);

    ~RefinedAbstraction();

    void Operate();
};
