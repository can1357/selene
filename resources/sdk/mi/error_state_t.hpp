#pragma once
#include <sdkgen/support_library.hpp>
#include "forced_commits_t.hpp"
#include "resavail_failures_t.hpp"
#include "probe_raise_tracker_t.hpp"
#include "../nt/work_queue_item_t.hpp"
#include "bad_memory_event_entry_t.hpp"
#include "page_hash_error_behavior_t.hpp"

#include "magic/error_state_t.start.hpp"
namespace mi
{
    // [struct _MI_ERROR_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct error_state_t                                                                             
    {                                                                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                       
        //                                                                                           
        _m000 struct mi::bad_memory_event_entry_t             bad_memory_event_entry;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .BadMemoryEventEntry
        _m001 struct mi::probe_raise_tracker_t                probe_raises;                            //{ +0x0038    +0x0040    +0x0038    +0x0040    } | .ProbeRaises
        _m002 struct mi::forced_commits_t                     forced_commits;                          //{ +0x0078    +0x0084    +0x0078    +0x0084    } | .ForcedCommits
        _m003 sdk::variant<sdk::array<uint32_t, 2>, uint32_t> wsle_failures;                           //{ +0x0080    +0x008c    +0x0084    +0x008c    } | .WsleFailures
        _m004 uint32_t                                        check_zero_count;                        //{ +0x0090    +0x0094    +0x00a8    +0x0094    } | .CheckZeroCount
        _m005 volatile int32_t                                zeroed_page_single_bit_errors_detected;  //{ +0x0094    +0x0098    +0x00ac    +0x0098    } | .ZeroedPageSingleBitErrorsDetected
        _m006 volatile int32_t                                bad_pages_detected;                      //{ +0x0098    +0x009c    +0x00b0    +0x009c    } | .BadPagesDetected
        _m007 int32_t                                         scrub_passes;                            //{ +0x009c    +0x00a0    +0x00d8    +0x00a0    } | .ScrubPasses
        _m008 int32_t                                         scrub_bad_pages_found;                   //{ +0x00a0    +0x00a4    +0x00dc    +0x00a4    } | .ScrubBadPagesFound
        _m009 uint32_t                                        user_view_failures;                      //{ +0x00a4    +0x00a8    +0x00e0    +0x00a8    } | .UserViewFailures
        _m010 uint32_t                                        user_view_collision_failures;            //{ +0x00a8    +0x00ac    +0x00e4    +0x00ac    } | .UserViewCollisionFailures
        _m011 struct mi::resavail_failures_t                  resavail_failures;                       //{ +0x00ac    +0x00b8    +0x00f0    +0x00b8    } | .ResavailFailures
        _m012 uint8_t                                         pending_bad_pages;                       //{ +0x00b4    +0x00c0    +0x0088    +0x00c0    } | .PendingBadPages
        _m013 uint8_t                                         init_failure;                            //{ +0x00b5    +0x00c2    +0x008a    +0x00c2    } | .InitFailure
                                                                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                                       
        //                                                                                           
        _m014 uint32_t                                        page_hash_errors;                        //{ +0x008c    +0x0090    +0x0090    } | .PageHashErrors
        _m015 uint8_t                                         stop_bad_maps;                           //{ +0x00b6    +0x00c3    +0x00c3    } | .StopBadMaps
                                                                                                     
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                            
        //                                                                                           
        _m016 uint32_t                                        user_allocate_failures;                  //{ +0x00b0    +0x00e8    +0x00b0    } | .UserAllocateFailures
        _m017 uint32_t                                        user_allocate_collision_failures;        //{ +0x00b4    +0x00ec    +0x00b4    } | .UserAllocateCollisionFailures
        _m018 uint8_t                                         fatal_graphics_failures;                 //{ +0x00c1    +0x0089    +0x00c1    } | .FatalGraphicsFailures
                                                                                                     
        // Windows 10 v2004, Windows 10 v20H2                                                        
        //                                                                                           
        _m019 uint64_t                                        page_of_interest;                        //{ +0x0038    +0x0038    } | .PageOfInterest
                                                                                                     
        // Windows 11                                                                                
        //                                                                                           
        _m020 uint32_t                                        pre_phase0_bug_check_parameter;          //{ +0x0080    } | .PrePhase0BugCheckParameter
        _m021 uint8_t                                         bad_pages_insert_signal_state;           //{ +0x008b    } | .BadPagesInsertSignalState
        _m022 enum mi::page_hash_error_behavior_t             page_hash_error_behavior;                //{ +0x008c    } | .PageHashErrorBehavior
        _m023 uint32_t                                        page_hash_read_errors;                   //{ +0x0090    } | .PageHashReadErrors
        _m024 uint32_t                                        page_hash_standby_errors;                //{ +0x0094    } | .PageHashStandbyErrors
        _m025 uint32_t                                        page_hash_transfer_errors;               //{ +0x0098    } | .PageHashTransferErrors
        _m026 uint32_t                                        page_hash_allocation_errors;             //{ +0x009c    } | .PageHashAllocationErrors
        _m027 uint64_t                                        failed_hash_page_frame_index;            //{ +0x00a0    } | .FailedHashPageFrameIndex
        _m028 uint32_t                                        bad_pages_inserted;                      //{ +0x00b4    } | .BadPagesInserted
        _m029 struct nt::work_queue_item_t                    bad_page_insert_work_item;               //{ +0x00b8    } | .BadPageInsertWorkItem
        _m030 volatile int32_t                                bad_physical_maps_early;                 //{ +0x00f8    } | .BadPhysicalMapsEarly
        _m031 volatile int32_t                                bad_physical_maps;                       //{ +0x00fc    } | .BadPhysicalMaps
                                                                                                     
        // Windows 10 v1607                                                                          
        //                                                                                           
        _m032 uint32_t                                        ws_linear;                               //{ +0x0088    } | .WsLinear
                                                                                                     
        SDK_MAGIC_PROPERTIES( "_MI_ERROR_STATE.$", 0xc8, true, 0x81be734aa743ac7b );                                       
        SDK_DYNAMIC_SIZE( error_state_t );                                                           
    };                                                                                               
};
#include "magic/error_state_t.end.hpp"
