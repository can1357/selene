#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/timer_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace nt  { struct kthread_t;  }
namespace wdf { struct wdftimer_t; }

#include "magic/timer_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    class callback_lock_t;
    struct driver_globals_t;
    class system_work_item_t;

    // [class FxTimer]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class timer_t                                                                       
    {                                                                                   
        struct u0_m_object_flags_by_name_t                                              
        {                                                                               
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                 
            //                                                                          
            _m05 uint1_t passive_callbacks;                                               //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                   //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                       //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                 //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                            //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                       //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                              //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                     //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                        
            SDK_MAGIC_PROPERTIES( "FxTimer.m_ObjectFlagsByName.$", 0x2, true, 0x9e04d8d179f43bad );                                                 
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                 
        };                                                                              
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                                              
        _m000 uint16_t                                      m_type;                       //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                      m_object_size;                //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                       m_refcnt;                     //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                  m_globals;                    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                      m_object_flags;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                   m_object_flags_by_name;       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                      m_object_state;               //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                              m_child_list_head;            //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                              m_spin_lock;                  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                           m_parent_object;              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                              m_child_entry;                //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t                m_dispose_single_entry;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                      m_device_base;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                           m_device;                     //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                              m_np_lock;                    //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 class mx::timer_t                             m_timer;                      //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_Timer
        _m025 class fx::object_t*                           m_object;                     //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_Object
        _m026 uint32_t                                      m_period;                     //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_Period
        _m027 uint32_t                                      m_tolerable_delay;            //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .m_TolerableDelay
        _m028 uint8_t                                       m_use_high_resolution_timer;  //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_UseHighResolutionTimer
        _m029 class fx::callback_lock_t*                    m_callback_lock;              //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_CallbackLock
        _m030 class fx::object_t*                           m_callback_lock_object;       //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .m_CallbackLockObject
        _m031 sdk::function<void(struct wdf::wdftimer_t*)>* m_callback;                   //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .m_Callback
        _m032 class fx::system_work_item_t*                 m_system_work_item;           //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_SystemWorkItem
        _m033 struct nt::kthread_t volatile*                m_callback_thread;            //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .m_CallbackThread
        _m034 struct nt::kthread_t*                         m_stop_thread;                //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .m_StopThread
        _m035 uint8_t                                       m_stop_again;                 //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .m_StopAgain
        _m036 uint8_t                                       m_start_aborted;              //{ +0x0159    +0x0159    +0x0159    +0x0159    } | .m_StartAborted
        _m037 uint8_t                                       m_running_down;               //{ +0x015a    +0x015a    +0x015a    +0x015a    } | .m_RunningDown
                                                                                        
        SDK_MAGIC_PROPERTIES( "FxTimer.$", 0x160, true, 0x5b78b38eefc8485d );                            
        SDK_FIXED_SIZE( timer_t, 0x160 );                                               
    };                                                                                  
};
#include "magic/timer_t.end.hpp"
SDK_VERIFY( struct fx::timer_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::timer_t, 0x160 );
