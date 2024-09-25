#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_type_pickling_info_t.start.hpp"
namespace win
{
    // [struct _MIDL_TYPE_PICKLING_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_type_pickling_info_t
    {                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint32_t version;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t flags;          //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
                                    
        SDK_MAGIC_PROPERTIES( "_MIDL_TYPE_PICKLING_INFO.$", 0x20, true, 0x9971e22fc42c4c8 );        
        SDK_FIXED_SIZE( midl_type_pickling_info_t, 0x20 );        
    };                              
};
#include "magic/midl_type_pickling_info_t.end.hpp"
SDK_VERIFY( struct win::midl_type_pickling_info_t, 0x20 );
