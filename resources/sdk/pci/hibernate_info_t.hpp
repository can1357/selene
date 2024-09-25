#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/bitmap_t.hpp"

#include "magic/hibernate_info_t.start.hpp"
namespace pci
{
    // [struct _PCI_HIBERNATE_INFO]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hibernate_info_t                              
    {                                                    
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                               
        _m00 uint64_t                lock;                 //{ +0x0000    +0x0000    +0x0000    } | .Lock
        _m01 struct rtl::bitmap_t    bus_scan_map;         //{ +0x0008    +0x0008    +0x0008    } | .BusScanMap
        _m02 sdk::array<uint32_t, 8> bus_scan_map_buffer;  //{ +0x0018    +0x0018    +0x0018    } | .BusScanMapBuffer
        _m03 uint32_t                bus_scan_count;       //{ +0x0038    +0x0038    +0x0038    } | .BusScanCount
        _m04 uint32_t                total_bus_scanned;    //{ +0x003c    +0x003c    +0x003c    } | .TotalBusScanned
        _m05 uint64_t                start_time;           //{ +0x0040    +0x0040    +0x0040    } | .StartTime
        _m06 uint64_t                end_time;             //{ +0x0048    +0x0048    +0x0048    } | .EndTime
                                                         
        SDK_MAGIC_PROPERTIES( "_PCI_HIBERNATE_INFO.$", 0x50, true, 0x99f6eb356230b75d );                    
        SDK_FIXED_SIZE( hibernate_info_t, 0x50 );                    
    };                                                   
};
#include "magic/hibernate_info_t.end.hpp"
SDK_VERIFY( struct pci::hibernate_info_t, 0x50 );
