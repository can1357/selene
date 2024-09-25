#pragma once
#include <sdkgen/support_library.hpp>
#include "kist_base_frame_t.hpp"

#include "magic/ktransition_stack_t.start.hpp"
namespace nt
{
    // [struct _KTRANSITION_STACK]
    // => Windows 10 v1607
    //
    struct ktransition_stack_t                      
    {                                               
        // Windows 10 v1607                         
        //                                          
        _m00 sdk::array<uint8_t, 512>     stack;      //{ +0x0000    } | .Stack
        _m01 sdk::array<uint8_t, 480>     ist_stack;  //{ +0x0000    } | .IstStack
        _m02 struct nt::kist_base_frame_t ist_frame;  //{ +0x01e0    } | .IstFrame
                                                    
        SDK_MAGIC_PROPERTIES( "_KTRANSITION_STACK.$", 0x0, false, 0x2a72b69468c431eb );          
        SDK_FIXED_SIZE( ktransition_stack_t, 0x200 );          
    };                                              
};
#include "magic/ktransition_stack_t.end.hpp"
SDK_VERIFY( struct nt::ktransition_stack_t, 0x200 );
