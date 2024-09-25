#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_structure_flags_t.hpp"

#include "magic/ndr64_conf_bogus_structure_header_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_conf_bogus_structure_header_format_t                    
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                               
        _m00 uint8_t                             format_code;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t                             alignment;                //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 struct win::ndr64_structure_flags_t flags;                    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint8_t                             dimensions;               //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Dimensions
        _m04 uint32_t                            memory_size;              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MemorySize
        _m05 const void*                         original_member_layout;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OriginalMemberLayout
        _m06 const void*                         original_pointer_layout;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .OriginalPointerLayout
        _m07 const void*                         pointer_layout;           //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .PointerLayout
        _m08 const void*                         conf_array_description;   //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ConfArrayDescription
                                                                         
        SDK_MAGIC_PROPERTIES( "_NDR64_CONF_BOGUS_STRUCTURE_HEADER_FORMAT.$", 0x28, true, 0x1a7bf8ca778f8c14 );                        
        SDK_FIXED_SIZE( ndr64_conf_bogus_structure_header_format_t, 0x28 );                        
    };                                                                   
};
#include "magic/ndr64_conf_bogus_structure_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_conf_bogus_structure_header_format_t, 0x28 );
