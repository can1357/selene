#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/s_hook_list_t.start.hpp"
namespace win
{
    struct s_hook_list_t;
    struct i_channel_hook_t;

    // [struct SHookList]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct s_hook_list_t                                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                
        _m00 const struct win::s_hook_list_t* p_next;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pNext
        _m01 struct win::i_channel_hook_t*    p_hook;       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pHook
        _m02 struct nt::guid_t                u_extension;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .uExtension
                                                          
        SDK_MAGIC_PROPERTIES( "SHookList.$", 0x20, true, 0x91a8e125b3248173 );            
        SDK_FIXED_SIZE( s_hook_list_t, 0x20 );            
    };                                                    
};
#include "magic/s_hook_list_t.end.hpp"
SDK_VERIFY( struct win::s_hook_list_t, 0x20 );
