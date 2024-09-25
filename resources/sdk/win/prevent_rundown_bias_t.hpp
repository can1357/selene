#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "prevent_rundown_bias_type_t.hpp"

#include "magic/prevent_rundown_bias_t.start.hpp"
namespace win
{
    class c_ref_cache_t;

    // [struct PreventRundownBias]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct prevent_rundown_bias_t                                        
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                               
        _m00 enum win::prevent_rundown_bias_type_t type;                   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .type
        _m01 struct nt::guid_t                     moid_biased_stub;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .moidBiasedStub
        _m02 uint32_t                              dw_apt_id_biased_stub;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .dwAptIdBiasedStub
        _m03 class win::c_ref_cache_t*             p_ref_cache;            //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pRefCache
        _m04 nt::list_entry_t                      list_entry;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .listEntry
                                                                         
        SDK_MAGIC_PROPERTIES( "PreventRundownBias.$", 0x30, true, 0x252c87aad72ded4a );                      
        SDK_FIXED_SIZE( prevent_rundown_bias_t, 0x30 );                      
    };                                                                   
};
#include "magic/prevent_rundown_bias_t.end.hpp"
SDK_VERIFY( struct win::prevent_rundown_bias_t, 0x30 );
