#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mapframebufferpointer_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_MAPFRAMEBUFFERPOINTER]
    // => WDK 10 (NV)
    //
    struct mapframebufferpointer_t           
    {                                        
        // WDK 10                            
        //                                   
        _m00 uint32_t physical_adapter_index;  //{ +0x0000    } | .PhysicalAdapterIndex
        _m01 uint64_t size;                    //{ +0x0008    } | .Size
        _m02 uint64_t offset;                  //{ +0x0010    } | .Offset
        _m03 void*    p_base_address;          //{ +0x0018    } | .pBaseAddress
                                             
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_MAPFRAMEBUFFERPOINTER.$", 0x0, false, 0x1fac799eaf5574b5 );                       
        SDK_FIXED_SIZE( mapframebufferpointer_t, 0x20 );                       
    };                                       
};
#include "magic/mapframebufferpointer_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::mapframebufferpointer_t, 0x20 );
