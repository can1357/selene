#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/txfs_query_rm_information_t.start.hpp"
namespace win
{
    // [struct _TXFS_QUERY_RM_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct txfs_query_rm_information_t                    
    {                                                     
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                           
        //                                                
        _m00 uint32_t          bytes_required;              //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .BytesRequired
        _m01 uint64_t          tail_lsn;                    //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .TailLsn
        _m02 uint64_t          current_lsn;                 //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .CurrentLsn
        _m03 uint64_t          archive_tail_lsn;            //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .ArchiveTailLsn
        _m04 uint64_t          log_container_size;          //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .LogContainerSize
        _m05 int64_t           highest_virtual_clock;       //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .HighestVirtualClock
        _m06 uint32_t          log_container_count;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .LogContainerCount
        _m07 uint32_t          log_container_count_max;     //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .LogContainerCountMax
        _m08 uint32_t          log_container_count_min;     //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .LogContainerCountMin
        _m09 uint32_t          log_growth_increment;        //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .LogGrowthIncrement
        _m10 uint32_t          log_auto_shrink_percentage;  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .LogAutoShrinkPercentage
        _m11 uint32_t          flags;                       //{ +0x0044    +0x0044    +0x0044    +0x0044    +0x0044    } | .Flags
        _m12 uint16_t          logging_mode;                //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .LoggingMode
        _m13 uint32_t          rm_state;                    //{ +0x004c    +0x004c    +0x004c    +0x004c    +0x004c    } | .RmState
        _m14 uint64_t          log_capacity;                //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .LogCapacity
        _m15 uint64_t          log_free;                    //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .LogFree
        _m16 uint64_t          tops_size;                   //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .TopsSize
        _m17 uint64_t          tops_used;                   //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .TopsUsed
        _m18 uint64_t          transaction_count;           //{ +0x0070    +0x0070    +0x0070    +0x0070    +0x0070    } | .TransactionCount
        _m19 uint64_t          one_pc_count;                //{ +0x0078    +0x0078    +0x0078    +0x0078    +0x0078    } | .OnePCCount
        _m20 uint64_t          two_pc_count;                //{ +0x0080    +0x0080    +0x0080    +0x0080    +0x0080    } | .TwoPCCount
        _m21 uint64_t          number_log_file_full;        //{ +0x0088    +0x0088    +0x0088    +0x0088    +0x0088    } | .NumberLogFileFull
        _m22 uint64_t          oldest_transaction_age;      //{ +0x0090    +0x0090    +0x0090    +0x0090    +0x0090    } | .OldestTransactionAge
        _m23 struct nt::guid_t rm_name;                     //{ +0x0098    +0x0098    +0x0098    +0x0098    +0x0098    } | .RMName
        _m24 uint32_t          tm_log_path_offset;          //{ +0x00a8    +0x00a8    +0x00a8    +0x00a8    +0x00a8    } | .TmLogPathOffset
                                                          
        SDK_NONVOL_PROPERTIES( "_TXFS_QUERY_RM_INFORMATION.$", 0xb0, true, 0xd0a38388b2365e55 );                           
        SDK_FIXED_SIZE( txfs_query_rm_information_t, 0xb0 );                           
    };                                                    
};
#include "magic/txfs_query_rm_information_t.end.hpp"
SDK_VERIFY( struct win::txfs_query_rm_information_t, 0xb0 );
