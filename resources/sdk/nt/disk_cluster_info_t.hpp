#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/disk_cluster_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_CLUSTER_INFO]
    // => WDK 10 (NV)
    //
    struct disk_cluster_info_t   
    {                            
        // WDK 10                
        //                       
        _m00 uint32_t version;     //{ +0x0000    } | .Version
        _m01 uint64_t flags;       //{ +0x0008    } | .Flags
        _m02 uint64_t flags_mask;  //{ +0x0010    } | .FlagsMask
        _m03 uint8_t  notify;      //{ +0x0018    } | .Notify
                                 
        SDK_NONVOL_PROPERTIES( "_DISK_CLUSTER_INFO.$", 0x0, false, 0xe5615d59fc38bac6 );           
        SDK_FIXED_SIZE( disk_cluster_info_t, 0x20 );           
    };                           
};
#include "magic/disk_cluster_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_cluster_info_t, 0x20 );
