#pragma once
#include <sdkgen/support_library.hpp>
#include "pcw_mask_information_t.hpp"
#include "pcw_counter_information_t.hpp"

#include "magic/pcw_callback_information_t.start.hpp"
namespace nt
{
    // [union _PCW_CALLBACK_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    union pcw_callback_information_t                                  
    {                                                                 
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 struct nt::pcw_counter_information_t add_counter;          //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .AddCounter
        _m01 struct nt::pcw_counter_information_t remove_counter;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .RemoveCounter
        _m02 struct nt::pcw_mask_information_t    enumerate_instances;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .EnumerateInstances
        _m03 struct nt::pcw_mask_information_t    collect_data;         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .CollectData
                                                                      
        SDK_NONVOL_PROPERTIES( "_PCW_CALLBACK_INFORMATION.$", 0x28, true, 0xf14495a8ead2bf93 );                    
        SDK_FIXED_SIZE( pcw_callback_information_t, 0x28 );                    
    };                                                                
};
#include "magic/pcw_callback_information_t.end.hpp"
SDK_VERIFY( union nt::pcw_callback_information_t, 0x28 );
