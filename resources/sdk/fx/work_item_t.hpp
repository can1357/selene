#pragma once
#include <sdkgen/support_library.hpp>
#include "cr_event_t.hpp"
#include "../mx/lock_t.hpp"
#include "../mx/work_item_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace nt  { struct kthread_t;     }
namespace wdf { struct wdfworkitem_t; }

#include "magic/work_item_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    class callback_lock_t;
    struct driver_globals_t;

    // [class FxWorkItem]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class work_item_t                                                                   
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
                                                                                        
            SDK_MAGIC_PROPERTIES( "FxWorkItem.m_ObjectFlagsByName.$", 0x2, true, 0x58065fdf1f396548 );                                               
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                               
        };                                                                              
                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
        //                                                                              
        _m00 uint16_t                                         m_type;                     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m01 uint16_t                                         m_object_size;              //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m02 int32_t                                          m_refcnt;                   //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m03 struct fx::driver_globals_t*                     m_globals;                  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m04 uint16_t                                         m_object_flags;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m14 u0_m_object_flags_by_name_t                      m_object_flags_by_name;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m15 uint16_t                                         m_object_state;             //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m16 nt::list_entry_t                                 m_child_list_head;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m17 class mx::lock_t                                 m_spin_lock;                //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m18 class fx::object_t*                              m_parent_object;            //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m19 nt::list_entry_t                                 m_child_entry;              //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m20 struct nt::single_list_entry_t                   m_dispose_single_entry;     //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m21 class fx::device_base_t*                         m_device_base;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m22 class fx::device_t*                              m_device;                   //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m23 class mx::lock_t                                 m_np_lock;                  //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m24 class mx::work_item_t                            m_work_item;                //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_WorkItem
        _m25 uint8_t                                          m_running_down;             //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_RunningDown
        _m26 uint8_t                                          m_enqueued;                 //{ +0x0081    +0x0081    +0x0081    +0x0081    } | .m_Enqueued
        _m27 uint32_t                                         m_work_item_running_count;  //{ +0x0084    +0x0084    +0x0084    +0x0084    } | .m_WorkItemRunningCount
        _m28 class fx::object_t*                              m_object;                   //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_Object
        _m29 class fx::callback_lock_t*                       m_callback_lock;            //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_CallbackLock
        _m30 class fx::object_t*                              m_callback_lock_object;     //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_CallbackLockObject
        _m31 sdk::function<void(struct wdf::wdfworkitem_t*)>* m_callback;                 //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_Callback
        _m32 struct fx::cr_event_t                            m_work_item_completed;      //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_WorkItemCompleted
        _m33 struct nt::kthread_t*                            m_work_item_thread;         //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_WorkItemThread
                                                                                        
        SDK_MAGIC_PROPERTIES( "FxWorkItem.$", 0xd0, true, 0x7959e43bfd894a0d );                          
        SDK_FIXED_SIZE( work_item_t, 0xd0 );                                            
    };                                                                                  
};
#include "magic/work_item_t.end.hpp"
SDK_VERIFY( struct fx::work_item_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::work_item_t, 0xd0 );
