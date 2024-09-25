#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_histogram_t.start.hpp"
namespace nt
{
    struct histogram_bucket_t;

    // [struct _DISK_HISTOGRAM]
    // => WDK 10 (NV)
    //
    struct disk_histogram_t                               
    {                                                     
        // WDK 10                                         
        //                                                
        _m00 int64_t                        disk_size;      //{ +0x0000    } | .DiskSize
        _m01 int64_t                        start;          //{ +0x0008    } | .Start
        _m02 int64_t                        end;            //{ +0x0010    } | .End
        _m03 int64_t                        average;        //{ +0x0018    } | .Average
        _m04 int64_t                        average_read;   //{ +0x0020    } | .AverageRead
        _m05 int64_t                        average_write;  //{ +0x0028    } | .AverageWrite
        _m06 uint32_t                       granularity;    //{ +0x0030    } | .Granularity
        _m07 uint32_t                       size;           //{ +0x0034    } | .Size
        _m08 uint32_t                       read_count;     //{ +0x0038    } | .ReadCount
        _m09 uint32_t                       write_count;    //{ +0x003c    } | .WriteCount
        _m10 struct nt::histogram_bucket_t* histogram;      //{ +0x0040    } | .Histogram
                                                          
        SDK_NONVOL_PROPERTIES( "_DISK_HISTOGRAM.$", 0x0, false, 0xe93d98d297b14ba0 );              
        SDK_FIXED_SIZE( disk_histogram_t, 0x48 );              
    };                                                    
};
#include "magic/disk_histogram_t.end.hpp"
SDK_VERIFY( struct nt::disk_histogram_t, 0x48 );
