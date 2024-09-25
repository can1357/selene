#pragma once
#include <sdkgen/support_library.hpp>
#include "../mx/lock_t.hpp"
#include "../mx/device_object_t.hpp"
#include "../wdf/device_io_type_t.hpp"
#include "../wdf/execution_level_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "../wdf/device_pnp_state_t.hpp"
#include "../wdf/fileobject_class_t.hpp"
#include "../wdf/object_attributes_t.hpp"
#include "../wdf/device_power_state_t.hpp"
#include "../nt/npaged_lookaside_list_t.hpp"
#include "../wdf/synchronization_scope_t.hpp"
#include "spin_lock_transactioned_list_t.hpp"
#include "../wdf/device_power_policy_state_t.hpp"

#include "magic/device_t.start.hpp"
namespace fx
{
    class device_t;
    class driver_t;
    class object_t;
    class pkg_io_t;
    class pkg_pnp_t;
    class device_base_t;
    class pkg_general_t;
    class dispose_list_t;
    class callback_lock_t;
    class wmi_irp_handler_t;
    struct driver_globals_t;
    class default_irp_handler_t;

    // [class FxDevice]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class device_t                                                                           
    {                                                                                        
        struct u0_m_object_flags_by_name_t                                                   
        {                                                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                           
            //                                                                               
            _m05 uint1_t passive_callbacks;                                                    //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                        //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                            //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                      //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                 //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                            //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                   //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                          //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                             
            SDK_MAGIC_PROPERTIES( "FxDevice.m_ObjectFlagsByName.$", 0x2, true, 0x11b0800cadfcd239 );                                                           
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                           
        };                                                                                   
                                                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                   
        _m000 uint16_t                                 m_type;                                 //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                 m_object_size;                          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                  m_refcnt;                               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*             m_globals;                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                 m_object_flags;                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t              m_object_flags_by_name;                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                 m_object_state;                         //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                         m_child_list_head;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                         m_spin_lock;                            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                      m_parent_object;                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                         m_child_entry;                          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t           m_dispose_single_entry;                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                 m_device_base;                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                      m_device;                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                         m_np_lock;                              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 class fx::dispose_list_t*                m_dispose_list;                         //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_DisposeList
        _m025 class fx::driver_t*                      m_driver;                               //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_Driver
        _m026 class mx::device_object_t                m_device_object;                        //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_DeviceObject
        _m027 class mx::device_object_t                m_attached_device;                      //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_AttachedDevice
        _m028 class mx::device_object_t                m_physical_device;                      //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_PhysicalDevice
        _m029 class fx::callback_lock_t*               m_callback_lock_ptr;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_CallbackLockPtr
        _m030 class fx::object_t*                      m_callback_lock_object_ptr;             //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_CallbackLockObjectPtr
        _m031 enum wdf::execution_level_t              m_execution_level;                      //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_ExecutionLevel
        _m032 enum wdf::synchronization_scope_t        m_synchronization_scope;                //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .m_SynchronizationScope
        _m033 int32_t                                  m_dma_packet_transaction_status;        //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_DmaPacketTransactionStatus
        _m034 enum wdf::device_pnp_state_t             m_current_pnp_state;                    //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_CurrentPnpState
        _m035 enum wdf::device_power_state_t           m_current_power_state;                  //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .m_CurrentPowerState
        _m036 enum wdf::device_power_policy_state_t    m_current_power_policy_state;           //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_CurrentPowerPolicyState
        _m037 enum wdf::device_io_type_t               m_read_write_io_type;                   //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .m_ReadWriteIoType
        _m038 uint8_t                                  m_callback_flags;                       //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_CallbackFlags
        _m039 uint8_t                                  m_filter;                               //{ +0x00d9    +0x00d9    +0x00d9    +0x00d9    } | .m_Filter
        _m040 uint8_t                                  m_power_pageable_capable;               //{ +0x00da    +0x00da    +0x00da    +0x00da    } | .m_PowerPageableCapable
        _m041 uint8_t                                  m_parent_waiting_on_child;              //{ +0x00db    +0x00db    +0x00db    +0x00db    } | .m_ParentWaitingOnChild
        _m042 uint8_t                                  m_exclusive;                            //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .m_Exclusive
        _m043 uint8_t                                  m_legacy;                               //{ +0x00dd    +0x00dd    +0x00dd    +0x00dd    } | .m_Legacy
        _m044 uint8_t                                  m_device_object_deleted;                //{ +0x00de    +0x00de    +0x00de    +0x00de    } | .m_DeviceObjectDeleted
        _m045 char                                     m_default_priority_boost;               //{ +0x00df    +0x00df    +0x00df    +0x00df    } | .m_DefaultPriorityBoost
        _m046 class fx::device_t*                      m_parent_device;                        //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_ParentDevice
        _m047 nt::unicode_view                         m_device_name;                          //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_DeviceName
        _m048 nt::unicode_view                         m_symbolic_link_name;                   //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_SymbolicLinkName
        _m049 nt::unicode_view                         m_mof_resource_name;                    //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .m_MofResourceName
        _m050 uint8_t                                  m_pdo_known;                            //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_PdoKnown
        _m051 uint8_t                                  m_auto_forward_cleanup_close;           //{ +0x0119    +0x0119    +0x0119    +0x0119    } | .m_AutoForwardCleanupClose
        _m052 uint8_t                                  m_self_io_target_needed;                //{ +0x011a    +0x011a    +0x011a    +0x011a    } | .m_SelfIoTargetNeeded
        _m053 uint16_t                                 m_device_telemetry_info_flags;          //{ +0x011c    +0x011c    +0x011c    +0x011c    } | .m_DeviceTelemetryInfoFlags
        _m054 enum wdf::fileobject_class_t             m_file_object_class;                    //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_FileObjectClass
        _m055 class fx::spin_lock_transactioned_list_t m_io_targets_list;                      //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_IoTargetsList
        _m056 nt::list_entry_t                         m_preprocess_info_list_head;            //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .m_PreprocessInfoListHead
        _m057 nt::list_entry_t                         m_cx_device_info_list_head;             //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .m_CxDeviceInfoListHead
        _m058 nt::list_entry_t                         m_file_object_list_head;                //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .m_FileObjectListHead
        _m059 struct nt::npaged_lookaside_list_t       m_request_lookaside_list;               //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .m_RequestLookasideList
        _m060 uint64_t                                 m_request_lookaside_list_element_size;  //{ +0x0240    +0x0240    +0x0240    +0x0240    } | .m_RequestLookasideListElementSize
        _m061 struct wdf::object_attributes_t          m_request_attributes;                   //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .m_RequestAttributes
        _m062 class fx::pkg_io_t*                      m_pkg_io;                               //{ +0x0280    +0x0280    +0x0280    +0x0280    } | .m_PkgIo
        _m063 class fx::pkg_pnp_t*                     m_pkg_pnp;                              //{ +0x0288    +0x0288    +0x0288    +0x0288    } | .m_PkgPnp
        _m064 class fx::pkg_general_t*                 m_pkg_general;                          //{ +0x0290    +0x0290    +0x0290    +0x0290    } | .m_PkgGeneral
        _m065 class fx::wmi_irp_handler_t*             m_pkg_wmi;                              //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .m_PkgWmi
        _m066 class fx::default_irp_handler_t*         m_pkg_default;                          //{ +0x02a0    +0x02a0    +0x02a0    +0x02a0    } | .m_PkgDefault
                                                                                             
        SDK_MAGIC_PROPERTIES( "FxDevice.$", 0x2c0, true, 0x290d00ba03175615 );                                      
        SDK_FIXED_SIZE( device_t, 0x2c0 );                                                   
    };                                                                                       
};
#include "magic/device_t.end.hpp"
SDK_VERIFY( struct fx::device_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::device_t, 0x2c0 );
