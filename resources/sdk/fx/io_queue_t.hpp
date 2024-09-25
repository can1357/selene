#pragma once
#include <sdkgen/support_library.hpp>
#include "irp_queue_t.hpp"
#include "../mx/lock_t.hpp"
#include "../nt/kdpc_t.hpp"
#include "../mx/event_t.hpp"
#include "io_queue_node_t.hpp"
#include "io_queue_state_t.hpp"
#include "io_queue_io_read_t.hpp"
#include "io_queue_io_stop_t.hpp"
#include "io_queue_io_state_t.hpp"
#include "io_queue_io_write_t.hpp"
#include "callback_spin_lock_t.hpp"
#include "io_queue_io_resume_t.hpp"
#include "callback_mutex_lock_t.hpp"
#include "io_queue_io_default_t.hpp"
#include "io_queue_power_state_t.hpp"
#include "../wdf/execution_level_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "io_queue_io_device_control_t.hpp"
#include "../wdf/synchronization_scope_t.hpp"
#include "../wdf/io_queue_dispatch_type_t.hpp"
#include "io_queue_io_canceled_on_queue_t.hpp"
#include "io_queue_io_internal_device_control_t.hpp"

namespace wdf { struct fxio_forward_progress_context_t; }

#include "magic/io_queue_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class pkg_io_t;
    class device_base_t;
    class callback_lock_t;
    struct cx_device_info_t;
    struct driver_globals_t;
    class system_work_item_t;

    // [class FxIoQueue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class io_queue_t                                                                                                
    {                                                                                                               
        struct u0_m_object_flags_by_name_t                                                                          
        {                                                                                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                           
            //                                                                                                      
            _m05 uint1_t passive_callbacks;                                                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                                               //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                                               //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                                                   //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                                             //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                                        //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                                                   //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                                          //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                                                 //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                                                    
            SDK_MAGIC_PROPERTIES( "FxIoQueue.m_ObjectFlagsByName.$", 0x2, true, 0xe28611e4cfdec66 );                                                                           
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                                           
        };                                                                                                          
                                                                                                                    
        // Windows 10 v1607, Windows 10 v1607, Windows 10 v2004, Windows 10 v2004, Windows 11, Windows 11, Windows 10 v20H2, Windows 10 v20H2                                                      
        //                                                                                                          
        _m000 varint_t                                        m_type;                                                 //{ +0x0008    +0x00b4    +0x0008    +0x00b4    +0x0008    +0x00b4    +0x0008    +0x00b4    } | .m_Type
                                                                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                      
        //                                                                                                          
        _m001 uint16_t                                        m_object_size;                                          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                         m_refcnt;                                               //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*                    m_globals;                                              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                        m_object_flags;                                         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t                     m_object_flags_by_name;                                 //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                        m_object_state;                                         //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                                m_child_list_head;                                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                                m_spin_lock;                                            //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                             m_parent_object;                                        //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                                m_child_entry;                                          //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t                  m_dispose_single_entry;                                 //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                        m_device_base;                                          //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                             m_device;                                               //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                                m_np_lock;                                              //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 struct wdf::fxio_forward_progress_context_t*    m_fwd_prog_context;                                     //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .m_FwdProgContext
        _m025 uint8_t                                         m_support_forward_progress;                             //{ +0x0088    +0x0088    +0x0088    +0x0088    } | .m_SupportForwardProgress
        _m026 uint8_t                                         m_configured;                                           //{ +0x0089    +0x0089    +0x0089    +0x0089    } | .m_Configured
        _m027 uint8_t                                         m_power_managed;                                        //{ +0x008a    +0x008a    +0x008a    +0x008a    } | .m_PowerManaged
        _m028 volatile uint8_t                                m_power_referenced;                                     //{ +0x008b    +0x008b    +0x008b    +0x008b    } | .m_PowerReferenced
        _m029 uint8_t                                         m_allow_zero_length_requests;                           //{ +0x008c    +0x008c    +0x008c    +0x008c    } | .m_AllowZeroLengthRequests
        _m030 uint8_t                                         m_passive_level;                                        //{ +0x008d    +0x008d    +0x008d    +0x008d    } | .m_PassiveLevel
        _m031 volatile uint8_t                                m_deleted;                                              //{ +0x008e    +0x008e    +0x008e    +0x008e    } | .m_Deleted
        _m032 volatile uint8_t                                m_disposing;                                            //{ +0x008f    +0x008f    +0x008f    +0x008f    } | .m_Disposing
        _m033 class mx::event_t                               m_finish_disposing;                                     //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_FinishDisposing
        _m034 enum fx::io_queue_power_state_t                 m_power_state;                                          //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_PowerState
        _m035 uint32_t                                        m_max_parallel_queue_presented_requests;                //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_MaxParallelQueuePresentedRequests
        _m036 enum fx::io_queue_state_t                       m_queue_state;                                          //{ +0x00bc    +0x00bc    +0x00bc    +0x00bc    } | .m_QueueState
        _m037 class fx::irp_queue_t                           m_queue;                                                //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_Queue
        _m038 class fx::irp_queue_t                           m_driver_cancelable;                                    //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_DriverCancelable
        _m039 nt::list_entry_t                                m_cancelled;                                            //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .m_Cancelled
        _m040 nt::list_entry_t                                m_canceled_on_queue_list;                               //{ +0x0120    +0x0120    +0x0120    +0x0120    } | .m_CanceledOnQueueList
        _m041 nt::list_entry_t                                m_driver_owned;                                         //{ +0x0130    +0x0130    +0x0130    +0x0130    } | .m_DriverOwned
        _m042 nt::list_entry_t                                m_power_notify;                                         //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_PowerNotify
        _m043 nt::list_entry_t                                m_power_driver_notified;                                //{ +0x0150    +0x0150    +0x0150    +0x0150    } | .m_PowerDriverNotified
        _m044 class fx::pkg_io_t*                             m_pkg_io;                                               //{ +0x0160    +0x0160    +0x0160    +0x0160    } | .m_PkgIo
        _m045 struct fx::cx_device_info_t*                    m_cx_device_info;                                       //{ +0x0168    +0x0168    +0x0168    +0x0168    } | .m_CxDeviceInfo
        _m046 volatile uint32_t                               m_dispatching;                                          //{ +0x0170    +0x0170    +0x0170    +0x0170    } | .m_Dispatching
        _m047 volatile uint8_t                                m_transition_from_empty;                                //{ +0x0174    +0x0174    +0x0174    +0x0174    } | .m_TransitionFromEmpty
        _m048 volatile uint8_t                                m_force_transition_from_empty_when_adding_new_request;  //{ +0x0175    +0x0175    +0x0175    +0x0175    } | .m_ForceTransitionFromEmptyWhenAddingNewRequest
        _m049 volatile uint8_t                                m_cancel_dispatched_requests;                           //{ +0x0176    +0x0176    +0x0176    +0x0176    } | .m_CancelDispatchedRequests
        _m050 uint8_t                                         m_is_device_power_policy_owner;                         //{ +0x0177    +0x0177    +0x0177    +0x0177    } | .m_IsDevicePowerPolicyOwner
        _m051 volatile int32_t                                m_driver_io_count;                                      //{ +0x0178    +0x0178    +0x0178    +0x0178    } | .m_DriverIoCount
        _m052 volatile int32_t                                m_two_phase_completions;                                //{ +0x017c    +0x017c    +0x017c    +0x017c    } | .m_TwoPhaseCompletions
        _m053 class fx::io_queue_io_default_t                 m_io_default;                                           //{ +0x0180    +0x0180    +0x0180    +0x0180    } | .m_IoDefault
        _m054 class fx::io_queue_io_stop_t                    m_io_stop;                                              //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .m_IoStop
        _m055 class fx::io_queue_io_resume_t                  m_io_resume;                                            //{ +0x01a0    +0x01a0    +0x01a0    +0x01a0    } | .m_IoResume
        _m056 class fx::io_queue_io_read_t                    m_io_read;                                              //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .m_IoRead
        _m057 class fx::io_queue_io_write_t                   m_io_write;                                             //{ +0x01c0    +0x01c0    +0x01c0    +0x01c0    } | .m_IoWrite
        _m058 class fx::io_queue_io_device_control_t          m_io_device_control;                                    //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .m_IoDeviceControl
        _m059 class fx::io_queue_io_internal_device_control_t m_io_internal_device_control;                           //{ +0x01e0    +0x01e0    +0x01e0    +0x01e0    } | .m_IoInternalDeviceControl
        _m060 class fx::io_queue_io_canceled_on_queue_t       m_io_canceled_on_queue;                                 //{ +0x01f0    +0x01f0    +0x01f0    +0x01f0    } | .m_IoCanceledOnQueue
        _m061 class fx::callback_lock_t*                      m_io_cancel_callback_lock_ptr;                          //{ +0x0200    +0x0200    +0x0200    +0x0200    } | .m_IoCancelCallbackLockPtr
        _m062 class fx::io_queue_io_state_t                   m_idle_complete;                                        //{ +0x0208    +0x0208    +0x0208    +0x0208    } | .m_IdleComplete
        _m063 void*                                           m_idle_complete_context;                                //{ +0x0218    +0x0218    +0x0218    +0x0218    } | .m_IdleCompleteContext
        _m064 class fx::io_queue_io_state_t                   m_purge_complete;                                       //{ +0x0220    +0x0220    +0x0220    +0x0220    } | .m_PurgeComplete
        _m065 void*                                           m_purge_complete_context;                               //{ +0x0230    +0x0230    +0x0230    +0x0230    } | .m_PurgeCompleteContext
        _m066 class fx::io_queue_io_state_t                   m_ready_notify;                                         //{ +0x0238    +0x0238    +0x0238    +0x0238    } | .m_ReadyNotify
        _m067 void*                                           m_ready_notify_context;                                 //{ +0x0248    +0x0248    +0x0248    +0x0248    } | .m_ReadyNotifyContext
        _m068 enum wdf::execution_level_t                     m_execution_level;                                      //{ +0x0250    +0x0250    +0x0250    +0x0250    } | .m_ExecutionLevel
        _m069 enum wdf::synchronization_scope_t               m_synchronization_scope;                                //{ +0x0254    +0x0254    +0x0254    +0x0254    } | .m_SynchronizationScope
        _m070 class fx::callback_spin_lock_t                  m_callback_spin_lock;                                   //{ +0x0258    +0x0258    +0x0258    +0x0258    } | .m_CallbackSpinLock
        _m071 class fx::callback_mutex_lock_t                 m_callback_mutex_lock;                                  //{ +0x0298    +0x0298    +0x0298    +0x0298    } | .m_CallbackMutexLock
        _m072 class fx::callback_lock_t*                      m_callback_lock_ptr;                                    //{ +0x0308    +0x0308    +0x0308    +0x0308    } | .m_CallbackLockPtr
        _m073 class fx::object_t*                             m_callback_lock_object_ptr;                             //{ +0x0310    +0x0310    +0x0310    +0x0310    } | .m_CallbackLockObjectPtr
        _m074 struct nt::kdpc_t                               m_dpc;                                                  //{ +0x0318    +0x0318    +0x0318    +0x0318    } | .m_Dpc
        _m075 class fx::system_work_item_t*                   m_system_work_item;                                     //{ +0x0358    +0x0358    +0x0358    +0x0358    } | .m_SystemWorkItem
        _m076 uint8_t                                         m_dpc_queued;                                           //{ +0x0360    +0x0360    +0x0360    +0x0360    } | .m_DpcQueued
        _m077 uint8_t                                         m_work_item_queued;                                     //{ +0x0361    +0x0361    +0x0361    +0x0361    } | .m_WorkItemQueued
        _m078 uint8_t                                         m_requeue_deferred_dispatcher;                          //{ +0x0362    +0x0362    +0x0362    +0x0362    } | .m_RequeueDeferredDispatcher
        _m079 class mx::event_t                               m_power_idle;                                           //{ +0x0368    +0x0368    +0x0368    +0x0368    } | .m_PowerIdle
        _m080 struct fx::io_queue_node_t                      m_io_pkg_list_node;                                     //{ +0x0388    +0x0388    +0x0388    +0x0388    } | .m_IoPkgListNode
        _m081 struct nt::single_list_entry_t                  m_power_s_list_entry;                                   //{ +0x03a0    +0x03a0    +0x03a0    +0x03a0    } | .m_PowerSListEntry
                                                                                                                    
        SDK_MAGIC_PROPERTIES( "FxIoQueue.$", 0x3a8, true, 0x4d52c02c0472c226 );                                                      
        SDK_FIXED_SIZE( io_queue_t, 0x3a8 );                                                                        
    };                                                                                                              
};
#include "magic/io_queue_t.end.hpp"
SDK_VERIFY( struct fx::io_queue_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( class fx::io_queue_t, 0x3a8 );
