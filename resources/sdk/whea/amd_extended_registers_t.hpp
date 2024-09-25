#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/amd_extended_registers_t.start.hpp"
namespace whea
{
    // [struct _WHEA_AMD_EXTENDED_REGISTERS]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct amd_extended_registers_t
    {                              
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                    
        _m00 uint64_t ipid;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .IPID
        _m01 uint64_t synd;          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .SYND
        _m02 uint64_t config;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .CONFIG
        _m03 uint64_t destat;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .DESTAT
        _m04 uint64_t deaddr;        //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .DEADDR
        _m05 uint64_t misc1;         //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .MISC1
        _m06 uint64_t misc2;         //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .MISC2
        _m07 uint64_t misc3;         //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .MISC3
        _m08 uint64_t misc4;         //{ +0x0040    +0x0040    +0x0040    +0x0040    } | .MISC4
        _m09 uint64_t ras_cap;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .RasCap
                                   
        SDK_NONVOL_PROPERTIES( "_WHEA_AMD_EXTENDED_REGISTERS.$", 0xc0, true, 0xcfa28bc53f4e3e90 );        
        SDK_FIXED_SIZE( amd_extended_registers_t, 0xc0 );        
    };                             
};
#include "magic/amd_extended_registers_t.end.hpp"
SDK_VERIFY( struct whea::amd_extended_registers_t, 0xc0 );
