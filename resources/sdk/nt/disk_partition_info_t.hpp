#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"
#include "partition_style_t.hpp"

#include "magic/disk_partition_info_t.start.hpp"
namespace nt
{
    // [struct _DISK_PARTITION_INFO]
    // => WDK 10 (NV)
    //
    struct disk_partition_info_t                                  
    {                                                             
        struct u0_mbr_t                                           
        {                                                         
            // WDK 10                                             
            //                                                    
            _m02 uint32_t signature;                                //{ +0x0000    } | .Signature
            _m03 uint32_t check_sum;                                //{ +0x0004    } | .CheckSum
                                                                  
            SDK_NONVOL_PROPERTIES( "_DISK_PARTITION_INFO.Mbr.$", 0x0, false, 0xcb87fcca98f69119 );                                 
            SDK_FIXED_SIZE( u0_mbr_t, 0x8 );                                 
        };                                                        
                                                                  
        struct u1_gpt_t                                           
        {                                                         
            // WDK 10                                             
            //                                                    
            _m05 struct nt::guid_t disk_id;                         //{ +0x0000    } | .DiskId
                                                                  
            SDK_NONVOL_PROPERTIES( "_DISK_PARTITION_INFO.Gpt.$", 0x0, false, 0x68db231081d98528 );                               
            SDK_FIXED_SIZE( u1_gpt_t, 0x10 );                               
        };                                                        
                                                                  
        // WDK 10                                                 
        //                                                        
        _m00 uint32_t                      size_of_partition_info;  //{ +0x0000    } | .SizeOfPartitionInfo
        _m01 enum nt::partition_style_t    partition_style;         //{ +0x0004    } | .PartitionStyle
        _m04 u0_mbr_t                      mbr;                     //{ +0x0008    } | .Mbr
        _m06 u1_gpt_t                      gpt;                     //{ +0x0008    } | .Gpt
                                                                  
        SDK_NONVOL_PROPERTIES( "_DISK_PARTITION_INFO.$", 0x0, false, 0x91d5ee0e0f55fdd9 );                       
        SDK_FIXED_SIZE( disk_partition_info_t, 0x18 );                       
    };                                                            
};
#include "magic/disk_partition_info_t.end.hpp"
SDK_VERIFY( struct nt::disk_partition_info_t::u0_mbr_t, 0x8 );
SDK_VERIFY( struct nt::disk_partition_info_t::u1_gpt_t, 0x10 );
SDK_VERIFY( struct nt::disk_partition_info_t, 0x18 );
