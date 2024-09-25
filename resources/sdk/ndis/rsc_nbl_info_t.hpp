#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rsc_nbl_info_t.start.hpp"
namespace ndis
{
    // [union _NDIS_RSC_NBL_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    union rsc_nbl_info_t                            
    {                                               
        struct u0_info_t                            
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                      
            _m00 uint16_t coalesced_seg_count;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CoalescedSegCount
            _m01 uint16_t dup_ack_count;              //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .DupAckCount
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_RSC_NBL_INFO.Info.$", 0x4, true, 0x4e899c5189ff3112 );                          
            SDK_FIXED_SIZE( u0_info_t, 0x4 );                          
        };                                          
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2      
        //                                          
        _m02 u0_info_t                        info;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Info
        _m03 void*                            value;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Value
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_RSC_NBL_INFO.$", 0x8, true, 0xbd664a59181a0ab5 );      
        SDK_FIXED_SIZE( rsc_nbl_info_t, 0x8 );      
    };                                              
};
#include "magic/rsc_nbl_info_t.end.hpp"
SDK_VERIFY( struct ndis::rsc_nbl_info_t::u0_info_t, 0x4 );
SDK_VERIFY( union ndis::rsc_nbl_info_t, 0x8 );
