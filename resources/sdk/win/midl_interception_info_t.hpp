#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/midl_interception_info_t.start.hpp"
namespace win
{
    // [struct _MIDL_INTERCEPTION_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct midl_interception_info_t                   
    {                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                            
        _m00 uint32_t        version;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 const uint8_t*  proc_string;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcString
        _m02 const uint16_t* proc_format_offset_table;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ProcFormatOffsetTable
        _m03 uint32_t        proc_count;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ProcCount
        _m04 const uint8_t*  type_string;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .TypeString
                                                      
        SDK_MAGIC_PROPERTIES( "_MIDL_INTERCEPTION_INFO.$", 0x28, true, 0x16592a1f65828643 );                         
        SDK_FIXED_SIZE( midl_interception_info_t, 0x28 );                         
    };                                                
};
#include "magic/midl_interception_info_t.end.hpp"
SDK_VERIFY( struct win::midl_interception_info_t, 0x28 );
