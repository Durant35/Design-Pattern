/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#pragma once
#include "component.hpp"
#include <string>
#include <vector>

class Composite : public Component {
 public:
    Composite(const std::string &name) : Component(name) {}

    virtual ~Composite();

    void Operate();

    void Add(const Component *);
    void Remove(const Component *);
    Component *GetChild(const size_t &index);

 private:
    std::vector<Component *> component_vec_;
};
