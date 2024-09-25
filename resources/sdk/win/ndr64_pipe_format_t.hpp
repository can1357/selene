#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/ndr64_pipe_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_PIPE_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_pipe_format_t       
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                           
        _m00 uint8_t     format_code;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t     flags;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint8_t     alignment;    //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Alignment
        _m03 const void* type;         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Type
        _m04 uint32_t    memory_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .MemorySize
        _m05 uint32_t    buffer_size;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .BufferSize
                                     
        SDK_MAGIC_PROPERTIES( "_NDR64_PIPE_FORMAT.$", 0x18, true, 0x249edc4b2a26b865 );            
        SDK_FIXED_SIZE( ndr64_pipe_format_t, 0x18 );            
    };                               
};
#include "magic/ndr64_pipe_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_pipe_format_t, 0x18 );
