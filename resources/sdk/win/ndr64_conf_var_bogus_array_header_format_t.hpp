#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr64_bogus_array_header_format_t.hpp"

#include "magic/ndr64_conf_var_bogus_array_header_format_t.start.hpp"
namespace win
{
    // [struct _NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr64_conf_var_bogus_array_header_format_t                         
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                                    
        _m00 struct win::ndr64_bogus_array_header_format_t fixed_array_format;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .FixedArrayFormat
        _m01 const void*                                   conf_description;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ConfDescription
        _m02 const void*                                   var_description;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .VarDescription
        _m03 const void*                                   offset_description;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .OffsetDescription
                                                                              
        SDK_MAGIC_PROPERTIES( "_NDR64_CONF_VAR_BOGUS_ARRAY_HEADER_FORMAT.$", 0x28, true, 0xdfb36ee459981c1 );                   
        SDK_FIXED_SIZE( ndr64_conf_var_bogus_array_header_format_t, 0x28 );                   
    };                                                                        
};
#include "magic/ndr64_conf_var_bogus_array_header_format_t.end.hpp"
SDK_VERIFY( struct win::ndr64_conf_var_bogus_array_header_format_t, 0x28 );
