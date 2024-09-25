#pragma once
#include <sdkgen/support_library.hpp>
#include "cr_event_t.hpp"
#include "irp_queue_t.hpp"
#include "../mx/lock_t.hpp"
#include "transactioned_entry_t.hpp"
#include "../wdf/io_target_state_t.hpp"
#include "io_target_query_remove_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "io_target_remove_canceled_t.hpp"
#include "io_target_remove_complete_t.hpp"
#include "io_target_remove_open_params_t.hpp"

namespace nt { struct device_object_t; }
namespace nt { struct file_object_t;   }

#include "magic/io_target_remote_t.start.hpp"
namespace fx
{
    class device_t;
    class driver_t;
    class object_t;
    class device_base_t;
    struct driver_globals_t;
    struct io_target_cleared_pointers_t;

    // [class FxIoTargetRemote]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_target_remote_t                                                   
    {                                                                          
        struct u0_m_object_flags_by_name_t                                     
        {                                                                      
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
            //                                                                 
            _m05 uint1_t passive_callbacks;                                      //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                          //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                              //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                   //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                              //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                     //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                            //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                               
            SDK_MAGIC_PROPERTIES( "FxIoTargetRemote.m_ObjectFlagsByName.$", 0x2, true, 0xf2675eb623db7e02 );                                            
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                            
        };                                                                     
                                                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                       
        //                                                                     
        _m000 uint16_t                                  m_type;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                  m_object_size;           //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                   m_refcnt;                //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*              m_globals;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                  m_object_flags;          //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t               m_object_flags_by_name;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                  m_object_state;          //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                          m_child_list_head;       //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                          m_spin_lock;             //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                       m_parent_object;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                          m_child_entry;           //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t            m_dispose_single_entry;  //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                  m_device_base;           //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                       m_device;                //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                          m_np_lock;               //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 struct fx::transactioned_entry_t          m_transactioned_entry;   //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_TransactionedEntry
        _m025 uint8_t                                   m_in_stack;              //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_InStack
        _m026 uint8_t                                   m_added_to_device_list;  //{ +0x00a9    +0x00a9    +0x00a9    +0x00a9    } | .m_AddedToDeviceList
        _m027 nt::list_entry_t                          m_sent_io_list_head;     //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_SentIoListHead
        _m028 nt::list_entry_t                          m_ignored_io_list_head;  //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_IgnoredIoListHead
        _m029 struct fx::cr_event_t                     m_sent_io_event;         //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_SentIoEvent
        _m030 struct fx::cr_event_t*                    m_dispose_event;         //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_DisposeEvent
        _m031 class fx::irp_queue_t                     m_pended_queue;          //{ +0x00f8    +0x00f8    +0x00f8    +0x00f8    } | .m_PendedQueue
        _m032 class fx::driver_t*                       m_driver;                //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_Driver
        _m033 struct nt::device_object_t*               m_in_stack_device;       //{ +0x0128    +0x0128    +0x0128    +0x0128    } | .m_InStackDevice
        _m034 struct nt::device_object_t*               m_target_device;         //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .m_TargetDevice
        _m035 struct nt::device_object_t*               m_target_pdo;            //{ +0x0138    +0x0138    +0x0138    +0x0138    } | .m_TargetPdo
        _m036 struct nt::file_object_t*                 m_target_file_object;    //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_TargetFileObject
        _m037 enum wdf::io_target_state_t               m_state;                 //{ +0x0148    +0x0148    +0x0148    +0x0148    } | .m_State
        _m038 int32_t                                   m_io_count;              //{ +0x014c    +0x014c    +0x014c    +0x014c    } | .m_IoCount
        _m039 char                                      m_target_stack_size;     //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .m_TargetStackSize
        _m040 uint8_t                                   m_target_io_type;        //{ +0x0151    +0x0151    +0x0151    +0x0151    } | .m_TargetIoType
        _m041 uint8_t                                   m_waiting_for_sent_io;   //{ +0x0152    +0x0152    +0x0152    +0x0152    } | .m_WaitingForSentIo
        _m042 uint8_t                                   m_removing;              //{ +0x0153    +0x0153    +0x0153    +0x0153    } | .m_Removing
        _m043 void*                                     m_target_handle;         //{ +0x0158    +0x0158    +0x0158    +0x0158    } | .m_TargetHandle
        _m044 void*                                     m_target_notify_handle;  //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .m_TargetNotifyHandle
        _m045 struct fx::io_target_query_remove_t       m_evt_query_remove;      //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .m_EvtQueryRemove
        _m046 struct fx::io_target_remove_canceled_t    m_evt_remove_canceled;   //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .m_EvtRemoveCanceled
        _m047 struct fx::io_target_remove_complete_t    m_evt_remove_complete;   //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .m_EvtRemoveComplete
        _m048 struct fx::cr_event_t                     m_opened_event;          //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .m_OpenedEvent
        _m049 struct fx::io_target_cleared_pointers_t*  m_cleared_pointers;      //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .m_ClearedPointers
        _m050 uint8_t                                   m_open_state;            //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .m_OpenState
        _m051 struct fx::io_target_remove_open_params_t m_open_params;           //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .m_OpenParams
                                                                               
        SDK_MAGIC_PROPERTIES( "FxIoTargetRemote.$", 0x1f8, true, 0xfe40661d8493d707 );                       
        SDK_FIXED_SIZE( io_target_remote_t, 0x1f8 );                           
    };                                                                         
};
#include "magic/io_target_remote_t.end.hpp"
SDK_VERIFY( struct fx::io_target_remote_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::io_target_remote_t, 0x1f8 );
