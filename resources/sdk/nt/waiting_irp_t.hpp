#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/waiting_irp_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct kevent_t;
    struct file_object_t;

    // [struct _WAITING_IRP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct waiting_irp_t                                                        
    {                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                      
        _m00 nt::list_entry_t                               links;                //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Links
        _m01 struct nt::irp_t*                              irp;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Irp
        _m02 sdk::function<void(void*, struct nt::irp_t*)>* completion_routine;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CompletionRoutine
        _m03 void*                                          context;              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Context
        _m04 struct nt::kevent_t*                           event;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Event
        _m05 uint32_t                                       information;          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .Information
        _m06 uint8_t                                        break_all_rh;         //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .BreakAllRH
                                                                                
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                      
        _m07 uint8_t                                        oplock_break_notify;  //{ +0x0035    +0x0035    +0x0035    } | .OplockBreakNotify
        _m08 struct nt::file_object_t*                      file_object;          //{ +0x0038    +0x0038    +0x0038    } | .FileObject
                                                                                
        SDK_MAGIC_PROPERTIES( "_WAITING_IRP.$", 0x40, true, 0x6fb948a0954ca479 );                    
        SDK_DYNAMIC_SIZE( waiting_irp_t );                                      
    };                                                                          
};
#include "magic/waiting_irp_t.end.hpp"
