#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../nt/single_list_entry_t.hpp"

namespace wdf { struct i_device_companion_t; }

#include "magic/companion_target_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    struct cr_event_t;
    class device_base_t;
    struct driver_globals_t;

    // [class FxCompanionTarget]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class companion_target_t                                          
    {                                                                 
        struct u0_m_object_flags_by_name_t                            
        {                                                             
            // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                        
            _m06 uint1_t passive_callbacks;                             //{ +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m07 uint1_t no_delete_ddi;                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m08 uint1_t delete_called;                                 //{ +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m09 uint1_t committed;                                     //{ +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m10 uint1_t passive_dispose;                               //{ +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m11 uint1_t force_dispose_thread;                          //{ +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m12 uint1_t has_debug;                                     //{ +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m13 uint1_t early_disposed_ext;                            //{ +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m14 uint1_t trace_state;                                   //{ +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                      
            SDK_MAGIC_PROPERTIES( "FxCompanionTarget.m_ObjectFlagsByName.$", 0x2, true, 0xccfa610c4a99e8e3 );                                            
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                            
        };                                                            
                                                                      
        // Windows 10 v2004, Windows 10 v2004, Windows 11, Windows 11, Windows 10 v20H2, Windows 10 v20H2                       
        //                                                            
        _m00 class fx::device_t*               m_device;                //{ +0x0060    +0x0098    +0x0060    +0x0098    +0x0060    +0x0098    } | .m_Device
                                                                      
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                            
        _m01 uint16_t                          m_type;                  //{ +0x0008    +0x0008    +0x0008    } | .m_Type
        _m02 uint16_t                          m_object_size;           //{ +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m03 int32_t                           m_refcnt;                //{ +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m04 struct fx::driver_globals_t*      m_globals;               //{ +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m05 uint16_t                          m_object_flags;          //{ +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m15 u0_m_object_flags_by_name_t       m_object_flags_by_name;  //{ +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m16 uint16_t                          m_object_state;          //{ +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m17 nt::list_entry_t                  m_child_list_head;       //{ +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m18 class mx::lock_t                  m_spin_lock;             //{ +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m19 class fx::object_t*               m_parent_object;         //{ +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m20 nt::list_entry_t                  m_child_entry;           //{ +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m21 struct nt::single_list_entry_t    m_dispose_single_entry;  //{ +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m22 class fx::device_base_t*          m_device_base;           //{ +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m23 class mx::lock_t                  m_np_lock;               //{ +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m24 struct fx::cr_event_t*            m_dispose_event;         //{ +0x0080    +0x0080    +0x0080    } | .m_DisposeEvent
        _m25 int32_t                           m_pending_task_count;    //{ +0x0088    +0x0088    +0x0088    } | .m_PendingTaskCount
        _m26 struct wdf::i_device_companion_t* m_rd_device_companion;   //{ +0x0090    +0x0090    +0x0090    } | .m_RdDeviceCompanion
                                                                      
        SDK_MAGIC_PROPERTIES( "FxCompanionTarget.$", 0xa0, true, 0x65886da47895fe45 );                       
        SDK_FIXED_SIZE( companion_target_t, 0xa0 );                       
    };                                                                
};
#include "magic/companion_target_t.end.hpp"
SDK_VERIFY( struct fx::companion_target_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::companion_target_t, 0xa0 );
