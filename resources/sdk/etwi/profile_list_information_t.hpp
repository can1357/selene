#pragma once
#include <sdkgen/support_library.hpp>
#include "information_class_t.hpp"
#include "../win/profile_source_info_t.hpp"

#include "magic/profile_list_information_t.start.hpp"
namespace etwi
{
    // [struct _EVENT_TRACE_PROFILE_LIST_INFORMATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct profile_list_information_t                                                       
    {                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                                  
        _m00 enum etwi::information_class_t                   event_trace_information_class;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .EventTraceInformationClass
        _m01 sdk::array<struct win::profile_source_info_t, 1> profile;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Profile
                                                                                            
        SDK_MAGIC_PROPERTIES( "_EVENT_TRACE_PROFILE_LIST_INFORMATION.$", 0x28, true, 0x363c533538e3d97d );                              
        SDK_FIXED_SIZE( profile_list_information_t, 0x28 );                                 
    };                                                                                      
};
#include "magic/profile_list_information_t.end.hpp"
SDK_VERIFY( struct etwi::profile_list_information_t, 0x28 );
