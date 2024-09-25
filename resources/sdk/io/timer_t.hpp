#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct device_object_t; }

#include "magic/timer_t.start.hpp"
namespace io
{
    // [struct _IO_TIMER]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct timer_t                                     
    {                                                  
        using timer_routine_t = sdk::function<void(struct nt::device_object_t*, void*)>*;              
                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                             
        _m00 int16_t                     type;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 int16_t                     timer_flag;     //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TimerFlag
        _m02 nt::list_entry_t            timer_list;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TimerList
        _m03 timer_routine_t             timer_routine;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .TimerRoutine
        _m04 void*                       context;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Context
        _m05 struct nt::device_object_t* device_object;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .DeviceObject
                                                       
        SDK_MAGIC_PROPERTIES( "_IO_TIMER.$", 0x30, true, 0xfb9d5da75e2dc04f );              
        SDK_DYNAMIC_SIZE( timer_t );                   
    };                                                 
};
#include "magic/timer_t.end.hpp"
