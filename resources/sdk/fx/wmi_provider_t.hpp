#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../nt/guid_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "wmi_provider_function_control_callback_t.hpp"

#include "magic/wmi_provider_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class device_base_t;
    class wmi_irp_handler_t;
    struct driver_globals_t;

    // [class FxWmiProvider]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class wmi_provider_t                                                   
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
                                                                           
            SDK_MAGIC_PROPERTIES( "FxWmiProvider.m_ObjectFlagsByName.$", 0x2, true, 0x56195b493ff36b87 );                                                  
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                  
        };                                                                 
                                                                           
        struct u4_m_flags_by_name_t                                        
        {                                                                  
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                        
            //                                                             
            _m32 uint1_t event_only;                                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .EventOnly
            _m33 uint1_t expensive;                                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .Expensive
            _m34 uint1_t tracing;                                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Tracing
                                                                           
            SDK_MAGIC_PROPERTIES( "FxWmiProvider.m_FlagsByName.$", 0x4, true, 0xe2fdbf333fa4ccc1 );                                        
            SDK_FIXED_SIZE( u4_m_flags_by_name_t, 0x4 );                                        
        };                                                                 
                                                                           
        using m_function_control_t = struct fx::wmi_provider_function_control_callback_t;                             
                                                                           
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                 
        _m000 uint16_t                        m_type;                        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                        m_object_size;                 //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                         m_refcnt;                      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*    m_globals;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                        m_object_flags;                //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t     m_object_flags_by_name;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                        m_object_state;                //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                m_child_list_head;             //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                m_spin_lock;                   //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*             m_parent_object;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                m_child_entry;                 //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t  m_dispose_single_entry;        //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*        m_device_base;                 //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*             m_device;                      //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                m_np_lock;                     //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 nt::list_entry_t                m_list_entry;                  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_ListEntry
        _m025 nt::list_entry_t                m_instance_list_head;          //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_InstanceListHead
        _m026 uint32_t                        m_num_instances;               //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_NumInstances
        _m027 class fx::wmi_irp_handler_t*    m_parent;                      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_Parent
        _m028 struct nt::guid_t               m_guid;                        //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_Guid
        _m029 uint64_t                        m_tracing_handle;              //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_TracingHandle
        _m030 uint32_t                        m_min_instance_buffer_size;    //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_MinInstanceBufferSize
        _m031 uint32_t                        m_flags;                       //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .m_Flags
        _m035 u4_m_flags_by_name_t            m_flags_by_name;               //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .m_FlagsByName
        _m036 m_function_control_t            m_function_control;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_FunctionControl
        _m037 uint8_t                         m_event_control_enabled;       //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_EventControlEnabled
        _m038 uint8_t                         m_data_block_control_enabled;  //{ +0x00d1    +0x00d1    +0x00d1    +0x00d1    } | .m_DataBlockControlEnabled
        _m039 uint8_t                         m_remove_guid;                 //{ +0x00d2    +0x00d2    +0x00d2    +0x00d2    } | .m_RemoveGuid
                                                                           
        SDK_MAGIC_PROPERTIES( "FxWmiProvider.$", 0xd8, true, 0xb407d26a02aee757 );                             
        SDK_FIXED_SIZE( wmi_provider_t, 0xd8 );                             
    };                                                                     
};
#include "magic/wmi_provider_t.end.hpp"
SDK_VERIFY( struct fx::wmi_provider_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( struct fx::wmi_provider_t::u4_m_flags_by_name_t, 0x4 );
SDK_VERIFY( class fx::wmi_provider_t, 0xd8 );
