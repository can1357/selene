#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/counted_reason_context_t.start.hpp"
namespace nt
{
    // [struct _COUNTED_REASON_CONTEXT]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct counted_reason_context_t               
    {                                             
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                        
        _m00 uint32_t          version;             //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint32_t          flags;               //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 nt::unicode_view  resource_file_name;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceFileName
        _m03 uint16_t          resource_reason_id;  //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ResourceReasonId
        _m04 uint32_t          string_count;        //{ +0x001c    +0x001c    +0x001c    +0x001c    +0x001c    } | .StringCount
        _m05 nt::unicode_view* reason_strings;      //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ReasonStrings
        _m06 nt::unicode_view  simple_string;       //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .SimpleString
                                                  
        SDK_NONVOL_PROPERTIES( "_COUNTED_REASON_CONTEXT.$", 0x28, true, 0xd5591a96f35acb3f );                   
        SDK_FIXED_SIZE( counted_reason_context_t, 0x28 );                   
    };                                            
};
#include "magic/counted_reason_context_t.end.hpp"
SDK_VERIFY( struct nt::counted_reason_context_t, 0x28 );
