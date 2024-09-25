#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/prevent_rundown_bias_container_t.start.hpp"
namespace win
{
    // [class PreventRundownBiasContainer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class prevent_rundown_bias_container_t
    {                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                
        _m00 nt::list_entry_t list_biases;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | ._listBiases
                                          
        SDK_MAGIC_PROPERTIES( "PreventRundownBiasContainer.$", 0x20, true, 0x20b443b172593810 );            
        SDK_FIXED_SIZE( prevent_rundown_bias_container_t, 0x20 );            
    };                                    
};
#include "magic/prevent_rundown_bias_container_t.end.hpp"
SDK_VERIFY( class win::prevent_rundown_bias_container_t, 0x20 );
