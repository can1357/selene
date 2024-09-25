#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/primarycontextdata_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_PRIMARYCONTEXTDATA]
    // => WDK 10 (NV)
    //
    struct primarycontextdata_t       
    {                                 
        // WDK 10                     
        //                            
        _m00 void*    h_context;        //{ +0x0000    } | .hContext
        _m01 void*    h_allocation;     //{ +0x0008    } | .hAllocation
        _m02 uint16_t segment_id;       //{ +0x0010    } | .SegmentId
        _m03 int64_t  segment_address;  //{ +0x0018    } | .SegmentAddress
                                      
        SDK_NONVOL_PROPERTIES( "_DXGK_PRIMARYCONTEXTDATA.$", 0x0, false, 0x90e085ec16eb6b3 );                
        SDK_FIXED_SIZE( primarycontextdata_t, 0x20 );                
    };                                
};
#include "magic/primarycontextdata_t.end.hpp"
SDK_VERIFY( struct dxgk::primarycontextdata_t, 0x20 );
