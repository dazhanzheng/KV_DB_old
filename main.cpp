//
// Created by dazhanzheng on 2021/10/10.
//

#include<iostream>
#include"kv.h"

int main(){
    std::string key,value;
    std::cin >> key >> value;
    const std::string key_c,value_c = value;
    KVDBHandler test("test.txt");
    
    
    return 0;
}

