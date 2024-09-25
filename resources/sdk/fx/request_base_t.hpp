#pragma once
#include <sdkgen/support_library.hpp>
#include "irp_t.hpp"
#include "../mx/lock_t.hpp"
#include "../io/csq_irp_context_t.hpp"
#include "../nt/single_list_entry_t.hpp"
#include "request_cancel_callback_t.hpp"
#include "request_completion_callback_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/request_base_t.start.hpp"
namespace fx
{
    class device_t;
    class object_t;
    class io_target_t;
    class irp_queue_t;
    class device_base_t;
    struct request_timer_t;
    struct driver_globals_t;
    struct request_context_t;

    // [class FxRequestBase]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class request_base_t                                                                    
    {                                                                                       
        struct u0_m_object_flags_by_name_t                                                  
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
            //                                                                              
            _m05 uint1_t passive_callbacks;                                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .PassiveCallbacks
            _m06 uint1_t no_delete_ddi;                                                       //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .NoDeleteDDI
            _m07 uint1_t delete_called;                                                       //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .DeleteCalled
            _m08 uint1_t committed;                                                           //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .Committed
            _m09 uint1_t passive_dispose;                                                     //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .PassiveDispose
            _m10 uint1_t force_dispose_thread;                                                //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .ForceDisposeThread
            _m11 uint1_t has_debug;                                                           //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .HasDebug
            _m12 uint1_t early_disposed_ext;                                                  //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .EarlyDisposedExt
            _m13 uint1_t trace_state;                                                         //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .TraceState
                                                                                            
            SDK_MAGIC_PROPERTIES( "FxRequestBase.m_ObjectFlagsByName.$", 0x2, true, 0xe35e50e3b6c1860b );                                                         
            SDK_FIXED_SIZE( u0_m_object_flags_by_name_t, 0x2 );                                                         
        };                                                                                  
                                                                                            
        struct u4_m_target_flags_by_name_t                                                  
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
            //                                                                              
            _m37 uint1_t completed;                                                           //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .Completed
            _m38 uint1_t flags_pended;                                                        //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .FlagsPended
            _m39 uint1_t timer_set;                                                           //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .TimerSet
            _m40 uint1_t cancelled_from_timer;                                                //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .CancelledFromTimer
            _m41 uint1_t ignore_state;                                                        //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .IgnoreState
                                                                                            
