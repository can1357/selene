#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hpx_type_0_t.start.hpp"
namespace pci
{
    // [struct _HPX_TYPE_0]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct hpx_type_0_t              
    {                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                
        //                           
        _m00 uint8_t cache_line_size;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .CacheLineSize
        _m01 uint8_t latency_timer;    //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .LatencyTimer
        _m02 uint8_t enable_serr;      //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .EnableSERR
        _m03 uint8_t enable_perr;      //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .EnablePERR
                                     
        SDK_MAGIC_PROPERTIES( "_HPX_TYPE_0.$", 0x4, true, 0xcca37565acc3a557 );                
        SDK_FIXED_SIZE( hpx_type_0_t, 0x4 );                
    };                               
};
#include "magic/hpx_type_0_t.end.hpp"
SDK_VERIFY( struct pci::hpx_type_0_t, 0x4 );
