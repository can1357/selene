#pragma once
#include <sdkgen/support_library.hpp>
#include "pool_t.hpp"
#include "../mx/lock_t.hpp"
#include "../mx/event_t.hpp"
#include "../mx/driver_object_t.hpp"
#include "../wdf/driver_globals_t.hpp"
#include "../nt/kbugcheck_reason_callback_record_t.hpp"

namespace wdf { struct bind_info_t; }

#include "magic/driver_globals_t.start.hpp"
namespace fx
{
    class driver_t;
    struct telemetry_context_t;
    struct library_globals_type_t;
    struct object_debug_leak_detection_t;
    struct driver_globals_debug_extension_t;

    // [struct _FX_DRIVER_GLOBALS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct driver_globals_t                                                                                
    {                                                                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                               
        //                                                                                                 
        _m000 nt::list_entry_t                              linkage;                                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Linkage
        _m001 int32_t                                       refcnt;                                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Refcnt
        _m002 class mx::event_t                             destroy_event;                                   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DestroyEvent
        _m003 uint64_t                                      wdf_handle_mask;                                 //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .WdfHandleMask
        _m004 int32_t                                       wdf_verifier_allocate_fail_count;                //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .WdfVerifierAllocateFailCount
        _m005 uint32_t                                      tag;                                             //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .Tag
        _m006 class fx::driver_t*                           driver;                                          //{ +0x0048    +0x0048    +0x0050    +0x0048    } | .Driver
        _m007 struct fx::driver_globals_debug_extension_t*  debug_extension;                                 //{ +0x0050    +0x0050    +0x0058    +0x0050    } | .DebugExtension
        _m008 struct fx::library_globals_type_t*            library_globals;                                 //{ +0x0058    +0x0058    +0x0060    +0x0058    } | .LibraryGlobals
        _m009 void*                                         wdf_log_header;                                  //{ +0x0060    +0x0060    +0x0068    +0x0060    } | .WdfLogHeader
        _m010 struct fx::pool_t                             fx_pool_frameworks;                              //{ +0x0068    +0x0068    +0x0070    +0x0068    } | .FxPoolFrameworks
        _m011 uint8_t                                       fx_pool_tracking_on;                             //{ +0x0108    +0x0108    +0x0110    +0x0108    } | .FxPoolTrackingOn
        _m012 class mx::lock_t                              thread_table_lock;                               //{ +0x0110    +0x0110    +0x0118    +0x0110    } | .ThreadTableLock
        _m013 nt::list_entry_t*                             thread_table;                                    //{ +0x0120    +0x0120    +0x0128    +0x0120    } | .ThreadTable
        _m014 struct wdf::bind_info_t*                      wdf_bind_info;                                   //{ +0x0128    +0x0128    +0x0130    +0x0128    } | .WdfBindInfo
        _m015 void*                                         image_address;                                   //{ +0x0130    +0x0130    +0x0138    +0x0130    } | .ImageAddress
        _m016 uint32_t                                      image_size;                                      //{ +0x0138    +0x0138    +0x0140    +0x0138    } | .ImageSize
        _m017 uint8_t                                       fx_verifier_on;                                  //{ +0x013c    +0x013c    +0x0144    +0x013c    } | .FxVerifierOn
        _m018 uint8_t                                       fx_verify_downlevel;                             //{ +0x013d    +0x013d    +0x0145    +0x013d    } | .FxVerifyDownlevel
        _m019 uint8_t                                       fx_verifier_dbg_break_on_error;                  //{ +0x013e    +0x013e    +0x0146    +0x013e    } | .FxVerifierDbgBreakOnError
        _m020 uint8_t                                       fx_verifier_dbg_break_on_device_state_error;     //{ +0x013f    +0x013f    +0x0147    +0x013f    } | .FxVerifierDbgBreakOnDeviceStateError
        _m021 uint8_t                                       fx_verifier_handle;                              //{ +0x0140    +0x0140    +0x0148    +0x0140    } | .FxVerifierHandle
        _m022 uint8_t                                       fx_verifier_io;                                  //{ +0x0141    +0x0141    +0x0149    +0x0141    } | .FxVerifierIO
        _m023 uint8_t                                       fx_verifier_lock;                                //{ +0x0142    +0x0142    +0x014a    +0x0142    } | .FxVerifierLock
        _m024 uint8_t                                       fx_verify_on;                                    //{ +0x0143    +0x0143    +0x014b    +0x0143    } | .FxVerifyOn
        _m025 uint8_t                                       fx_verbose_on;                                   //{ +0x0144    +0x0144    +0x014c    +0x0144    } | .FxVerboseOn
        _m026 uint8_t                                       fx_request_parent_optimization_on;               //{ +0x0145    +0x0151    +0x0159    +0x0151    } | .FxRequestParentOptimizationOn
        _m027 uint8_t                                       fx_dsf_on;                                       //{ +0x0146    +0x0152    +0x015a    +0x0152    } | .FxDsfOn
        _m028 uint8_t                                       fx_force_logs_in_mini_dump;                      //{ +0x0147    +0x0153    +0x015b    +0x0153    } | .FxForceLogsInMiniDump
        _m029 uint8_t                                       fx_track_driver_for_mini_dump_log;               //{ +0x0148    +0x0154    +0x015c    +0x0154    } | .FxTrackDriverForMiniDumpLog
        _m030 uint8_t                                       is_user_mode_driver;                             //{ +0x0149    +0x0155    +0x015d    +0x0155    } | .IsUserModeDriver
        _m031 uint32_t                                      remove_lock_option_flags;                        //{ +0x014c    +0x0158    +0x0160    +0x0158    } | .RemoveLockOptionFlags
        _m032 uint32_t                                      bug_check_driver_info_index;                     //{ +0x0150    +0x015c    +0x0164    +0x015c    } | .BugCheckDriverInfoIndex
        _m033 struct nt::kbugcheck_reason_callback_record_t bug_check_callback_record;                       //{ +0x0158    +0x0160    +0x0168    +0x0160    } | .BugCheckCallbackRecord
        _m034 volatile int32_t                              wdf_log_header_ref_count;                        //{ +0x0188    +0x0190    +0x0198    +0x0190    } | .WdfLogHeaderRefCount
        _m035 uint32_t                                      fx_enhanced_verifier_options;                    //{ +0x018c    +0x0194    +0x019c    +0x0194    } | .FxEnhancedVerifierOptions
        _m036 uint32_t                                      fx_verifier_dbg_wait_for_signal_timeout_in_sec;  //{ +0x0190    +0x0198    +0x01a0    +0x0198    } | .FxVerifierDbgWaitForSignalTimeoutInSec
        _m037 uint32_t                                      dbg_wait_for_wake_interrupt_isr_timeout_in_sec;  //{ +0x0194    +0x019c    +0x01a4    +0x019c    } | .DbgWaitForWakeInterruptIsrTimeoutInSec
        _m038 struct fx::telemetry_context_t*               telemetry_context;                               //{ +0x0198    +0x01a0    +0x01a8    +0x01a0    } | .TelemetryContext
        _m039 struct wdf::driver_globals_t                  _public;                                         //{ +0x01a0    +0x01b0    +0x01c0    +0x01b0    } | .Public
                                                                                                           
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                                  
        //                                                                                                 
        _m040 struct fx::object_debug_leak_detection_t*     fx_verify_leak_detection;                        //{ +0x0148    +0x0150    +0x0148    } | .FxVerifyLeakDetection
        _m041 uint8_t                                       fx_verify_tag_tracking_enabled;                  //{ +0x0150    +0x0158    +0x0150    } | .FxVerifyTagTrackingEnabled
        _m042 uint8_t                                       is_driver_companion;                             //{ +0x01a8    +0x01b0    +0x01a8    } | .IsDriverCompanion
                                                                                                           
        // Windows 11                                                                                      
        //                                                                                                 
        _m043 class mx::driver_object_t                     driver_object;                                   //{ +0x0048    } | .DriverObject
                                                                                                           
        SDK_MAGIC_PROPERTIES( "_FX_DRIVER_GLOBALS.$", 0x1f0, true, 0x22ee240587bcac6b );                                               
        SDK_DYNAMIC_SIZE( driver_globals_t );                                                              
    };                                                                                                     
};
#include "magic/driver_globals_t.end.hpp"
