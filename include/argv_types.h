/**
 * @file argv_types.h
 * @author your name (you@domain.com)
 * @brief 
 * @version 0.1
 * @date 2023-05-08
 * 
 * @copyright Copyright (c) 2023
 * 
 */

/* Define to prevent recursive inclusion -------------------------------------*/
#ifndef _ARGV_TYPES_H_
#define _ARGV_TYPES_H_

/**
 * @brief Enumeration of parser errors
 */
typedef enum{
    ARGV_ERR__OK = 0x00,            /*!< Success */
    ARGV_ERR__ERROR,                /*!< Error */
}argv_err__e;

typedef void(*argvs_handler)(argv_err__e event, void* ext_data);

#endif /* _ARGV_TYPES_H_ */
