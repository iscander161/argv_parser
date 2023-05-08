/**
 * @file argv_parser.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _ARGV_PARSER_H_
#define _ARGV_PARSER_H_

/* Includes ------------------------------------------------------------------*/
#include "argv_types.h"

/**
 * @brief Argument parsing start function
 * @param argc Number of arguments
 * @param argvs Array of arguments
 * @return argv_err__e Function execution result @ref argv_err__e
 */
argv_err__e argv_parser__start(int argc, char** argvs);

#endif /* _ARGV_PARSER_H_ */
