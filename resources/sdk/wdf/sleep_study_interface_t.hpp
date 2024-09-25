#pragma once
#include <sdkgen/support_library.hpp>

namespace hid { struct ss_component_t;             }
namespace mx  { struct wnf_subscription_context_t; }

#include "magic/sleep_study_interface_t.start.hpp"
namespace wdf
{
    struct ss_library_t;

    // [struct _SLEEP_STUDY_INTERFACE]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sleep_study_interface_t                                          
    {                                                                       
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                                  
        _m00 struct wdf::ss_library_t*              sleep_study_lib_context;  //{ +0x0000    +0x0000    +0x0000    } | .SleepStudyLibContext
        _m01 struct mx::wnf_subscription_context_t* wnf_context;              //{ +0x0008    +0x0008    +0x0008    } | .WnfContext
        _m02 struct hid::ss_component_t*            component_power_ref;      //{ +0x0010    +0x0010    +0x0010    } | .ComponentPowerRef
        _m03 volatile int32_t                       lib_initializing;         //{ +0x0018    +0x0018    +0x0018    } | .LibInitializing
                                                                            
        SDK_MAGIC_PROPERTIES( "_SLEEP_STUDY_INTERFACE.$", 0x20, true, 0x7eebf0c26a010403 );                        
        SDK_FIXED_SIZE( sleep_study_interface_t, 0x20 );                        
    };                                                                      
};
#include "magic/sleep_study_interface_t.end.hpp"
SDK_VERIFY( struct wdf::sleep_study_interface_t, 0x20 );
