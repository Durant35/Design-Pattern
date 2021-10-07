/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#include "composite.hpp"
#include <iostream>

Composite::~Composite() {
    auto iter = component_vec_.begin();
    while (iter != component_vec_.end()) {
        if (nullptr != *iter) {
            std::cout << "---Delete " << (*iter)->GetName() << std::endl;
            delete *iter;
            *iter = nullptr;
        }
        component_vec_.erase(iter);
        iter = component_vec_.begin();
    }
}

void Composite::Operate() {
    std::cout << "I'm " << GetName() << std::endl;
    for (auto iter = component_vec_.begin(); iter != component_vec_.end();
         iter++) {
        if (nullptr != (*iter)) {
            (*iter)->Operate();
        }
    }
}

void Composite::Add(const Component *component) {
    if (nullptr == component) {
        return;
    }

    component_vec_.push_back(const_cast<Component *>(component));
}

void Composite::Remove(const Component *component) {
    if (nullptr == component) {
        return;
    }

    for (auto iter = component_vec_.begin(); iter != component_vec_.end();
         iter++) {
        if (nullptr != (*iter)) {
            if ((*iter)->GetName() == component->GetName()) {
                delete (*iter);
                *iter = nullptr;

                component_vec_.erase(iter);
                break;
            }
        }
    }
}

Component *Composite::GetChild(const size_t &index) {
    if (index >= component_vec_.size()) {
        return nullptr;
    }
    return component_vec_[index];
}
