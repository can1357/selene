#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_structure_flags_t.hpp"

#include "magic/ndr64_structure_header_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_STRUCTURE_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_structure_header_format_t                   
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                   
        _m00 uint8_t                             format_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t                             alignment;    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 struct win::ndr64_structure_flags_t flags;        //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint8_t                             reserve;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Reserve
        _m04 uint32_t                            memory_size;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .MemorySize
                                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_STRUCTURE_HEADER_FORMAT.$", 0x8, true, 0x6fa8ba5dc3779a43 );            
        SDK_FIXED_SIZE( ndr64_structure_header_format_t, 0x8 );            
    };                                                       
};
#include "magic/ndr64_structure_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_structure_header_format_t, 0x8 );
