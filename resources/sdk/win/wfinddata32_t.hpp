#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wfinddata32_t.start.hpp"
namespace win
{
    // [struct _wfinddata32_t]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wfinddata32_t                          
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                        
        _m00 uint32_t                 attrib;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .attrib
        _m01 int32_t                  time_create;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .time_create
        _m02 int32_t                  time_access;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .time_access
        _m03 int32_t                  time_write;   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .time_write
        _m04 uint32_t                 size;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .size
        _m05 sdk::array<wchar_t, 260> name;         //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .name
                                                  
        SDK_MAGIC_PROPERTIES( "_wfinddata32_t.$", 0x21c, true, 0x782304ff862337d );            
        SDK_FIXED_SIZE( wfinddata32_t, 0x21c );            
    };                                            
};
#include "magic/wfinddata32_t.end.hpp"
SDK_VERIFY( struct win::wfinddata32_t, 0x21c );
