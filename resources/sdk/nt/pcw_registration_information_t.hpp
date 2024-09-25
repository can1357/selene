#pragma once
#include <sdkgen/support_library.hpp>
#include "pcw_callback_type_t.hpp"
#include "pcw_registration_flags_t.hpp"

#include "magic/pcw_registration_information_t.start.hpp"
namespace nt
{
    struct pcw_counter_descriptor_t;
    union pcw_callback_information_t;

    // [struct _PCW_REGISTRATION_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct pcw_registration_information_t                          
    {                                                              
        using ppcw_callback_t = sdk::function<int32_t(enum nt::pcw_callback_type_t, union nt::pcw_callback_information_t*, void*)>*;                 
                                                                   
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                         
        _m00 uint32_t                             version;           //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 const nt::unicode_view*              name;              //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Name
        _m02 uint32_t                             counter_count;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CounterCount
        _m03 struct nt::pcw_counter_descriptor_t* counters;          //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .Counters
        _m04 ppcw_callback_t                      callback;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .Callback
        _m05 void*                                callback_context;  //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .CallbackContext
                                                                   
        // Windows 11                                              
        //                                                         
        _m06 enum nt::pcw_registration_flags_t    flags;             //{ +0x0030    } | .Flags
                                                                   
        SDK_NONVOL_PROPERTIES( "_PCW_REGISTRATION_INFORMATION.$", 0x30, true, 0x792698449035b79f );                 
        SDK_DYNAMIC_SIZE( pcw_registration_information_t );                 
    };                                                             
};
#include "magic/pcw_registration_information_t.end.hpp"
