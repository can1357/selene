#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_array_flags_t.hpp"

#include "magic/ndr64_conf_var_array_header_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_CONF_VAR_ARRAY_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_conf_var_array_header_format_t              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                   
        _m00 uint8_t                         format_code;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FormatCode
        _m01 uint8_t                         alignment;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Alignment
        _m02 struct win::ndr64_array_flags_t flags;            //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .Flags
        _m03 uint32_t                        element_size;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ElementSize
        _m04 const void*                     conf_descriptor;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ConfDescriptor
        _m05 const void*                     var_descriptor;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .VarDescriptor
                                                             
        SDK_MAGIC_PROPERTIES( "_NDR64_CONF_VAR_ARRAY_HEADER_FORMAT.$", 0x18, true, 0x17a58383867bf44b );                
        SDK_FIXED_SIZE( ndr64_conf_var_array_header_format_t, 0x18 );                
    };                                                       
};
#include "magic/ndr64_conf_var_array_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_conf_var_array_header_format_t, 0x18 );
