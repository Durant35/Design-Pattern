/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#include "abstraction.hpp"
#include "abstraction_impl.hpp"
#include <iostream>

Abstraction::Abstraction(std::shared_ptr<AbstractionImpl> &impl) {
    impl_ = impl;
}

Abstraction::~Abstraction() {}

RefinedAbstraction::RefinedAbstraction(std::shared_ptr<AbstractionImpl> &impl)
    : Abstraction(impl) {}

RefinedAbstraction::~RefinedAbstraction() {}

void RefinedAbstraction::Operate() {
    std::cout << "---RefinedAbstraction::Operate(): Do something else before "
                 "impl_->Operate()..."
              << std::endl;
    impl_->Operate();
    std::cout << "---RefinedAbstraction::Operate(): Do something else after "
                 "impl_->Operate()..."
              << std::endl;
}