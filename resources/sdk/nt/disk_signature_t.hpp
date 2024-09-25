#pragma once
#include <sdkgen/support_library.hpp>
#include "guid_t.hpp"

#include "magic/disk_signature_t.start.hpp"
namespace nt
{
    // [struct _DISK_SIGNATURE]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct disk_signature_t                                
    {                                                      
        struct u0_mbr_t                                    
        {                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                             
            _m01 uint32_t signature;                         //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
            _m02 uint32_t check_sum;                         //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .CheckSum
                                                           
            SDK_NONVOL_PROPERTIES( "_DISK_SIGNATURE.Mbr.$", 0x8, true, 0x8f45ef0c88ad6ae4 );                          
            SDK_FIXED_SIZE( u0_mbr_t, 0x8 );                          
        };                                                 
                                                           
        struct u5_gpt_t                                    
        {                                                  
            // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
            //                                             
            _m04 struct nt::guid_t disk_id;                  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .DiskId
                                                           
            SDK_NONVOL_PROPERTIES( "_DISK_SIGNATURE.Gpt.$", 0x10, true, 0xfa6356896a6d9316 );                        
            SDK_FIXED_SIZE( u5_gpt_t, 0x10 );                        
        };                                                 
                                                           
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                                                 
        _m00 uint32_t                      partition_style;  //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .PartitionStyle
        _m03 u0_mbr_t                      mbr;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Mbr
        _m05 u5_gpt_t                      gpt;              //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Gpt
                                                           
        SDK_NONVOL_PROPERTIES( "_DISK_SIGNATURE.$", 0x14, true, 0x1b548ba2db56232 );                
        SDK_FIXED_SIZE( disk_signature_t, 0x14 );                
    };                                                     
};
#include "magic/disk_signature_t.end.hpp"
SDK_VERIFY( struct nt::disk_signature_t::u0_mbr_t, 0x8 );
SDK_VERIFY( struct nt::disk_signature_t::u5_gpt_t, 0x10 );
SDK_VERIFY( struct nt::disk_signature_t, 0x14 );
