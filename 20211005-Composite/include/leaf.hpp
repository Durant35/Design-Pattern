/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#pragma once
#include "component.hpp"
#include <string>
#include <iostream>

class Leaf : public Component {
 public:
    Leaf(const std::string &name) : Component(name) {}

    virtual ~Leaf() = default;

    void Operate() { std::cout << "I'm " << GetName() << std::endl; }

    Component *GetChild(const size_t &index) { return nullptr; }
};
