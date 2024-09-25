#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_param_flags_t.hpp"

#include "magic/ndr64_param_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_PARAM_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_param_format_t                           
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                                
        _m00 const void*                     type;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 struct win::ndr64_param_flags_t attributes;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Attributes
        _m02 uint32_t                        stack_offset;  //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .StackOffset
                                                          
        SDK_MAGIC_PROPERTIES( "_NDR64_PARAM_FORMAT.$", 0x10, true, 0xe9e485dff91901e6 );             
        SDK_FIXED_SIZE( ndr64_param_format_t, 0x10 );             
    };                                                    
};
#include "magic/ndr64_param_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_param_format_t, 0x10 );
