#pragma once
#include <sdkgen/support_library.hpp>
#include "ndr_context_handle_flags_t.hpp"

#include "magic/ndr_context_handle_arg_desc_t.start.hpp"
namespace win
{
    // [struct NDR_CONTEXT_HANDLE_ARG_DESC]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct ndr_context_handle_arg_desc_t                              
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                            
        _m00 uint8_t                                fc;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Fc
        _m01 struct win::ndr_context_handle_flags_t flags;              //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Flags
        _m02 uint8_t                                rundown_rtn_index;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .RundownRtnIndex
        _m03 uint8_t                                param_ordinal;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .ParamOrdinal
                                                                      
        SDK_MAGIC_PROPERTIES( "NDR_CONTEXT_HANDLE_ARG_DESC.$", 0x4, true, 0x721de647605f3ac8 );                  
        SDK_FIXED_SIZE( ndr_context_handle_arg_desc_t, 0x4 );                  
    };                                                                
};
#include "magic/ndr_context_handle_arg_desc_t.end.hpp"
SDK_VERIFY( struct win::ndr_context_handle_arg_desc_t, 0x4 );
