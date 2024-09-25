#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct irp_t; }

#include "magic/post_process_info_t.start.hpp"
namespace fx
{
    struct cr_event_t;

    // [struct FxPostProcessInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct post_process_info_t                            
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                      
        //                                                
        _m00 struct fx::cr_event_t* m_event;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Event
        _m01 uint8_t                m_delete_object;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_DeleteObject
        _m02 uint8_t                m_set_removed_event;    //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .m_SetRemovedEvent
        _m03 struct nt::irp_t*      m_fire_and_forget_irp;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_FireAndForgetIrp
                                                          
        SDK_MAGIC_PROPERTIES( "FxPostProcessInfo.$", 0x18, true, 0x79792408d9655965 );                      
        SDK_FIXED_SIZE( post_process_info_t, 0x18 );                      
    };                                                    
};
#include "magic/post_process_info_t.end.hpp"
SDK_VERIFY( struct fx::post_process_info_t, 0x18 );
