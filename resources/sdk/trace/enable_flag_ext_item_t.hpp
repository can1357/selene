#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/enable_flag_ext_item_t.start.hpp"
namespace trace
{
    // [struct _TRACE_ENABLE_FLAG_EXT_ITEM]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enable_flag_ext_item_t
    {                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                   
        _m00 uint16_t offset;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Offset
        _m01 uint16_t type;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Type
                                 
        SDK_MAGIC_PROPERTIES( "_TRACE_ENABLE_FLAG_EXT_ITEM.$", 0x4, true, 0x5178afd14dae61a2 );       
        SDK_FIXED_SIZE( enable_flag_ext_item_t, 0x4 );       
    };                           
};
#include "magic/enable_flag_ext_item_t.end.hpp"
SDK_VERIFY( struct trace::enable_flag_ext_item_t, 0x4 );
