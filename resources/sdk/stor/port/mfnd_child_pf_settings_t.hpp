#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_physical_function_settings_t.hpp"

#include "magic/mfnd_child_pf_settings_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_CHILD_PF_SETTINGS]
    // => Windows 11
    //
    struct mfnd_child_pf_settings_t
    {                              
        using settings_t = struct stor::port::mfnd_physical_function_settings_t;         
                                   
        // Windows 11             
        //                        
        _m00 uint32_t    version;    //{ +0x0000    } | .Version
        _m01 uint32_t    size;       //{ +0x0004    } | .Size
        _m02 settings_t  settings;   //{ +0x0008    } | .Settings
                                   
        SDK_MAGIC_PROPERTIES( "_MFND_CHILD_PF_SETTINGS.$", 0x0, false, 0xa82e3e6169e1da09 );         
        SDK_FIXED_SIZE( mfnd_child_pf_settings_t, 0xa0 );         
    };                             
};
#include "magic/mfnd_child_pf_settings_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_child_pf_settings_t, 0xa0 );
