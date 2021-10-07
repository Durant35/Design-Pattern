/**
 * Copyright (C) 2021 by AutoSense. All rights reserved.
 * Gary Chan <chenshj35@mail2.sysu.edu.cn>
 */

#include <iostream>
#include "composite.hpp"
#include "leaf.hpp"

int main(int argc, char *argv[]) {
    Component *pBjHeadOffice = new Composite("Beijing Head Office");
    Component *pShSubOffice = new Composite("Shanghai Branch");
    Component *pCdSubOffice = new Composite("Chengdu Branch");
    Component *pBtSubOffice = new Composite("Baotou Branch");
    Component *pBjHr = new Leaf("Beijing Human Resources Department");
    pBjHeadOffice->Add(pShSubOffice);
    pBjHeadOffice->Add(pCdSubOffice);
    pBjHeadOffice->Add(pBtSubOffice);
    pBjHeadOffice->Add(pBjHr);

    Component *pShHr = new Leaf("Shanghai Human Resources Department");
    Component *pShPur = new Leaf("Shanghai Purchasing Department");
    Component *pShSale = new Leaf("Shanghai Sales department");
    Component *pShQC = new Leaf("Shanghai Quality Supervision Department");
    pShSubOffice->Add(pShHr);
    pShSubOffice->Add(pShPur);
    pShSubOffice->Add(pShSale);
    pShSubOffice->Add(pShQC);
    std::cout << "Shanghai Sub Office->Operate: " << std::endl;
    pShSubOffice->Operate();
    std::cout << "\nBeijing Head Office->Operate: " << std::endl;
    pBjHeadOffice->Operate();

    // 公司不景气，需要关闭上海质量监督部门
    std::cout << "\n----Shanghai Quality Supervision Department Closing..."
              << std::endl;
    pShSubOffice->Remove(pShQC);
    std::cout << "Shanghai Sub Office->Operate: " << std::endl;
    pShSubOffice->Operate();
    std::cout << "\nBeijing Head Office->Operate: " << std::endl;
    pBjHeadOffice->Operate();

    return 0;
}
