#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/protocol_argument_t.start.hpp"
namespace tag
{
    // [struct _tagPROTOCOL_ARGUMENT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct protocol_argument_t            
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                
        _m00 const wchar_t* sz_method;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .szMethod
        _m01 const wchar_t* sz_target_url;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .szTargetUrl
                                          
        SDK_MAGIC_PROPERTIES( "_tagPROTOCOL_ARGUMENT.$", 0x10, true, 0x15008be3dcee4323 );              
        SDK_FIXED_SIZE( protocol_argument_t, 0x10 );              
    };                                    
};
#include "magic/protocol_argument_t.end.hpp"
SDK_VERIFY( struct tag::protocol_argument_t, 0x10 );
