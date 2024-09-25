#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/reason_buffer_t.start.hpp"
namespace win
{
    // [struct _REASON_BUFFER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct reason_buffer_t                        
    {                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                        
        _m00 uint32_t flags;                        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint64_t resource_file_name_offset;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ResourceFileNameOffset
        _m02 uint16_t resource_reason_id;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ResourceReasonId
        _m03 uint32_t string_count;                 //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .StringCount
        _m04 uint64_t substitution_strings_offset;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SubstitutionStringsOffset
        _m05 uint64_t simple_string_offset;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SimpleStringOffset
                                                  
        SDK_MAGIC_PROPERTIES( "_REASON_BUFFER.$", 0x20, true, 0x13b8a7b4f0e8ee6f );                            
        SDK_FIXED_SIZE( reason_buffer_t, 0x20 );                            
    };                                            
};
#include "magic/reason_buffer_t.end.hpp"
SDK_VERIFY( struct win::reason_buffer_t, 0x20 );
