#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"
#include "processor_info_t.hpp"
#include "processor_vendor_t.hpp"

#include "magic/system_processor_info_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_SYSTEM_PROCESSOR_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct system_processor_info_t                                                           
    {                                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                  
        //                                                                                   
        _m00 struct ndis::object_header_t                  header;                             //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 uint32_t                                      flags;                              //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .Flags
        _m02 enum ndis::processor_vendor_t                 processor_vendor;                   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .ProcessorVendor
        _m03 uint32_t                                      num_physical_packages;              //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .NumPhysicalPackages
        _m04 uint32_t                                      num_cores;                          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NumCores
        _m05 uint32_t                                      num_cores_per_physical_package;     //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .NumCoresPerPhysicalPackage
        _m06 uint32_t                                      max_hyper_threading_cpus_per_core;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .MaxHyperThreadingCpusPerCore
        _m07 uint32_t                                      rss_base_cpu;                       //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RssBaseCpu
        _m08 uint32_t                                      rss_cpu_count;                      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RssCpuCount
        _m09 uint8_t*                                      rss_processors;                     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .RssProcessors
        _m10 sdk::array<struct ndis::processor_info_t, 64> cpu_info;                           //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .CpuInfo
                                                                                             
        SDK_MAGIC_PROPERTIES( "_NDIS_SYSTEM_PROCESSOR_INFO.$", 0x430, true, 0x9a4b6a28a7e937da );                                  
        SDK_FIXED_SIZE( system_processor_info_t, 0x430 );                                    
    };                                                                                       
};
#include "magic/system_processor_info_t.end.hpp"
SDK_VERIFY( struct ndis::system_processor_info_t, 0x430 );
