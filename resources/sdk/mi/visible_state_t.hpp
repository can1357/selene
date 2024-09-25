#pragma once
#include <sdkgen/support_library.hpp>
#include "special_pool_t.hpp"
#include "system_pte_type_t.hpp"
#include "../nt/mmwsl_shared_t.hpp"
#include "../nt/mmsupport_full_t.hpp"
#include "../nt/sysptes_header_t.hpp"
#include "system_va_assignment_t.hpp"
#include "../mm/paged_pool_info_t.hpp"
#include "../nt/mmsupport_shared_t.hpp"
#include "../nt/mmsupport_aggregation_t.hpp"

namespace rtl { struct bitmap_t; }

#include "magic/visible_state_t.start.hpp"
namespace mi
{
    // [struct _MI_VISIBLE_STATE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct visible_state_t                                                                    
    {                                                                                         
        using aggregate_system_ws_t = sdk::array<struct nt::mmsupport_aggregation_t, 1>;                                     
        using system_va_regions_t =   sdk::array<struct mi::system_va_assignment_t, 14>;                                     
                                                                                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m000 nt::list_entry_t                           session_ws_list;                       //{ +0x0050    +0x0000    +0x0000    +0x0000    } | .SessionWsList
        _m001 struct rtl::bitmap_t*                      session_id_bitmap;                     //{ +0x0060    +0x0010    +0x0010    +0x0010    } | .SessionIdBitmap
        _m002 struct mm::paged_pool_info_t               paged_pool_info;                       //{ +0x0068    +0x0018    +0x0018    +0x0018    } | .PagedPoolInfo
        _m003 uint64_t                                   maximum_non_paged_pool_in_pages;       //{ +0x00a0    +0x0030    +0x0030    +0x0030    } | .MaximumNonPagedPoolInPages
        _m004 uint64_t                                   size_of_paged_pool_in_pages;           //{ +0x00a8    +0x0038    +0x0038    +0x0038    } | .SizeOfPagedPoolInPages
        _m005 struct mi::system_pte_type_t               system_pte_info;                       //{ +0x00b0    +0x0040    +0x0040    +0x0040    } | .SystemPteInfo
        _m006 volatile uint64_t                          non_paged_pool_commit;                 //{ +0x0118    +0x00a0    +0x0098    +0x00a0    } | .NonPagedPoolCommit
        _m007 volatile uint64_t                          boot_commit;                           //{ +0x0120    +0x00b0    +0x00a8    +0x00b0    } | .BootCommit
        _m008 volatile uint64_t                          mdl_pages_allocated;                   //{ +0x0128    +0x00b8    +0x00b0    +0x00b8    } | .MdlPagesAllocated
        _m009 volatile uint64_t                          system_page_table_commit;              //{ +0x0130    +0x00c0    +0x00c0    +0x00c0    } | .SystemPageTableCommit
        _m010 volatile uint64_t                          process_commit;                        //{ +0x0150    +0x00c8    +0x00c8    +0x00c8    } | .ProcessCommit
        _m011 volatile int32_t                           driver_commit;                         //{ +0x0160    +0x00d0    +0x00d0    +0x00d0    } | .DriverCommit
        _m012 sdk::array<struct nt::mmsupport_full_t, 3> system_ws;                             //{ +0x0180    +0x0100    +0x0100    +0x0100    } | .SystemWs
        _m013 struct nt::mmsupport_shared_t              system_cache_shared;                   //{ +0x04c0    +0x0880    +0x0880    +0x0880    } | .SystemCacheShared
        _m014 aggregate_system_ws_t                      aggregate_system_ws;                   //{ +0x0540    +0x0900    +0x0900    +0x0900    } | .AggregateSystemWs
        _m015 uint32_t                                   map_cache_failures;                    //{ +0x05c0    +0x0920    +0x0920    +0x0920    } | .MapCacheFailures
        _m016 uint64_t                                   pagefile_hash_pages;                   //{ +0x05c8    +0x0928    +0x0928    +0x0928    } | .PagefileHashPages
        _m017 struct nt::sysptes_header_t                pte_header;                            //{ +0x05d0    +0x0930    +0x0930    +0x0930    } | .PteHeader
        _m018 sdk::array<uint64_t, 14>                   system_va_type_count;                  //{ +0x06f0    +0x0a48    +0x0a48    +0x0a48    } | .SystemVaTypeCount
        _m019 system_va_regions_t                        system_va_regions;                     //{ +0x0760    +0x0bc8    +0x0bd8    +0x0bc8    } | .SystemVaRegions
                                                                                              
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                                                    
        _m020 volatile uint64_t                          small_non_paged_ptes_commit;           //{ +0x00a8    +0x00a0    +0x00a8    } | .SmallNonPagedPtesCommit
        _m021 uint8_t                                    paging_levels;                         //{ +0x00d4    +0x00d4    +0x00d4    } | .PagingLevels
        _m022 volatile uint64_t                          pfn_database_commit;                   //{ +0x00d8    +0x00d8    +0x00d8    } | .PfnDatabaseCommit
        _m023 sdk::array<uint8_t, 256>                   system_va_type;                        //{ +0x0ac8    +0x0ad8    +0x0ac8    } | .SystemVaType
                                                                                              
        // Windows 10 v1607                                                                   
        //                                                                                    
        _m024 struct mi::special_pool_t                  special_pool;                          //{ +0x0000    } | .SpecialPool
        _m025 volatile uint64_t                          special_pages_in_use;                  //{ +0x0138    } | .SpecialPagesInUse
        _m026 volatile uint64_t                          ws_overhead_pages;                     //{ +0x0140    } | .WsOverheadPages
        _m027 volatile uint64_t                          vad_bitmap_pages;                      //{ +0x0148    } | .VadBitmapPages
        _m028 volatile uint64_t                          shared_commit;                         //{ +0x0158    } | .SharedCommit
        _m029 struct nt::mmwsl_shared_t                  system_cache_shared_working_set_list;  //{ +0x0560    } | .SystemCacheSharedWorkingSetList
        _m030 struct mi::special_pool_t*                 session_special_pool;                  //{ +0x06e8    } | .SessionSpecialPool
                                                                                              
        // Windows 11                                                                         
        //                                                                                    
        _m031 volatile uint64_t                          contiguous_pages_allocated;            //{ +0x00b8    } | .ContiguousPagesAllocated
                                                                                              
        SDK_MAGIC_PROPERTIES( "_MI_VISIBLE_STATE.$", 0xcc0, true, 0xe246968e476862e7 );                                     
        SDK_DYNAMIC_SIZE( visible_state_t );                                                  
    };                                                                                        
};
#include "magic/visible_state_t.end.hpp"
