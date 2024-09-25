#pragma once
#include <sdkgen/support_library.hpp>
#include "../tag/objref_t.hpp"
#include "c_ole_static_mutex_sem_t.hpp"

#include "magic/c_dll_host_t.start.hpp"
namespace win
{
    struct idll_host_t;
    class c_std_identity_t;

    // [class CDllHost]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_dll_host_t                                              
    {                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                          
        _m00 struct win::idll_host_t*            p_i_dll_proxy;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._pIDllProxy
        _m01 class win::c_std_identity_t*        p_std_id;            //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._pStdId
        _m02 uint32_t                            dw_type;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._dwType
        _m03 uint32_t                            dw_host_apt_id;      //{ +0x0034    +0x0034    +0x0034    +0x0034    } | ._dwHostAptId
        _m04 volatile uint32_t                   h_com_activator;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._hCOMActivator
        _m05 volatile uint32_t                   h_win_rt_activator;  //{ +0x003c    +0x003c    +0x003c    +0x003c    } | ._hWinRTActivator
        _m06 uint32_t                            dw_tid;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._dwTid
        _m07 sdk::hresult                        hr_marshal;          //{ +0x0044    +0x0044    +0x0044    +0x0044    } | ._hrMarshal
        _m08 void*                               h_event;             //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._hEvent
        _m09 void*                               h_event_wake_up;     //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._hEventWakeUp
        _m10 sdk::hresult                        hr;                  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._hr
        _m11 struct tag::objref_t                objref;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | ._objref
        _m12 class win::c_ole_static_mutex_sem_t mxs;                 //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | ._mxs
                                                                    
        SDK_MAGIC_PROPERTIES( "CDllHost.$", 0x110, true, 0xe4e8f604c25bae6f );                   
        SDK_FIXED_SIZE( c_dll_host_t, 0x110 );                      
    };                                                              
};
#include "magic/c_dll_host_t.end.hpp"
SDK_VERIFY( class win::c_dll_host_t, 0x110 );
