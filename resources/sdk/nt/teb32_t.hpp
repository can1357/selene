#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "../os/tib32_t.hpp"
#include "client_id32_t.hpp"
#include "list_entry32_t.hpp"
#include "gdi_teb_batch32_t.hpp"
#include "processor_number_t.hpp"
#include "activation_context_stack32_t.hpp"

#include "magic/teb32_t.start.hpp"
namespace nt
{
    // [struct _TEB32]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct teb32_t                                                                          
    {                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                  
        _m000 struct os::tib32_t                      nt_tib;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NtTib
        _m001 uint32_t                                environment_pointer;                    //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .EnvironmentPointer
        _m002 struct nt::client_id32_t                client_id;                              //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ClientId
        _m003 uint32_t                                active_rpc_handle;                      //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .ActiveRpcHandle
        _m004 uint32_t                                thread_local_storage_pointer;           //{ +0x002c    +0x002c    +0x002c    +0x002c    } | .ThreadLocalStoragePointer
        _m005 uint32_t                                process_environment_block;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .ProcessEnvironmentBlock
        _m006 uint32_t                                last_error_value;                       //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .LastErrorValue
        _m007 uint32_t                                count_of_owned_critical_sections;       //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .CountOfOwnedCriticalSections
        _m008 uint32_t                                csr_client_thread;                      //{ +0x003c    +0x003c    +0x003c    +0x003c    } | .CsrClientThread
        _m009 uint32_t                                win32_thread_info;                      //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .Win32ThreadInfo
        _m010 sdk::array<uint32_t, 26>                user32_reserved;                        //{ +0x0044    +0x0044    +0x0044    +0x0044    } | .User32Reserved
        _m011 sdk::array<uint32_t, 5>                 user_reserved;                          //{ +0x00ac    +0x00ac    +0x00ac    +0x00ac    } | .UserReserved
        _m012 uint32_t                                wow32_reserved;                         //{ +0x00c0    +0x00c0    +0x00c0    +0x00c0    } | .WOW32Reserved
        _m013 uint32_t                                current_locale;                         //{ +0x00c4    +0x00c4    +0x00c4    +0x00c4    } | .CurrentLocale
        _m014 uint32_t                                fp_software_status_register;            //{ +0x00c8    +0x00c8    +0x00c8    +0x00c8    } | .FpSoftwareStatusRegister
        _m015 sdk::array<uint32_t, 16>                reserved_for_debugger_instrumentation;  //{ +0x00cc    +0x00cc    +0x00cc    +0x00cc    } | .ReservedForDebuggerInstrumentation
        _m016 sdk::array<uint32_t, 36>                system_reserved1;                       //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .SystemReserved1
        _m017 sdk::array<uint8_t, 8>                  working_on_behalf_ticket;               //{ +0x019c    +0x019c    +0x019c    +0x019c    } | .WorkingOnBehalfTicket
        _m018 int32_t                                 exception_code;                         //{ +0x01a4    +0x01a4    +0x01a4    +0x01a4    } | .ExceptionCode
        _m019 uint32_t                                activation_context_stack_pointer;       //{ +0x01a8    +0x01a8    +0x01a8    +0x01a8    } | .ActivationContextStackPointer
        _m020 uint32_t                                instrumentation_callback_sp;            //{ +0x01ac    +0x01ac    +0x01ac    +0x01ac    } | .InstrumentationCallbackSp
        _m021 uint32_t                                instrumentation_callback_previous_pc;   //{ +0x01b0    +0x01b0    +0x01b0    +0x01b0    } | .InstrumentationCallbackPreviousPc
        _m022 uint32_t                                instrumentation_callback_previous_sp;   //{ +0x01b4    +0x01b4    +0x01b4    +0x01b4    } | .InstrumentationCallbackPreviousSp
        _m023 uint8_t                                 instrumentation_callback_disabled;      //{ +0x01b8    +0x01b8    +0x01b8    +0x01b8    } | .InstrumentationCallbackDisabled
        _m024 uint32_t                                tx_fs_context;                          //{ +0x01d0    +0x01d0    +0x01d0    +0x01d0    } | .TxFsContext
        _m025 struct nt::gdi_teb_batch32_t            gdi_teb_batch;                          //{ +0x01d4    +0x01d4    +0x01d4    +0x01d4    } | .GdiTebBatch
        _m026 struct nt::client_id32_t                real_client_id;                         //{ +0x06b4    +0x06b4    +0x06b4    +0x06b4    } | .RealClientId
        _m027 uint32_t                                gdi_cached_process_handle;              //{ +0x06bc    +0x06bc    +0x06bc    +0x06bc    } | .GdiCachedProcessHandle
        _m028 uint32_t                                gdi_client_pid;                         //{ +0x06c0    +0x06c0    +0x06c0    +0x06c0    } | .GdiClientPID
        _m029 uint32_t                                gdi_client_tid;                         //{ +0x06c4    +0x06c4    +0x06c4    +0x06c4    } | .GdiClientTID
        _m030 uint32_t                                gdi_thread_local_info;                  //{ +0x06c8    +0x06c8    +0x06c8    +0x06c8    } | .GdiThreadLocalInfo
        _m031 sdk::array<uint32_t, 62>                win32_client_info;                      //{ +0x06cc    +0x06cc    +0x06cc    +0x06cc    } | .Win32ClientInfo
        _m032 sdk::array<uint32_t, 233>               gl_dispatch_table;                      //{ +0x07c4    +0x07c4    +0x07c4    +0x07c4    } | .glDispatchTable
        _m033 sdk::array<uint32_t, 29>                gl_reserved1;                           //{ +0x0b68    +0x0b68    +0x0b68    +0x0b68    } | .glReserved1
        _m034 uint32_t                                gl_reserved2;                           //{ +0x0bdc    +0x0bdc    +0x0bdc    +0x0bdc    } | .glReserved2
        _m035 uint32_t                                gl_section_info;                        //{ +0x0be0    +0x0be0    +0x0be0    +0x0be0    } | .glSectionInfo
        _m036 uint32_t                                gl_section;                             //{ +0x0be4    +0x0be4    +0x0be4    +0x0be4    } | .glSection
        _m037 uint32_t                                gl_table;                               //{ +0x0be8    +0x0be8    +0x0be8    +0x0be8    } | .glTable
        _m038 uint32_t                                gl_current_rc;                          //{ +0x0bec    +0x0bec    +0x0bec    +0x0bec    } | .glCurrentRC
        _m039 uint32_t                                gl_context;                             //{ +0x0bf0    +0x0bf0    +0x0bf0    +0x0bf0    } | .glContext
        _m040 uint32_t                                last_status_value;                      //{ +0x0bf4    +0x0bf4    +0x0bf4    +0x0bf4    } | .LastStatusValue
        _m041 nt::ascii_view32                        static_unicode_string;                  //{ +0x0bf8    +0x0bf8    +0x0bf8    +0x0bf8    } | .StaticUnicodeString
        _m042 sdk::array<wchar_t, 261>                static_unicode_buffer;                  //{ +0x0c00    +0x0c00    +0x0c00    +0x0c00    } | .StaticUnicodeBuffer
        _m043 uint32_t                                deallocation_stack;                     //{ +0x0e0c    +0x0e0c    +0x0e0c    +0x0e0c    } | .DeallocationStack
        _m044 sdk::array<uint32_t, 64>                tls_slots;                              //{ +0x0e10    +0x0e10    +0x0e10    +0x0e10    } | .TlsSlots
        _m045 struct nt::list_entry32_t               tls_links;                              //{ +0x0f10    +0x0f10    +0x0f10    +0x0f10    } | .TlsLinks
        _m046 uint32_t                                vdm;                                    //{ +0x0f18    +0x0f18    +0x0f18    +0x0f18    } | .Vdm
        _m047 uint32_t                                reserved_for_nt_rpc;                    //{ +0x0f1c    +0x0f1c    +0x0f1c    +0x0f1c    } | .ReservedForNtRpc
        _m048 sdk::array<uint32_t, 2>                 dbg_ss_reserved;                        //{ +0x0f20    +0x0f20    +0x0f20    +0x0f20    } | .DbgSsReserved
        _m049 uint32_t                                hard_error_mode;                        //{ +0x0f28    +0x0f28    +0x0f28    +0x0f28    } | .HardErrorMode
        _m050 sdk::array<uint32_t, 9>                 instrumentation;                        //{ +0x0f2c    +0x0f2c    +0x0f2c    +0x0f2c    } | .Instrumentation
        _m051 struct nt::guid_t                       activity_id;                            //{ +0x0f50    +0x0f50    +0x0f50    +0x0f50    } | .ActivityId
        _m052 uint32_t                                sub_process_tag;                        //{ +0x0f60    +0x0f60    +0x0f60    +0x0f60    } | .SubProcessTag
        _m053 uint32_t                                perflib_data;                           //{ +0x0f64    +0x0f64    +0x0f64    +0x0f64    } | .PerflibData
        _m054 uint32_t                                etw_trace_data;                         //{ +0x0f68    +0x0f68    +0x0f68    +0x0f68    } | .EtwTraceData
        _m055 uint32_t                                win_sock_data;                          //{ +0x0f6c    +0x0f6c    +0x0f6c    +0x0f6c    } | .WinSockData
        _m056 uint32_t                                gdi_batch_count;                        //{ +0x0f70    +0x0f70    +0x0f70    +0x0f70    } | .GdiBatchCount
        _m057 struct nt::processor_number_t           current_ideal_processor;                //{ +0x0f74    +0x0f74    +0x0f74    +0x0f74    } | .CurrentIdealProcessor
        _m058 uint32_t                                ideal_processor_value;                  //{ +0x0f74    +0x0f74    +0x0f74    +0x0f74    } | .IdealProcessorValue
        _m059 uint8_t                                 ideal_processor;                        //{ +0x0f77    +0x0f77    +0x0f77    +0x0f77    } | .IdealProcessor
        _m060 uint32_t                                guaranteed_stack_bytes;                 //{ +0x0f78    +0x0f78    +0x0f78    +0x0f78    } | .GuaranteedStackBytes
        _m061 uint32_t                                reserved_for_perf;                      //{ +0x0f7c    +0x0f7c    +0x0f7c    +0x0f7c    } | .ReservedForPerf
        _m062 uint32_t                                reserved_for_ole;                       //{ +0x0f80    +0x0f80    +0x0f80    +0x0f80    } | .ReservedForOle
        _m063 uint32_t                                waiting_on_loader_lock;                 //{ +0x0f84    +0x0f84    +0x0f84    +0x0f84    } | .WaitingOnLoaderLock
        _m064 uint32_t                                saved_priority_state;                   //{ +0x0f88    +0x0f88    +0x0f88    +0x0f88    } | .SavedPriorityState
        _m065 uint32_t                                reserved_for_code_coverage;             //{ +0x0f8c    +0x0f8c    +0x0f8c    +0x0f8c    } | .ReservedForCodeCoverage
        _m066 uint32_t                                thread_pool_data;                       //{ +0x0f90    +0x0f90    +0x0f90    +0x0f90    } | .ThreadPoolData
        _m067 uint32_t                                tls_expansion_slots;                    //{ +0x0f94    +0x0f94    +0x0f94    +0x0f94    } | .TlsExpansionSlots
        _m068 uint32_t                                mui_generation;                         //{ +0x0f98    +0x0f98    +0x0f98    +0x0f98    } | .MuiGeneration
        _m069 uint32_t                                is_impersonating;                       //{ +0x0f9c    +0x0f9c    +0x0f9c    +0x0f9c    } | .IsImpersonating
        _m070 uint32_t                                nls_cache;                              //{ +0x0fa0    +0x0fa0    +0x0fa0    +0x0fa0    } | .NlsCache
        _m071 uint32_t                                p_shim_data;                            //{ +0x0fa4    +0x0fa4    +0x0fa4    +0x0fa4    } | .pShimData
        _m072 uint32_t                                current_transaction_handle;             //{ +0x0fac    +0x0fac    +0x0fac    +0x0fac    } | .CurrentTransactionHandle
        _m073 uint32_t                                active_frame;                           //{ +0x0fb0    +0x0fb0    +0x0fb0    +0x0fb0    } | .ActiveFrame
        _m074 uint32_t                                fls_data;                               //{ +0x0fb4    +0x0fb4    +0x0fb4    +0x0fb4    } | .FlsData
        _m075 uint32_t                                preferred_languages;                    //{ +0x0fb8    +0x0fb8    +0x0fb8    +0x0fb8    } | .PreferredLanguages
        _m076 uint32_t                                user_pref_languages;                    //{ +0x0fbc    +0x0fbc    +0x0fbc    +0x0fbc    } | .UserPrefLanguages
        _m077 uint32_t                                merged_pref_languages;                  //{ +0x0fc0    +0x0fc0    +0x0fc0    +0x0fc0    } | .MergedPrefLanguages
        _m078 uint32_t                                mui_impersonation;                      //{ +0x0fc4    +0x0fc4    +0x0fc4    +0x0fc4    } | .MuiImpersonation
        _m079 volatile uint16_t                       cross_teb_flags;                        //{ +0x0fc8    +0x0fc8    +0x0fc8    +0x0fc8    } | .CrossTebFlags
        _m080 volatile uint16_t                       spare_cross_teb_bits;                   //{ +0x0fc8@0  +0x0fc8@0  +0x0fc8@0  +0x0fc8@0  } | .SpareCrossTebBits
        _m081 uint16_t                                same_teb_flags;                         //{ +0x0fca    +0x0fca    +0x0fca    +0x0fca    } | .SameTebFlags
        _m082 uint1_t                                 safe_thunk_call;                        //{ +0x0fca@0  +0x0fca@0  +0x0fca@0  +0x0fca@0  } | .SafeThunkCall
        _m083 uint1_t                                 in_debug_print;                         //{ +0x0fca@1  +0x0fca@1  +0x0fca@1  +0x0fca@1  } | .InDebugPrint
        _m084 uint1_t                                 has_fiber_data;                         //{ +0x0fca@2  +0x0fca@2  +0x0fca@2  +0x0fca@2  } | .HasFiberData
        _m085 uint1_t                                 skip_thread_attach;                     //{ +0x0fca@3  +0x0fca@3  +0x0fca@3  +0x0fca@3  } | .SkipThreadAttach
        _m086 uint1_t                                 wer_in_ship_assert_code;                //{ +0x0fca@4  +0x0fca@4  +0x0fca@4  +0x0fca@4  } | .WerInShipAssertCode
        _m087 uint1_t                                 ran_process_init;                       //{ +0x0fca@5  +0x0fca@5  +0x0fca@5  +0x0fca@5  } | .RanProcessInit
        _m088 uint1_t                                 cloned_thread;                          //{ +0x0fca@6  +0x0fca@6  +0x0fca@6  +0x0fca@6  } | .ClonedThread
        _m089 uint1_t                                 suppress_debug_msg;                     //{ +0x0fca@7  +0x0fca@7  +0x0fca@7  +0x0fca@7  } | .SuppressDebugMsg
        _m090 uint1_t                                 disable_user_stack_walk;                //{ +0x0fca@8  +0x0fca@8  +0x0fca@8  +0x0fca@8  } | .DisableUserStackWalk
        _m091 uint1_t                                 rtl_exception_attached;                 //{ +0x0fca@9  +0x0fca@9  +0x0fca@9  +0x0fca@9  } | .RtlExceptionAttached
        _m092 uint1_t                                 initial_thread;                         //{ +0x0fca@10 +0x0fca@10 +0x0fca@10 +0x0fca@10 } | .InitialThread
        _m093 uint1_t                                 session_aware;                          //{ +0x0fca@11 +0x0fca@11 +0x0fca@11 +0x0fca@11 } | .SessionAware
        _m094 uint1_t                                 load_owner;                             //{ +0x0fca@12 +0x0fca@12 +0x0fca@12 +0x0fca@12 } | .LoadOwner
        _m095 uint1_t                                 loader_worker;                          //{ +0x0fca@13 +0x0fca@13 +0x0fca@13 +0x0fca@13 } | .LoaderWorker
        _m096 uint32_t                                txn_scope_enter_callback;               //{ +0x0fcc    +0x0fcc    +0x0fcc    +0x0fcc    } | .TxnScopeEnterCallback
        _m097 uint32_t                                txn_scope_exit_callback;                //{ +0x0fd0    +0x0fd0    +0x0fd0    +0x0fd0    } | .TxnScopeExitCallback
        _m098 uint32_t                                txn_scope_context;                      //{ +0x0fd4    +0x0fd4    +0x0fd4    +0x0fd4    } | .TxnScopeContext
        _m099 uint32_t                                lock_count;                             //{ +0x0fd8    +0x0fd8    +0x0fd8    +0x0fd8    } | .LockCount
        _m100 int32_t                                 wow_teb_offset;                         //{ +0x0fdc    +0x0fdc    +0x0fdc    +0x0fdc    } | .WowTebOffset
        _m101 uint32_t                                resource_ret_value;                     //{ +0x0fe0    +0x0fe0    +0x0fe0    +0x0fe0    } | .ResourceRetValue
        _m102 uint32_t                                reserved_for_wdf;                       //{ +0x0fe4    +0x0fe4    +0x0fe4    +0x0fe4    } | .ReservedForWdf
        _m103 uint64_t                                reserved_for_crt;                       //{ +0x0fe8    +0x0fe8    +0x0fe8    +0x0fe8    } | .ReservedForCrt
        _m104 struct nt::guid_t                       effective_container_id;                 //{ +0x0ff0    +0x0ff0    +0x0ff0    +0x0ff0    } | .EffectiveContainerId
                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                  
        _m105 char                                    placeholder_compatibility_mode;         //{ +0x0174    +0x0174    +0x0174    } | .PlaceholderCompatibilityMode
        _m106 uint8_t                                 placeholder_hydration_always_explicit;  //{ +0x0175    +0x0175    +0x0175    } | .PlaceholderHydrationAlwaysExplicit
        _m107 uint32_t                                proxied_process_id;                     //{ +0x0180    +0x0180    +0x0180    } | .ProxiedProcessId
        _m108 struct nt::activation_context_stack32_t activation_stack;                       //{ +0x0184    +0x0184    +0x0184    } | ._ActivationStack
        _m109 uint32_t                                heap_data;                              //{ +0x0fa8    +0x0fa8    +0x0fa8    } | .HeapData
        _m110 uint1_t                                 skip_loader_init;                       //{ +0x0fca@14 +0x0fca@14 +0x0fca@14 } | .SkipLoaderInit
                                                                                            
        // Windows 11                                                                       
        //                                                                                  
        _m111 uint1_t                                 skip_file_api_brokering;                //{ +0x0fca@15 } | .SkipFileAPIBrokering
        _m112 uint64_t                                last_sleep_counter;                     //{ +0x1000    } | .LastSleepCounter
        _m113 uint32_t                                spin_call_count;                        //{ +0x1008    } | .SpinCallCount
        _m114 uint64_t                                extended_feature_disable_mask;          //{ +0x1010    } | .ExtendedFeatureDisableMask
                                                                                            
        // Windows 10 v1607                                                                 
        //                                                                                  
        _m115 uint16_t                                heap_virtual_affinity;                  //{ +0x0fa8    } | .HeapVirtualAffinity
        _m116 uint16_t                                low_frag_heap_data_slot;                //{ +0x0faa    } | .LowFragHeapDataSlot
                                                                                            
        SDK_MAGIC_PROPERTIES( "_TEB32.$", 0x1000, true, 0x87de4112a49a4f3 );                                      
        SDK_DYNAMIC_SIZE( teb32_t );                                                        
    };                                                                                      
};
#include "magic/teb32_t.end.hpp"
