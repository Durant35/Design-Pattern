/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#include <memory>
#include "abstraction.hpp"
#include "abstraction_impl.hpp"

int main(int argc, char *argv[]) {
    std::shared_ptr<AbstractionImpl> impl_a =
        std::make_shared<ConcreteAbstractionImplA>();
    std::shared_ptr<Abstraction> abs =
        std::make_shared<RefinedAbstraction>(impl_a);
    abs->Operate();

    std::shared_ptr<AbstractionImpl> impl_b =
        std::make_shared<ConcreteAbstractionImplB>();
    std::shared_ptr<Abstraction> abs2 =
        std::make_shared<RefinedAbstraction>(impl_b);
    abs2->Operate();

    return 0;
}
