#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kdpc_t.hpp"
#include "../nt/ktimer_t.hpp"

namespace ex { struct timer_t; }

#include "magic/md_timer_t.start.hpp"
namespace wdf
{
    // [struct _MdTimer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct md_timer_t                                                             
    {                                                                             
        using m_timer_callback_t = sdk::function<void(struct nt::kdpc_t*, void*, void*, void*)>*;                    
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                        
        _m00 int32_t                                          m_period;             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_Period
        _m01 uint8_t                                          m_is_ext_timer;       //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .m_IsExtTimer
        _m02 m_timer_callback_t                               m_timer_callback;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_TimerCallback
        _m03 struct nt::ktimer_t                              kernel_timer;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .KernelTimer
        _m04 struct nt::kdpc_t                                timer_dpc;            //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .TimerDpc
        _m05 sdk::function<void(struct ex::timer_t*, void*)>* m_ex_timer_callback;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_ExTimerCallback
        _m06 struct ex::timer_t*                              m_kernel_ex_timer;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_KernelExTimer
        _m07 void*                                            m_timer_context;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_TimerContext
                                                                                  
        SDK_MAGIC_PROPERTIES( "_MdTimer.$", 0x98, true, 0x60caf4fa239941c8 );                    
        SDK_FIXED_SIZE( md_timer_t, 0x98 );                                       
    };                                                                            
};
#include "magic/md_timer_t.end.hpp"
SDK_VERIFY( struct wdf::md_timer_t, 0x98 );
