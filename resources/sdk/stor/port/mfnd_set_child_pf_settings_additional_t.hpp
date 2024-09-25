#pragma once
#include <sdkgen/support_library.hpp>
#include "mfnd_physical_function_settings_t.hpp"

#include "magic/mfnd_set_child_pf_settings_additional_t.start.hpp"
namespace stor::port
{
    // [struct _MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL]
    // => Windows 11
    //
    struct mfnd_set_child_pf_settings_additional_t
    {                                             
        using settings_t = struct stor::port::mfnd_physical_function_settings_t;                    
                                                  
        // Windows 11                        
        //                                   
        _m00 uint32_t    version;                   //{ +0x0000    } | .Version
        _m01 uint32_t    size;                      //{ +0x0004    } | .Size
        _m02 uint16_t    child_controller_id;       //{ +0x0008    } | .ChildControllerId
        _m03 uint32_t    flags;                     //{ +0x000c    } | .Flags
        _m04 settings_t  settings;                  //{ +0x0010    } | .Settings
                                                  
        SDK_MAGIC_PROPERTIES( "_MFND_SET_CHILD_PF_SETTINGS_ADDITIONAL.$", 0x0, false, 0x8840a35900a6d46d );                    
        SDK_FIXED_SIZE( mfnd_set_child_pf_settings_additional_t, 0xa8 );                    
    };                                            
};
#include "magic/mfnd_set_child_pf_settings_additional_t.end.hpp"
SDK_VERIFY( struct stor::port::mfnd_set_child_pf_settings_additional_t, 0xa8 );
