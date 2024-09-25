#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_activation_filter_context_t.start.hpp"
namespace win
{
    // [class CActivationFilterContext]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_activation_filter_context_t            
    {                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                         
        _m00 int32_t m_dw_previous_activation_type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_dwPreviousActivationType
                                                   
        SDK_MAGIC_PROPERTIES( "CActivationFilterContext.$", 0x4, true, 0x24164999ddcc2371 );                              
        SDK_FIXED_SIZE( c_activation_filter_context_t, 0x4 );                              
    };                                             
};
#include "magic/c_activation_filter_context_t.end.hpp"
SDK_VERIFY( class win::c_activation_filter_context_t, 0x4 );
