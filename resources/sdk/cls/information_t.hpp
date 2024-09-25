#pragma once
#include <sdkgen/support_library.hpp>
#include "lsn_t.hpp"
#include "../nt/guid_t.hpp"

#include "magic/information_t.start.hpp"
namespace cls
{
    // [struct _CLS_INFORMATION]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct information_t                            
    {                                               
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                     
        //                                          
        _m00 int64_t           total_available;       //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .TotalAvailable
        _m01 int64_t           current_available;     //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .CurrentAvailable
        _m02 int64_t           total_reservation;     //{ +0x0010    +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalReservation
        _m03 uint64_t          base_file_size;        //{ +0x0018    +0x0018    +0x0018    +0x0018    +0x0018    } | .BaseFileSize
        _m04 uint64_t          container_size;        //{ +0x0020    +0x0020    +0x0020    +0x0020    +0x0020    } | .ContainerSize
        _m05 uint32_t          total_containers;      //{ +0x0028    +0x0028    +0x0028    +0x0028    +0x0028    } | .TotalContainers
        _m06 uint32_t          free_containers;       //{ +0x002c    +0x002c    +0x002c    +0x002c    +0x002c    } | .FreeContainers
        _m07 uint32_t          total_clients;         //{ +0x0030    +0x0030    +0x0030    +0x0030    +0x0030    } | .TotalClients
        _m08 uint32_t          attributes;            //{ +0x0034    +0x0034    +0x0034    +0x0034    +0x0034    } | .Attributes
        _m09 uint32_t          flush_threshold;       //{ +0x0038    +0x0038    +0x0038    +0x0038    +0x0038    } | .FlushThreshold
        _m10 uint32_t          sector_size;           //{ +0x003c    +0x003c    +0x003c    +0x003c    +0x003c    } | .SectorSize
        _m11 union cls::lsn_t  min_archive_tail_lsn;  //{ +0x0040    +0x0040    +0x0040    +0x0040    +0x0040    } | .MinArchiveTailLsn
        _m12 union cls::lsn_t  base_lsn;              //{ +0x0048    +0x0048    +0x0048    +0x0048    +0x0048    } | .BaseLsn
        _m13 union cls::lsn_t  last_flushed_lsn;      //{ +0x0050    +0x0050    +0x0050    +0x0050    +0x0050    } | .LastFlushedLsn
        _m14 union cls::lsn_t  last_lsn;              //{ +0x0058    +0x0058    +0x0058    +0x0058    +0x0058    } | .LastLsn
        _m15 union cls::lsn_t  restart_lsn;           //{ +0x0060    +0x0060    +0x0060    +0x0060    +0x0060    } | .RestartLsn
        _m16 struct nt::guid_t identity;              //{ +0x0068    +0x0068    +0x0068    +0x0068    +0x0068    } | .Identity
                                                    
        SDK_NONVOL_PROPERTIES( "_CLS_INFORMATION.$", 0x78, true, 0x66b576ad7f7bb9 );                     
        SDK_FIXED_SIZE( information_t, 0x78 );                     
    };                                              
};
#include "magic/information_t.end.hpp"
SDK_VERIFY( struct cls::information_t, 0x78 );
