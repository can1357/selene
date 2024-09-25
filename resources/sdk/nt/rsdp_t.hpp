#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/rsdp_t.start.hpp"
namespace nt
{
    // [struct _RSDP]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct rsdp_t                                
    {                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                       
        _m00 uint64_t               signature;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Signature
        _m01 uint8_t                checksum;      //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Checksum
        _m02 sdk::array<uint8_t, 6> oemid;         //{ +0x0009    +0x0009    +0x0009    +0x0009    } | .OEMID
        _m03 uint8_t                revision;      //{ +0x000f    +0x000f    +0x000f    +0x000f    } | .Revision
        _m04 uint32_t               rsdt_address;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RsdtAddress
        _m05 uint32_t               length;        //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Length
        _m06 int64_t                xsdt_address;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .XsdtAddress
        _m07 uint8_t                x_checksum;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .XChecksum
                                                 
        SDK_MAGIC_PROPERTIES( "_RSDP.$", 0x24, true, 0x5c2a24df4eaf0e74 );             
        SDK_FIXED_SIZE( rsdp_t, 0x24 );             
    };                                           
};
#include "magic/rsdp_t.end.hpp"
SDK_VERIFY( struct nt::rsdp_t, 0x24 );
