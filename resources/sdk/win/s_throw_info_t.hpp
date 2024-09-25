#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/s_throw_info_t.start.hpp"
namespace win
{
    struct s_catchable_type_array_t;

    // [struct _s__ThrowInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_throw_info_t                                                       
    {                                                                           
        using p_forward_compat_t = sdk::variant<sdk::function<int32_t()>*, sdk::function<int32_t(...)>*>;                       
                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m00 uint32_t                                    attributes;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .attributes
        _m01 sdk::function<void(void*)>*                 pmfn_unwind;             //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .pmfnUnwind
        _m02 p_forward_compat_t                          p_forward_compat;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .pForwardCompat
        _m03 const struct win::s_catchable_type_array_t* p_catchable_type_array;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .pCatchableTypeArray
                                                                                
        SDK_MAGIC_PROPERTIES( "_s__ThrowInfo.$", 0x1c, true, 0x9fc87e6307d251a9 );                       
        SDK_FIXED_SIZE( s_throw_info_t, 0x1c );                                 
    };                                                                          
};
#include "magic/s_throw_info_t.end.hpp"
SDK_VERIFY( struct win::s_throw_info_t, 0x1c );
