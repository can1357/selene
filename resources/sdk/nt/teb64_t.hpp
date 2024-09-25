#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "../os/tib64_t.hpp"
#include "client_id64_t.hpp"
#include "list_entry64_t.hpp"
#include "gdi_teb_batch64_t.hpp"
#include "processor_number_t.hpp"
#include "activation_context_stack64_t.hpp"

#include "magic/teb64_t.start.hpp"
namespace nt
{
    // [struct _TEB64]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct teb64_t                                                                          
    {                                                                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                  
        _m000 struct os::tib64_t                      nt_tib;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .NtTib
        _m001 uint64_t                                environment_pointer;                    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .EnvironmentPointer
        _m002 struct nt::client_id64_t                client_id;                              //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .ClientId
        _m003 uint64_t                                active_rpc_handle;                      //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ActiveRpcHandle
        _m004 uint64_t                                thread_local_storage_pointer;           //{ +0x0058    +0x0058    +0x0058    +0x0058    } | .ThreadLocalStoragePointer
        _m005 uint64_t                                process_environment_block;              //{ +0x0060    +0x0060    +0x0060    +0x0060    } | .ProcessEnvironmentBlock
        _m006 uint32_t                                last_error_value;                       //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .LastErrorValue
        _m007 uint32_t                                count_of_owned_critical_sections;       //{ +0x006c    +0x006c    +0x006c    +0x006c    } | .CountOfOwnedCriticalSections
        _m008 uint64_t                                csr_client_thread;                      //{ +0x0070    +0x0070    +0x0070    +0x0070    } | .CsrClientThread
        _m009 uint64_t                                win32_thread_info;                      //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .Win32ThreadInfo
        _m010 sdk::array<uint32_t, 26>                user32_reserved;                        //{ +0x0080    +0x0080    +0x0080    +0x0080    } | .User32Reserved
        _m011 sdk::array<uint32_t, 5>                 user_reserved;                          //{ +0x00e8    +0x00e8    +0x00e8    +0x00e8    } | .UserReserved
        _m012 uint64_t                                wow32_reserved;                         //{ +0x0100    +0x0100    +0x0100    +0x0100    } | .WOW32Reserved
        _m013 uint32_t                                current_locale;                         //{ +0x0108    +0x0108    +0x0108    +0x0108    } | .CurrentLocale
        _m014 uint32_t                                fp_software_status_register;            //{ +0x010c    +0x010c    +0x010c    +0x010c    } | .FpSoftwareStatusRegister
        _m015 sdk::array<uint64_t, 16>                reserved_for_debugger_instrumentation;  //{ +0x0110    +0x0110    +0x0110    +0x0110    } | .ReservedForDebuggerInstrumentation
        _m016 sdk::array<uint64_t, 37>                system_reserved1;                       //{ +0x0190    +0x0190    +0x0190    +0x0190    } | .SystemReserved1
        _m017 sdk::array<uint8_t, 8>                  working_on_behalf_ticket;               //{ +0x02b8    +0x02b8    +0x02b8    +0x02b8    } | .WorkingOnBehalfTicket
        _m018 int32_t                                 exception_code;                         //{ +0x02c0    +0x02c0    +0x02c0    +0x02c0    } | .ExceptionCode
        _m019 uint64_t                                activation_context_stack_pointer;       //{ +0x02c8    +0x02c8    +0x02c8    +0x02c8    } | .ActivationContextStackPointer
        _m020 uint64_t                                instrumentation_callback_sp;            //{ +0x02d0    +0x02d0    +0x02d0    +0x02d0    } | .InstrumentationCallbackSp
        _m021 uint64_t                                instrumentation_callback_previous_pc;   //{ +0x02d8    +0x02d8    +0x02d8    +0x02d8    } | .InstrumentationCallbackPreviousPc
        _m022 uint64_t                                instrumentation_callback_previous_sp;   //{ +0x02e0    +0x02e0    +0x02e0    +0x02e0    } | .InstrumentationCallbackPreviousSp
        _m023 uint32_t                                tx_fs_context;                          //{ +0x02e8    +0x02e8    +0x02e8    +0x02e8    } | .TxFsContext
        _m024 uint8_t                                 instrumentation_callback_disabled;      //{ +0x02ec    +0x02ec    +0x02ec    +0x02ec    } | .InstrumentationCallbackDisabled
        _m025 struct nt::gdi_teb_batch64_t            gdi_teb_batch;                          //{ +0x02f0    +0x02f0    +0x02f0    +0x02f0    } | .GdiTebBatch
        _m026 struct nt::client_id64_t                real_client_id;                         //{ +0x07d8    +0x07d8    +0x07d8    +0x07d8    } | .RealClientId
        _m027 uint64_t                                gdi_cached_process_handle;              //{ +0x07e8    +0x07e8    +0x07e8    +0x07e8    } | .GdiCachedProcessHandle
        _m028 uint32_t                                gdi_client_pid;                         //{ +0x07f0    +0x07f0    +0x07f0    +0x07f0    } | .GdiClientPID
        _m029 uint32_t                                gdi_client_tid;                         //{ +0x07f4    +0x07f4    +0x07f4    +0x07f4    } | .GdiClientTID
        _m030 uint64_t                                gdi_thread_local_info;                  //{ +0x07f8    +0x07f8    +0x07f8    +0x07f8    } | .GdiThreadLocalInfo
        _m031 sdk::array<uint64_t, 62>                win32_client_info;                      //{ +0x0800    +0x0800    +0x0800    +0x0800    } | .Win32ClientInfo
        _m032 sdk::array<uint64_t, 233>               gl_dispatch_table;                      //{ +0x09f0    +0x09f0    +0x09f0    +0x09f0    } | .glDispatchTable
        _m033 sdk::array<uint64_t, 29>                gl_reserved1;                           //{ +0x1138    +0x1138    +0x1138    +0x1138    } | .glReserved1
        _m034 uint64_t                                gl_reserved2;                           //{ +0x1220    +0x1220    +0x1220    +0x1220    } | .glReserved2
        _m035 uint64_t                                gl_section_info;                        //{ +0x1228    +0x1228    +0x1228    +0x1228    } | .glSectionInfo
        _m036 uint64_t                                gl_section;                             //{ +0x1230    +0x1230    +0x1230    +0x1230    } | .glSection
        _m037 uint64_t                                gl_table;                               //{ +0x1238    +0x1238    +0x1238    +0x1238    } | .glTable
        _m038 uint64_t                                gl_current_rc;                          //{ +0x1240    +0x1240    +0x1240    +0x1240    } | .glCurrentRC
        _m039 uint64_t                                gl_context;                             //{ +0x1248    +0x1248    +0x1248    +0x1248    } | .glContext
        _m040 uint32_t                                last_status_value;                      //{ +0x1250    +0x1250    +0x1250    +0x1250    } | .LastStatusValue
        _m041 nt::ascii_view                          static_unicode_string;                  //{ +0x1258    +0x1258    +0x1258    +0x1258    } | .StaticUnicodeString
        _m042 sdk::array<wchar_t, 261>                static_unicode_buffer;                  //{ +0x1268    +0x1268    +0x1268    +0x1268    } | .StaticUnicodeBuffer
        _m043 uint64_t                                deallocation_stack;                     //{ +0x1478    +0x1478    +0x1478    +0x1478    } | .DeallocationStack
        _m044 sdk::array<uint64_t, 64>                tls_slots;                              //{ +0x1480    +0x1480    +0x1480    +0x1480    } | .TlsSlots
        _m045 struct nt::list_entry64_t               tls_links;                              //{ +0x1680    +0x1680    +0x1680    +0x1680    } | .TlsLinks
        _m046 uint64_t                                vdm;                                    //{ +0x1690    +0x1690    +0x1690    +0x1690    } | .Vdm
        _m047 uint64_t                                reserved_for_nt_rpc;                    //{ +0x1698    +0x1698    +0x1698    +0x1698    } | .ReservedForNtRpc
        _m048 sdk::array<uint64_t, 2>                 dbg_ss_reserved;                        //{ +0x16a0    +0x16a0    +0x16a0    +0x16a0    } | .DbgSsReserved
        _m049 uint32_t                                hard_error_mode;                        //{ +0x16b0    +0x16b0    +0x16b0    +0x16b0    } | .HardErrorMode
        _m050 sdk::array<uint64_t, 11>                instrumentation;                        //{ +0x16b8    +0x16b8    +0x16b8    +0x16b8    } | .Instrumentation
        _m051 struct nt::guid_t                       activity_id;                            //{ +0x1710    +0x1710    +0x1710    +0x1710    } | .ActivityId
        _m052 uint64_t                                sub_process_tag;                        //{ +0x1720    +0x1720    +0x1720    +0x1720    } | .SubProcessTag
        _m053 uint64_t                                perflib_data;                           //{ +0x1728    +0x1728    +0x1728    +0x1728    } | .PerflibData
        _m054 uint64_t                                etw_trace_data;                         //{ +0x1730    +0x1730    +0x1730    +0x1730    } | .EtwTraceData
        _m055 uint64_t                                win_sock_data;                          //{ +0x1738    +0x1738    +0x1738    +0x1738    } | .WinSockData
        _m056 uint32_t                                gdi_batch_count;                        //{ +0x1740    +0x1740    +0x1740    +0x1740    } | .GdiBatchCount
        _m057 struct nt::processor_number_t           current_ideal_processor;                //{ +0x1744    +0x1744    +0x1744    +0x1744    } | .CurrentIdealProcessor
        _m058 uint32_t                                ideal_processor_value;                  //{ +0x1744    +0x1744    +0x1744    +0x1744    } | .IdealProcessorValue
        _m059 uint8_t                                 ideal_processor;                        //{ +0x1747    +0x1747    +0x1747    +0x1747    } | .IdealProcessor
        _m060 uint32_t                                guaranteed_stack_bytes;                 //{ +0x1748    +0x1748    +0x1748    +0x1748    } | .GuaranteedStackBytes
        _m061 uint64_t                                reserved_for_perf;                      //{ +0x1750    +0x1750    +0x1750    +0x1750    } | .ReservedForPerf
        _m062 uint64_t                                reserved_for_ole;                       //{ +0x1758    +0x1758    +0x1758    +0x1758    } | .ReservedForOle
        _m063 uint32_t                                waiting_on_loader_lock;                 //{ +0x1760    +0x1760    +0x1760    +0x1760    } | .WaitingOnLoaderLock
        _m064 uint64_t                                saved_priority_state;                   //{ +0x1768    +0x1768    +0x1768    +0x1768    } | .SavedPriorityState
        _m065 uint64_t                                reserved_for_code_coverage;             //{ +0x1770    +0x1770    +0x1770    +0x1770    } | .ReservedForCodeCoverage
        _m066 uint64_t                                thread_pool_data;                       //{ +0x1778    +0x1778    +0x1778    +0x1778    } | .ThreadPoolData
        _m067 uint64_t                                tls_expansion_slots;                    //{ +0x1780    +0x1780    +0x1780    +0x1780    } | .TlsExpansionSlots
        _m068 uint32_t                                mui_generation;                         //{ +0x1798    +0x1798    +0x1798    +0x1798    } | .MuiGeneration
        _m069 uint32_t                                is_impersonating;                       //{ +0x179c    +0x179c    +0x179c    +0x179c    } | .IsImpersonating
        _m070 uint64_t                                nls_cache;                              //{ +0x17a0    +0x17a0    +0x17a0    +0x17a0    } | .NlsCache
        _m071 uint64_t                                p_shim_data;                            //{ +0x17a8    +0x17a8    +0x17a8    +0x17a8    } | .pShimData
        _m072 uint64_t                                current_transaction_handle;             //{ +0x17b8    +0x17b8    +0x17b8    +0x17b8    } | .CurrentTransactionHandle
        _m073 uint64_t                                active_frame;                           //{ +0x17c0    +0x17c0    +0x17c0    +0x17c0    } | .ActiveFrame
        _m074 uint64_t                                fls_data;                               //{ +0x17c8    +0x17c8    +0x17c8    +0x17c8    } | .FlsData
        _m075 uint64_t                                preferred_languages;                    //{ +0x17d0    +0x17d0    +0x17d0    +0x17d0    } | .PreferredLanguages
        _m076 uint64_t                                user_pref_languages;                    //{ +0x17d8    +0x17d8    +0x17d8    +0x17d8    } | .UserPrefLanguages
        _m077 uint64_t                                merged_pref_languages;                  //{ +0x17e0    +0x17e0    +0x17e0    +0x17e0    } | .MergedPrefLanguages
        _m078 uint32_t                                mui_impersonation;                      //{ +0x17e8    +0x17e8    +0x17e8    +0x17e8    } | .MuiImpersonation
        _m079 volatile uint16_t                       cross_teb_flags;                        //{ +0x17ec    +0x17ec    +0x17ec    +0x17ec    } | .CrossTebFlags
        _m080 volatile uint16_t                       spare_cross_teb_bits;                   //{ +0x17ec@0  +0x17ec@0  +0x17ec@0  +0x17ec@0  } | .SpareCrossTebBits
        _m081 uint16_t                                same_teb_flags;                         //{ +0x17ee    +0x17ee    +0x17ee    +0x17ee    } | .SameTebFlags
        _m082 uint1_t                                 safe_thunk_call;                        //{ +0x17ee@0  +0x17ee@0  +0x17ee@0  +0x17ee@0  } | .SafeThunkCall
        _m083 uint1_t                                 in_debug_print;                         //{ +0x17ee@1  +0x17ee@1  +0x17ee@1  +0x17ee@1  } | .InDebugPrint
        _m084 uint1_t                                 has_fiber_data;                         //{ +0x17ee@2  +0x17ee@2  +0x17ee@2  +0x17ee@2  } | .HasFiberData
        _m085 uint1_t                                 skip_thread_attach;                     //{ +0x17ee@3  +0x17ee@3  +0x17ee@3  +0x17ee@3  } | .SkipThreadAttach
        _m086 uint1_t                                 wer_in_ship_assert_code;                //{ +0x17ee@4  +0x17ee@4  +0x17ee@4  +0x17ee@4  } | .WerInShipAssertCode
        _m087 uint1_t                                 ran_process_init;                       //{ +0x17ee@5  +0x17ee@5  +0x17ee@5  +0x17ee@5  } | .RanProcessInit
        _m088 uint1_t                                 cloned_thread;                          //{ +0x17ee@6  +0x17ee@6  +0x17ee@6  +0x17ee@6  } | .ClonedThread
        _m089 uint1_t                                 suppress_debug_msg;                     //{ +0x17ee@7  +0x17ee@7  +0x17ee@7  +0x17ee@7  } | .SuppressDebugMsg
        _m090 uint1_t                                 disable_user_stack_walk;                //{ +0x17ee@8  +0x17ee@8  +0x17ee@8  +0x17ee@8  } | .DisableUserStackWalk
        _m091 uint1_t                                 rtl_exception_attached;                 //{ +0x17ee@9  +0x17ee@9  +0x17ee@9  +0x17ee@9  } | .RtlExceptionAttached
        _m092 uint1_t                                 initial_thread;                         //{ +0x17ee@10 +0x17ee@10 +0x17ee@10 +0x17ee@10 } | .InitialThread
        _m093 uint1_t                                 session_aware;                          //{ +0x17ee@11 +0x17ee@11 +0x17ee@11 +0x17ee@11 } | .SessionAware
        _m094 uint1_t                                 load_owner;                             //{ +0x17ee@12 +0x17ee@12 +0x17ee@12 +0x17ee@12 } | .LoadOwner
        _m095 uint1_t                                 loader_worker;                          //{ +0x17ee@13 +0x17ee@13 +0x17ee@13 +0x17ee@13 } | .LoaderWorker
        _m096 uint64_t                                txn_scope_enter_callback;               //{ +0x17f0    +0x17f0    +0x17f0    +0x17f0    } | .TxnScopeEnterCallback
        _m097 uint64_t                                txn_scope_exit_callback;                //{ +0x17f8    +0x17f8    +0x17f8    +0x17f8    } | .TxnScopeExitCallback
        _m098 uint64_t                                txn_scope_context;                      //{ +0x1800    +0x1800    +0x1800    +0x1800    } | .TxnScopeContext
        _m099 uint32_t                                lock_count;                             //{ +0x1808    +0x1808    +0x1808    +0x1808    } | .LockCount
        _m100 int32_t                                 wow_teb_offset;                         //{ +0x180c    +0x180c    +0x180c    +0x180c    } | .WowTebOffset
        _m101 uint64_t                                resource_ret_value;                     //{ +0x1810    +0x1810    +0x1810    +0x1810    } | .ResourceRetValue
        _m102 uint64_t                                reserved_for_wdf;                       //{ +0x1818    +0x1818    +0x1818    +0x1818    } | .ReservedForWdf
        _m103 uint64_t                                reserved_for_crt;                       //{ +0x1820    +0x1820    +0x1820    +0x1820    } | .ReservedForCrt
        _m104 struct nt::guid_t                       effective_container_id;                 //{ +0x1828    +0x1828    +0x1828    +0x1828    } | .EffectiveContainerId
                                                                                            
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                      
        //                                                                                  
        _m105 char                                    placeholder_compatibility_mode;         //{ +0x0280    +0x0280    +0x0280    } | .PlaceholderCompatibilityMode
        _m106 uint8_t                                 placeholder_hydration_always_explicit;  //{ +0x0281    +0x0281    +0x0281    } | .PlaceholderHydrationAlwaysExplicit
        _m107 uint32_t                                proxied_process_id;                     //{ +0x028c    +0x028c    +0x028c    } | .ProxiedProcessId
        _m108 struct nt::activation_context_stack64_t activation_stack;                       //{ +0x0290    +0x0290    +0x0290    } | ._ActivationStack
        _m109 uint8_t                                 unaligned_load_store_exceptions;        //{ +0x02ed    +0x02ed    +0x02ed    } | .UnalignedLoadStoreExceptions
        _m110 uint32_t                                heap_data;                              //{ +0x17b0    +0x17b0    +0x17b0    } | .HeapData
        _m111 uint1_t                                 skip_loader_init;                       //{ +0x17ee@14 +0x17ee@14 +0x17ee@14 } | .SkipLoaderInit
                                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                      
        //                                                                                  
        _m112 uint64_t                                deallocation_b_store;                   //{ +0x1788    +0x1788    +0x1788    } | .DeallocationBStore
        _m113 uint64_t                                b_store_limit;                          //{ +0x1790    +0x1790    +0x1790    } | .BStoreLimit
                                                                                            
        // Windows 11                                                                       
        //                                                                                  
        _m114 uint64_t                                chpe_v2_cpu_area_info;                  //{ +0x1788    } | .ChpeV2CpuAreaInfo
        _m115 uint1_t                                 skip_file_api_brokering;                //{ +0x17ee@15 } | .SkipFileAPIBrokering
        _m116 uint64_t                                last_sleep_counter;                     //{ +0x1838    } | .LastSleepCounter
        _m117 uint32_t                                spin_call_count;                        //{ +0x1840    } | .SpinCallCount
        _m118 uint64_t                                extended_feature_disable_mask;          //{ +0x1848    } | .ExtendedFeatureDisableMask
                                                                                            
        // Windows 10 v1607                                                                 
        //                                                                                  
        _m119 uint16_t                                heap_virtual_affinity;                  //{ +0x17b0    } | .HeapVirtualAffinity
        _m120 uint16_t                                low_frag_heap_data_slot;                //{ +0x17b2    } | .LowFragHeapDataSlot
                                                                                            
        SDK_MAGIC_PROPERTIES( "_TEB64.$", 0x1838, true, 0x4fa48dca3322e102 );                                      
        SDK_DYNAMIC_SIZE( teb64_t );                                                        
    };                                                                                      
};
#include "magic/teb64_t.end.hpp"
