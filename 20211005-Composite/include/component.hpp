/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#pragma once
#include <string>
#include <cstddef>

// 抽象的部件类描述将来所有部件共有的行为
class Component {
 public:
    Component(const std::string &name) : name_(name) {}

    virtual ~Component() = default;

    virtual void Operate() = 0;

    virtual void Add(const Component *) {}
    virtual void Remove(const Component *) {}
    /**
     * @param index, [0, size-1)
     * @return
     */
    virtual Component *GetChild(const size_t &index) { return nullptr; }

    virtual std::string GetName() const { return name_; }

 protected:
    std::string name_;
};
