#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "driver_unload_t.hpp"
#include "driver_device_add_t.hpp"
#include "../mx/driver_object_t.hpp"
#include "callback_mutex_lock_t.hpp"
#include "../wdf/driver_config_t.hpp"
#include "../wdf/execution_level_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../wdf/synchronization_scope_t.hpp"

#include "magic/driver_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    class dispose_list_t;
    class callback_lock_t;
    struct driver_globals_t;

    // [class FxDriver]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class driver_t                                                         
    {                                                                      
        struct u0_m_object_flags_by_name_t                                 
        {                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
            //                                                             
            _m05 uint1_t passive_callbacks;                                  //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                      //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                      //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                          //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                    //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                               //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                          //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                 //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                           
            SDK_MAGIC_PROPERTIES( "FxDriver.m_ObjectFlagsByName.$", 0x2, true, 0x5b2007c5ee6d7cfb );                                                
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                
        };                                                                 
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                                 
        _m000 uint16_t                          m_type;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                          m_object_size;               //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                           m_refcnt;                    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*      m_globals;                   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                          m_object_flags;              //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t       m_object_flags_by_name;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                          m_object_state;              //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                  m_child_list_head;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                  m_spin_lock;                 //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*               m_parent_object;             //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                  m_child_entry;               //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t    m_dispose_single_entry;      //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*          m_device_base;               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*               m_device;                    //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                  m_np_lock;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 class mx::driver_object_t         m_driver_object;             //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_DriverObject
        _m025 nt::unicode_view                  m_registry_path;             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_RegistryPath
        _m026 uint8_t                           m_debugger_connected;        //{ +0x0098    +0x0098    +0x00a0    +0x0098    } | .m_DebuggerConnected
        _m027 class fx::driver_device_add_t     m_driver_device_add;         //{ +0x00a0    +0x00a0    +0x00a8    +0x00a0    } | .m_DriverDeviceAdd
        _m028 enum wdf::execution_level_t       m_execution_level;           //{ +0x00b0    +0x00b0    +0x00b8    +0x00b0    } | .m_ExecutionLevel
        _m029 enum wdf::synchronization_scope_t m_synchronization_scope;     //{ +0x00b4    +0x00b4    +0x00bc    +0x00b4    } | .m_SynchronizationScope
        _m030 class fx::callback_mutex_lock_t   m_callback_mutex_lock;       //{ +0x00b8    +0x00b8    +0x00c0    +0x00b8    } | .m_CallbackMutexLock
        _m031 class fx::callback_lock_t*        m_callback_lock_ptr;         //{ +0x0128    +0x0128    +0x0130    +0x0128    } | .m_CallbackLockPtr
        _m032 class fx::object_t*               m_callback_lock_object_ptr;  //{ +0x0130    +0x0130    +0x0138    +0x0130    } | .m_CallbackLockObjectPtr
        _m033 struct wdf::driver_config_t       m_config;                    //{ +0x0138    +0x0138    +0x0140    +0x0138    } | .m_Config
        _m034 class fx::dispose_list_t*         m_dispose_list;              //{ +0x0158    +0x0158    +0x0160    +0x0158    } | .m_DisposeList
        _m035 class fx::driver_unload_t         m_driver_unload;             //{ +0x0160    +0x0160    +0x0168    +0x0160    } | .m_DriverUnload
                                                                           
        // Windows 11                                                      
        //                                                                 
        _m036 const wchar_t*                    m_service_name;              //{ +0x0098    } | .m_ServiceName
                                                                           
        SDK_MAGIC_PROPERTIES( "FxDriver.$", 0x168, true, 0xb509fe0da9c77d0a );                           
        SDK_DYNAMIC_SIZE( driver_t );                                      
    };                                                                     
};
#include "magic/driver_t.end.hpp"
SDK_VERIFY( struct fx::driver_t::u0_m_object_flags_by_name_t, 0x2 );