            SDK_MAGIC_PROPERTIES( "FxRequestBase.m_TargetFlagsByName.$", 0x1, true, 0x5acc3b7fec9d2914 );                                                         
            SDK_FIXED_SIZE( u4_m_target_flags_by_name_t, 0x1 );                                                         
        };                                                                                  
                                                                                            
        struct u8_m_verifer_flags_by_name_t                                                 
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                                  
            //                                                                              
            _m48 int1_t driver_owned;                                                         //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .DriverOwned
            _m49 int1_t tag_request;                                                          //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .TagRequest
            _m50 int1_t forwarded;                                                            //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .Forwarded
            _m51 int1_t driver_dispatch;                                                      //{ +0x0000@3  +0x0000@3  +0x0000@3  +0x0000@3  } | .DriverDispatch
            _m52 int1_t driver_cancelable;                                                    //{ +0x0000@4  +0x0000@4  +0x0000@4  +0x0000@4  } | .DriverCancelable
            _m53 int1_t driver_inprocess_context;                                             //{ +0x0000@5  +0x0000@5  +0x0000@5  +0x0000@5  } | .DriverInprocessContext
            _m54 int1_t cancelled;                                                            //{ +0x0000@6  +0x0000@6  +0x0000@6  +0x0000@6  } | .Cancelled
            _m55 int1_t formatted;                                                            //{ +0x0000@7  +0x0000@7  +0x0000@7  +0x0000@7  } | .Formatted
            _m56 int1_t sent_to_target;                                                       //{ +0x0000@8  +0x0000@8  +0x0000@8  +0x0000@8  } | .SentToTarget
            _m57 int1_t driver_in_evt_io_stop_context;                                        //{ +0x0000@9  +0x0000@9  +0x0000@9  +0x0000@9  } | .DriverInEvtIoStopContext
                                                                                            
            SDK_MAGIC_PROPERTIES( "FxRequestBase.m_VeriferFlagsByName.$", 0x2, true, 0x535d40246088df97 );                                                                  
            SDK_FIXED_SIZE( u8_m_verifer_flags_by_name_t, 0x2 );                                                                  
        };                                                                                  
                                                                                            
        struct u12_m_request_base_flags_by_name_t                                           
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                         
            //                                                                              
            _m63 uint1_t system_mdl_mapped;                                                   //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SystemMdlMapped
            _m64 uint1_t output_mdl_mapped;                                                   //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .OutputMdlMapped
            _m65 uint1_t sync_cleanup_context;                                                //{ +0x0000@2  +0x0000@2  +0x0000@2  +0x0000@2  } | .SyncCleanupContext
                                                                                            
            SDK_MAGIC_PROPERTIES( "FxRequestBase.m_RequestBaseFlagsByName.$", 0x1, true, 0xa95619429b464153 );                                                         
            SDK_FIXED_SIZE( u12_m_request_base_flags_by_name_t, 0x1 );                                                         
        };                                                                                  
                                                                                            
        struct u16_m_request_base_static_flags_by_name_t                                    
        {                                                                                   
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                        
            //                                                                              
            _m68 uint1_t system_buffer_valid;                                                 //{ +0x0000@0  +0x0000@0  +0x0000@0  +0x0000@0  } | .SystemBufferValid
            _m69 uint1_t output_buffer_valid;                                                 //{ +0x0000@1  +0x0000@1  +0x0000@1  +0x0000@1  } | .OutputBufferValid
                                                                                            
            SDK_MAGIC_PROPERTIES( "FxRequestBase.m_RequestBaseStaticFlagsByName.$", 0x1, true, 0xe02e7629a1356c44 );                                                        
            SDK_FIXED_SIZE( u16_m_request_base_static_flags_by_name_t, 0x1 );                                                        
        };                                                                                  
                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                    
        //                                                                                  
        _m000 uint16_t                                  m_type;                               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_Type
        _m001 uint16_t                                  m_object_size;                        //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .m_ObjectSize
        _m002 int32_t                                   m_refcnt;                             //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_Refcnt
        _m003 struct fx::driver_globals_t*              m_globals;                            //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_Globals
        _m004 uint16_t                                  m_object_flags;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlags
        _m014 u0_m_object_flags_by_name_t               m_object_flags_by_name;               //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_ObjectFlagsByName
        _m015 uint16_t                                  m_object_state;                       //{ +0x001a    +0x001a    +0x001a    +0x001a    } | .m_ObjectState
        _m016 nt::list_entry_t                          m_child_list_head;                    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .m_ChildListHead
        _m017 class mx::lock_t                          m_spin_lock;                          //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .m_SpinLock
        _m018 class fx::object_t*                       m_parent_object;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .m_ParentObject
        _m019 nt::list_entry_t                          m_child_entry;                        //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .m_ChildEntry
        _m020 struct nt::single_list_entry_t            m_dispose_single_entry;               //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .m_DisposeSingleEntry
        _m021 class fx::device_base_t*                  m_device_base;                        //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_DeviceBase
        _m022 class fx::device_t*                       m_device;                             //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .m_Device
        _m023 class mx::lock_t                          m_np_lock;                            //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .m_NPLock
        _m024 struct io::csq_irp_context_t              m_csq_context;                        //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_CsqContext
        _m025 nt::list_entry_t                          m_list_entry;                         //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .m_ListEntry
        _m026 struct nt::single_list_entry_t            m_drain_single_entry;                 //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_DrainSingleEntry
        _m027 uint8_t                                   m_next_stack_location_formatted;      //{ +0x0090    +0x0090    +0x0090    +0x0090    } | .m_NextStackLocationFormatted
        _m028 class fx::irp_t                           m_irp;                                //{ +0x0098    +0x0098    +0x0098    +0x0098    } | .m_Irp
        _m029 class fx::io_target_t*                    m_target;                             //{ +0x00a0    +0x00a0    +0x00a0    +0x00a0    } | .m_Target
        _m030 struct fx::request_context_t*             m_request_context;                    //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .m_RequestContext
        _m031 struct fx::request_timer_t*               m_timer;                              //{ +0x00b0    +0x00b0    +0x00b0    +0x00b0    } | .m_Timer
        _m032 class fx::request_cancel_callback_t       m_cancel_routine;                     //{ +0x00b8    +0x00b8    +0x00b8    +0x00b8    } | .m_CancelRoutine
        _m033 class fx::request_completion_callback_t   m_completion_routine;                 //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .m_CompletionRoutine
        _m034 void*                                     m_target_completion_context;          //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .m_TargetCompletionContext
        _m035 int32_t                                   m_irp_completion_reference_count;     //{ +0x00d0    +0x00d0    +0x00d0    +0x00d0    } | .m_IrpCompletionReferenceCount
        _m036 uint8_t                                   m_target_flags;                       //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .m_TargetFlags
        _m042 u4_m_target_flags_by_name_t               m_target_flags_by_name;               //{ +0x00d4    +0x00d4    +0x00d4    +0x00d4    } | .m_TargetFlagsByName
        _m043 uint8_t                                   m_irp_allocation;                     //{ +0x00d5    +0x00d5    +0x00d5    +0x00d5    } | .m_IrpAllocation
        _m044 uint8_t                                   m_completed;                          //{ +0x00d6    +0x00d6    +0x00d6    +0x00d6    } | .m_Completed
        _m045 uint8_t                                   m_canceled;                           //{ +0x00d7    +0x00d7    +0x00d7    +0x00d7    } | .m_Canceled
        _m046 uint16_t                                  m_system_buffer_offset;               //{ +0x00d8    +0x00d8    +0x00d8    +0x00d8    } | .m_SystemBufferOffset
        _m047 int16_t                                   m_verifier_flags;                     //{ +0x00da    +0x00da    +0x00da    +0x00da    } | .m_VerifierFlags
        _m058 u8_m_verifer_flags_by_name_t              m_verifer_flags_by_name;              //{ +0x00da    +0x00da    +0x00da    +0x00da    } | .m_VeriferFlagsByName
        _m059 int32_t                                   m_irp_reference_count;                //{ +0x00dc    +0x00dc    +0x00dc    +0x00dc    } | .m_IrpReferenceCount
        _m060 class fx::irp_queue_t*                    m_irp_queue;                          //{ +0x00e0    +0x00e0    +0x00e0    +0x00e0    } | .m_IrpQueue
        _m061 uint16_t                                  m_output_buffer_offset;               //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .m_OutputBufferOffset
        _m062 uint8_t                                   m_request_base_flags;                 //{ +0x00ea    +0x00ea    +0x00ea    +0x00ea    } | .m_RequestBaseFlags
        _m066 u12_m_request_base_flags_by_name_t        m_request_base_flags_by_name;         //{ +0x00ea    +0x00ea    +0x00ea    +0x00ea    } | .m_RequestBaseFlagsByName
        _m067 uint8_t                                   m_request_base_static_flags;          //{ +0x00eb    +0x00eb    +0x00eb    +0x00eb    } | .m_RequestBaseStaticFlags
        _m070 u16_m_request_base_static_flags_by_name_t m_request_base_static_flags_by_name;  //{ +0x00eb    +0x00eb    +0x00eb    +0x00eb    } | .m_RequestBaseStaticFlagsByName
        _m071 char                                      m_priority_boost;                     //{ +0x00ec    +0x00ec    +0x00ec    +0x00ec    } | .m_PriorityBoost
        _m072 uint8_t                                   m_completion_state;                   //{ +0x00ed    +0x00ed    +0x00ed    +0x00ed    } | .m_CompletionState
        _m073 uint8_t                                   m_can_complete;                       //{ +0x00ee    +0x00ee    +0x00ee    +0x00ee    } | .m_CanComplete
        _m074 struct nt::mdl_t*                         m_allocated_mdl;                      //{ +0x00f0    +0x00f0    +0x00f0    +0x00f0    } | .m_AllocatedMdl
                                                                                            
        SDK_MAGIC_PROPERTIES( "FxRequestBase.$", 0xf8, true, 0x6d295705911c668b );                                    
        SDK_FIXED_SIZE( request_base_t, 0xf8 );                                             
    };                                                                                      
};
#include "magic/request_base_t.end.hpp"
SDK_VERIFY( struct fx::request_base_t::u0_m_object_flags_by_name_t, 0x2 );
SDK_VERIFY( struct fx::request_base_t::u4_m_target_flags_by_name_t, 0x1 );
SDK_VERIFY( struct fx::request_base_t::u8_m_verifer_flags_by_name_t, 0x2 );
SDK_VERIFY( struct fx::request_base_t::u12_m_request_base_flags_by_name_t, 0x1 );
SDK_VERIFY( struct fx::request_base_t::u16_m_request_base_static_flags_by_name_t, 0x1 );
SDK_VERIFY( class fx::request_base_t, 0xf8 );
