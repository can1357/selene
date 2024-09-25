#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/big_data_t.start.hpp"
namespace cm
{
    // [struct _CM_BIG_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct big_data_t           
    {                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                      
        _m00 uint16_t signature;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint16_t count;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Count
        _m02 uint32_t list;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .List
                                
        SDK_MAGIC_PROPERTIES( "_CM_BIG_DATA.$", 0x8, true, 0x3a6764de09b9427d );          
        SDK_FIXED_SIZE( big_data_t, 0x8 );          
    };                          
};
#include "magic/big_data_t.end.hpp"
SDK_VERIFY( struct cm::big_data_t, 0x8 );
