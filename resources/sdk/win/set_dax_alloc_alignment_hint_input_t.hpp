#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/set_dax_alloc_alignment_hint_input_t.start.hpp"
namespace win
{
    // [struct _SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct set_dax_alloc_alignment_hint_input_t
    {                                          
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                         
        //                                     
        _m00 uint32_t flags;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t alignment_shift;           //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .AlignmentShift
        _m02 uint64_t file_offset_to_align;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .FileOffsetToAlign
        _m03 uint32_t fallback_alignment_shift;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .FallbackAlignmentShift
                                               
        SDK_NONVOL_PROPERTIES( "_SET_DAX_ALLOC_ALIGNMENT_HINT_INPUT.$", 0x18, true, 0xebb22a09ab106103 );                         
        SDK_FIXED_SIZE( set_dax_alloc_alignment_hint_input_t, 0x18 );                         
    };                                         
};
#include "magic/set_dax_alloc_alignment_hint_input_t.end.hpp"
SDK_VERIFY( struct win::set_dax_alloc_alignment_hint_input_t, 0x18 );
