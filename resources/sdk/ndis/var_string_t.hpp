#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/var_string_t.start.hpp"
namespace ndis
{
    // [struct _VAR_STRING]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct var_string_t                
    {                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                             
        _m00 uint32_t ul_total_size;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .ulTotalSize
        _m01 uint32_t ul_needed_size;    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ulNeededSize
        _m02 uint32_t ul_used_size;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ulUsedSize
        _m03 uint32_t ul_string_format;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ulStringFormat
        _m04 uint32_t ul_string_size;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ulStringSize
        _m05 uint32_t ul_string_offset;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .ulStringOffset
                                       
        SDK_MAGIC_PROPERTIES( "_VAR_STRING.$", 0x18, true, 0x87fccd01db9f8ba3 );                 
        SDK_FIXED_SIZE( var_string_t, 0x18 );                 
    };                                 
};
#include "magic/var_string_t.end.hpp"
SDK_VERIFY( struct ndis::var_string_t, 0x18 );
