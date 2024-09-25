#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/muistringpool_t.start.hpp"
namespace win
{
    // [struct _MUISTRINGPOOL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct muistringpool_t                  
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                  
        _m00 uint32_t total_size;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalSize
        _m01 uint16_t max_num_strings;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MaxNumStrings
        _m02 uint16_t num_strings;            //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .NumStrings
        _m03 uint16_t max_num_chars_in_pool;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MaxNumCharsInPool
        _m04 uint16_t num_chars_in_pool;      //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .NumCharsInPool
        _m05 int16_t* strings;                //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Strings
        _m06 wchar_t* pool;                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pool
                                            
        SDK_MAGIC_PROPERTIES( "_MUISTRINGPOOL.$", 0x20, true, 0x56f58c2487a1b708 );                      
        SDK_FIXED_SIZE( muistringpool_t, 0x20 );                      
    };                                      
};
#include "magic/muistringpool_t.end.hpp"
SDK_VERIFY( struct win::muistringpool_t, 0x20 );
