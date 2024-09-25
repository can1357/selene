#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_pointer_repeat_flags_t.hpp"

#include "magic/ndr64_repeat_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_REPEAT_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_repeat_format_t                                         
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                               
        _m00 uint8_t                                  format_code;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 struct win::ndr64_pointer_repeat_flags_t flags;               //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint32_t                                 increment;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Increment
        _m03 uint32_t                                 offset_to_array;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OffsetToArray
        _m04 uint32_t                                 number_of_pointers;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumberOfPointers
                                                                         
        SDK_MAGIC_PROPERTIES( "_NDR64_REPEAT_FORMAT.$", 0x10, true, 0xa3b14787eb1bdcbb );                   
        SDK_FIXED_SIZE( ndr64_repeat_format_t, 0x10 );                   
    };                                                                   
};
#include "magic/ndr64_repeat_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_repeat_format_t, 0x10 );
