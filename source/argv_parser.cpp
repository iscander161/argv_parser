/**
 * @file argv_parser.cpp
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Includes ------------------------------------------------------------------*/
#include <iostream>
#include "argv_parser.h"

/**
 * Argument parsing start function
 */
argv_err__e argv_parser__start(int argc, char** argvs, argvs_handler handler)
{
    std::cout << "The application has " << argc << " arguments:" << std::endl;

    for(int cnt = 0; cnt < argc; cnt++)
        std::cout << cnt + 1 << ": " << argvs[cnt] << std::endl;

    if(handler)
        handler(ARGV_ERR__OK, nullptr);

    return ARGV_ERR__OK;
}
