#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/perfinfo_cc_lazy_write_scan_t.start.hpp"
namespace win
{
    // [struct _PERFINFO_CC_LAZY_WRITE_SCAN]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct perfinfo_cc_lazy_write_scan_t                   
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                     
        //                                                 
        _m00 uint64_t work_item_key;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .WorkItemKey
        _m01 uint32_t reason_for_flush;                      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ReasonForFlush
        _m02 uint32_t pages_to_write;                        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .PagesToWrite
        _m03 uint64_t total_dirty_pages;                     //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .TotalDirtyPages
        _m04 uint64_t available_pages;                       //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .AvailablePages
        _m05 uint64_t dirty_page_threshold;                  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DirtyPageThreshold
        _m06 uint64_t number_of_mapped_vacbs;                //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .NumberOfMappedVacbs
        _m07 uint64_t top_dirty_page_threshold;              //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .TopDirtyPageThreshold
        _m08 uint64_t bottom_dirty_page_threshold;           //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .BottomDirtyPageThreshold
        _m09 uint64_t average_available_pages;               //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .AverageAvailablePages
        _m10 uint64_t average_dirty_pages;                   //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .AverageDirtyPages
        _m11 uint64_t consecutive_workless_lazywrite_scans;  //{ +0x0050    +0x0050    +0x0050    +0x0050    } | .ConsecutiveWorklessLazywriteScans
                                                           
        SDK_MAGIC_PROPERTIES( "_PERFINFO_CC_LAZY_WRITE_SCAN.$", 0x58, true, 0x785c24c33f126e74 );                                     
        SDK_FIXED_SIZE( perfinfo_cc_lazy_write_scan_t, 0x58 );                                     
    };                                                     
};
#include "magic/perfinfo_cc_lazy_write_scan_t.end.hpp"
SDK_VERIFY( struct win::perfinfo_cc_lazy_write_scan_t, 0x58 );
