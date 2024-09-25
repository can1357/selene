#pragma once
#include <sdkgen/support_library.hpp>
#include "object_header_t.hpp"

#include "magic/offload_encapsulation_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_OFFLOAD_ENCAPSULATION]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct offload_encapsulation_t                  
    {                                               
        struct u0_i_pv4_t                           
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                      
            _m01 uint32_t enabled;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
            _m02 uint32_t encapsulation_type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EncapsulationType
            _m03 uint32_t header_size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeaderSize
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD_ENCAPSULATION.IPv4.$", 0xc, true, 0x50167af6a7c7b4e8 );                          
            SDK_FIXED_SIZE( u0_i_pv4_t, 0xc );                          
        };                                          
                                                    
        struct u4_i_pv6_t                           
        {                                           
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                          
            //                                      
            _m05 uint32_t enabled;                    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Enabled
            _m06 uint32_t encapsulation_type;         //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .EncapsulationType
            _m07 uint32_t header_size;                //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .HeaderSize
                                                    
            SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD_ENCAPSULATION.IPv6.$", 0xc, true, 0x1ff7ea30c64ed15f );                          
            SDK_FIXED_SIZE( u4_i_pv6_t, 0xc );                          
        };                                          
                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2       
        //                                          
        _m00 struct ndis::object_header_t    header;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m04 u0_i_pv4_t                      i_pv4;   //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .IPv4
        _m08 u4_i_pv6_t                      i_pv6;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .IPv6
                                                    
        SDK_MAGIC_PROPERTIES( "_NDIS_OFFLOAD_ENCAPSULATION.$", 0x1c, true, 0x52baec436e386892 );       
        SDK_FIXED_SIZE( offload_encapsulation_t, 0x1c );       
    };                                              
};
#include "magic/offload_encapsulation_t.end.hpp"
SDK_VERIFY( struct ndis::offload_encapsulation_t::u0_i_pv4_t, 0xc );
SDK_VERIFY( struct ndis::offload_encapsulation_t::u4_i_pv6_t, 0xc );
SDK_VERIFY( struct ndis::offload_encapsulation_t, 0x1c );
