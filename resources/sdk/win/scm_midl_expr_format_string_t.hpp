#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/scm_midl_expr_format_string_t.start.hpp"
namespace win
{
    // [struct _scm_MIDL_EXPR_FORMAT_STRING]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct scm_midl_expr_format_string_t    
    {                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                  
        _m00 sdk::array<uint8_t, 57> format;  //{ +0x0004    +0x0004    +0x0004    } | .Format
                                            
        SDK_MAGIC_PROPERTIES( "_scm_MIDL_EXPR_FORMAT_STRING.$", 0x40, true, 0xbfe3bfed69ddf9e3 );       
        SDK_FIXED_SIZE( scm_midl_expr_format_string_t, 0x40 );       
    };                                      
};
#include "magic/scm_midl_expr_format_string_t.end.hpp"
SDK_VERIFY( struct win::scm_midl_expr_format_string_t, 0x40 );
