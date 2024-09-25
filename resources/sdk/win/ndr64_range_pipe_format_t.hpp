#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_range_pipe_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_RANGE_PIPE_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_range_pipe_format_t 
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                           
        _m00 uint8_t     format_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t     flags;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint8_t     alignment;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Alignment
        _m03 const void* type;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m04 uint32_t    memory_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MemorySize
        _m05 uint32_t    buffer_size;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BufferSize
        _m06 uint32_t    min_value;    //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MinValue
        _m07 uint32_t    max_value;    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .MaxValue
                                     
        SDK_MAGIC_PROPERTIES( "_NDR64_RANGE_PIPE_FORMAT.$", 0x20, true, 0xf467c099d41159e3 );            
        SDK_FIXED_SIZE( ndr64_range_pipe_format_t, 0x20 );            
    };                               
};
#include "magic/ndr64_range_pipe_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_range_pipe_format_t, 0x20 );
