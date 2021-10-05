/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#include "abstraction_impl.hpp"
#include <iostream>

AbstractionImpl::AbstractionImpl() {}

AbstractionImpl::~AbstractionImpl() {}

void AbstractionImpl::Operate() {
    std::cout << "AbstractionImpl::Operate()..." << std::endl;
}

ConcreteAbstractionImplA::ConcreteAbstractionImplA() {}

ConcreteAbstractionImplA::~ConcreteAbstractionImplA() {}

void ConcreteAbstractionImplA::Operate() {
    std::cout << "ConcreteAbstractionImplA::Operate()..." << std::endl;
}

ConcreteAbstractionImplB::ConcreteAbstractionImplB() {}

ConcreteAbstractionImplB::~ConcreteAbstractionImplB() {}

void ConcreteAbstractionImplB::Operate() {
    std::cout << "ConcreteAbstractionImplB::Operate()..." << std::endl;
}
