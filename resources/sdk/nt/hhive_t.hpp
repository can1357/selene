#pragma once
#include <sdkgen/support_library.hpp>
#include "dual_t.hpp"
#include "hview_map_t.hpp"
#include "cmsi_rw_lock_t.hpp"
#include "../rtl/bitmap_t.hpp"
#include "../hvp/view_map_t.hpp"

namespace cmp { struct offset_array_t;     }
namespace hv  { struct get_cell_context_t; }

#include "magic/hhive_t.start.hpp"
namespace nt
{
    struct hhive_t;
    struct cell_data_t;
    struct hbase_block_t;

    // [struct _HHIVE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hhive_t                                                                
    {                                                                             
        using get_cell_routine_t =     sdk::function<struct nt::cell_data_t*(struct nt::hhive_t*, uint32_t, struct hv::get_cell_context_t*)>*;                              
        using release_cell_routine_t = sdk::function<void(struct nt::hhive_t*, struct hv::get_cell_context_t*)>*;                              
        using allocate_t =             sdk::function<void*(uint32_t, uint8_t, uint32_t)>*;                              
        using file_write_t =           sdk::variant<sdk::function<uint8_t(struct nt::hhive_t*, uint32_t, struct cmp::offset_array_t*, uint32_t, uint32_t*, uint32_t)>*, sdk::function<int32_t(struct nt::hhive_t*, uint32_t, struct cmp::offset_array_t*, uint32_t, uint32_t)>*>;                              
        using file_read_t =            sdk::variant<sdk::function<uint8_t(struct nt::hhive_t*, uint32_t, uint32_t*, void*, uint32_t)>*, sdk::function<int32_t(struct nt::hhive_t*, uint32_t, uint32_t, void*, uint32_t)>*>;                              
        using view_map_t =             sdk::variant<struct nt::hview_map_t, struct hvp::view_map_t>;                              
                                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                        
        _m000 uint32_t                              signature;                      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m001 get_cell_routine_t                    get_cell_routine;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .GetCellRoutine
        _m002 release_cell_routine_t                release_cell_routine;           //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ReleaseCellRoutine
        _m003 allocate_t                            allocate;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Allocate
        _m004 sdk::function<void(void*, uint32_t)>* free;                           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Free
        _m005 file_write_t                          file_write;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .FileWrite
        _m006 file_read_t                           file_read;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .FileRead
        _m007 void*                                 hive_load_failure;              //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .HiveLoadFailure
        _m008 struct nt::hbase_block_t*             base_block;                     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .BaseBlock
        _m009 struct rtl::bitmap_t                  dirty_vector;                   //{ +0x0048    +0x0058    +0x0058    +0x0058    } | .DirtyVector
        _m010 uint32_t                              dirty_count;                    //{ +0x0058    +0x0068    +0x0068    +0x0068    } | .DirtyCount
        _m011 uint32_t                              dirty_alloc;                    //{ +0x005c    +0x006c    +0x006c    +0x006c    } | .DirtyAlloc
        _m012 struct rtl::bitmap_t                  unreconciled_vector;            //{ +0x0060    +0x0070    +0x0070    +0x0070    } | .UnreconciledVector
        _m013 uint32_t                              unreconciled_count;             //{ +0x0070    +0x0080    +0x0080    +0x0080    } | .UnreconciledCount
        _m014 uint32_t                              base_block_alloc;               //{ +0x0074    +0x0084    +0x0084    +0x0084    } | .BaseBlockAlloc
        _m015 uint32_t                              cluster;                        //{ +0x0078    +0x0088    +0x0088    +0x0088    } | .Cluster
        _m016 uint1_t                               flat;                           //{ +0x007c@0  +0x008c@0  +0x008c@0  +0x008c@0  } | .Flat
        _m017 uint1_t                               read_only;                      //{ +0x007c@1  +0x008c@1  +0x008c@1  +0x008c@1  } | .ReadOnly
        _m018 uint8_t                               dirty_flag;                     //{ +0x007d    +0x008d    +0x008d    +0x008d    } | .DirtyFlag
        _m019 uint32_t                              hv_bin_headers_use;             //{ +0x0080    +0x0090    +0x0090    +0x0090    } | .HvBinHeadersUse
        _m020 uint32_t                              hv_free_cells_use;              //{ +0x0084    +0x0094    +0x0094    +0x0094    } | .HvFreeCellsUse
        _m021 uint32_t                              hv_used_cells_use;              //{ +0x0088    +0x0098    +0x0098    +0x0098    } | .HvUsedCellsUse
        _m022 uint32_t                              cm_used_cells_use;              //{ +0x008c    +0x009c    +0x009c    +0x009c    } | .CmUsedCellsUse
        _m023 uint32_t                              hive_flags;                     //{ +0x0090    +0x00a0    +0x00a0    +0x00a0    } | .HiveFlags
        _m024 uint32_t                              current_log;                    //{ +0x0094    +0x00a4    +0x00a8    +0x00a4    } | .CurrentLog
        _m025 uint32_t                              current_log_sequence;           //{ +0x0098    +0x00a8    +0x00ac    +0x00a8    } | .CurrentLogSequence
        _m026 uint32_t                              current_log_minimum_sequence;   //{ +0x009c    +0x00ac    +0x00b0    +0x00ac    } | .CurrentLogMinimumSequence
        _m027 uint32_t                              current_log_offset;             //{ +0x00a0    +0x00b0    +0x00b4    +0x00b0    } | .CurrentLogOffset
        _m028 uint32_t                              minimum_log_sequence;           //{ +0x00a4    +0x00b4    +0x00b8    +0x00b4    } | .MinimumLogSequence
        _m029 uint32_t                              log_file_size_cap;              //{ +0x00a8    +0x00b8    +0x00bc    +0x00b8    } | .LogFileSizeCap
        _m030 sdk::array<uint8_t, 2>                log_data_present;               //{ +0x00ac    +0x00bc    +0x00c0    +0x00bc    } | .LogDataPresent
        _m031 uint8_t                               primary_file_valid;             //{ +0x00ae    +0x00be    +0x00c2    +0x00be    } | .PrimaryFileValid
        _m032 uint8_t                               base_block_dirty;               //{ +0x00af    +0x00bf    +0x00c3    +0x00bf    } | .BaseBlockDirty
        _m033 int64_t                               last_log_swap_time;             //{ +0x00b0    +0x00c0    +0x00c8    +0x00c0    } | .LastLogSwapTime
        _m034 uint3_t                               first_log_file;                 //{ +0x00b8@0  +0x00c8@0  +0x00d0@0  +0x00c8@0  } | .FirstLogFile
        _m035 uint3_t                               second_log_file;                //{ +0x00b8@3  +0x00c8@3  +0x00d0@3  +0x00c8@3  } | .SecondLogFile
        _m036 uint1_t                               header_recovered;               //{ +0x00b8@6  +0x00c8@6  +0x00d0@6  +0x00c8@6  } | .HeaderRecovered
        _m037 uint1_t                               legacy_recovery_indicated;      //{ +0x00b8@7  +0x00c8@7  +0x00d0@7  +0x00c8@7  } | .LegacyRecoveryIndicated
        _m038 uint8_t                               recovery_information_reserved;  //{ +0x00b8@8  +0x00c8@8  +0x00d0@8  +0x00c8@8  } | .RecoveryInformationReserved
        _m039 uint16_t                              recovery_information;           //{ +0x00b8    +0x00c8    +0x00d0    +0x00c8    } | .RecoveryInformation
        _m040 sdk::array<uint8_t, 2>                log_entries_recovered;          //{ +0x00ba    +0x00ca    +0x00d2    +0x00ca    } | .LogEntriesRecovered
        _m041 uint32_t                              refresh_count;                  //{ +0x00bc    +0x00cc    +0x00d4    +0x00cc    } | .RefreshCount
        _m042 uint32_t                              storage_type_count;             //{ +0x00c0    +0x00d0    +0x00d8    +0x00d0    } | .StorageTypeCount
        _m043 uint32_t                              version;                        //{ +0x00c4    +0x00d4    +0x00dc    +0x00d4    } | .Version
        _m044 view_map_t                            view_map;                       //{ +0x00c8    +0x00d8    +0x00e0    +0x00d8    } | .ViewMap
        _m045 sdk::array<struct nt::dual_t, 2>      storage;                        //{ +0x0578    +0x0110    +0x0118    +0x0110    } | .Storage
                                                                                  
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                              
        //                                                                        
        _m046 struct nt::cmsi_rw_lock_t             flusher_lock;                   //{ +0x0048    +0x0048    +0x0048    } | .FlusherLock
        _m047 struct nt::cmsi_rw_lock_t             writer_lock;                    //{ +0x0050    +0x0050    +0x0050    } | .WriterLock
                                                                                  
        // Windows 11                                                             
        //                                                                        
        _m048 uint32_t                              flusher_flags;                  //{ +0x00a4    } | .FlusherFlags
                                                                                  
        // Windows 10 v1607                                                       
        //                                                                        
        _m049 uint1_t                               system_cache_backed;            //{ +0x007c@2  } | .SystemCacheBacked
                                                                                  
        SDK_MAGIC_PROPERTIES( "_HHIVE.$", 0x600, true, 0x5e23f5e6d5147c17 );                              
        SDK_DYNAMIC_SIZE( hhive_t );                                              
    };                                                                            
};
#include "magic/hhive_t.end.hpp"
