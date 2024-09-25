#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/virtualgpusurfacedata_t.start.hpp"
namespace d3dk::mdt
{
    // [struct _D3DKMDT_VIRTUALGPUSURFACEDATA]
    // => WDK 10 (NV)
    //
    struct virtualgpusurfacedata_t        
    {                                     
        // WDK 10                         
        //                                
        _m00 uint64_t size;                 //{ +0x0000    } | .Size
        _m01 uint32_t alignment;            //{ +0x0008    } | .Alignment
        _m02 uint32_t driver_segment_id;    //{ +0x000c    } | .DriverSegmentId
        _m03 uint32_t private_driver_data;  //{ +0x0010    } | .PrivateDriverData
                                          
        SDK_NONVOL_PROPERTIES( "_D3DKMDT_VIRTUALGPUSURFACEDATA.$", 0x0, false, 0xd2f392dc3ead748a );                    
        SDK_FIXED_SIZE( virtualgpusurfacedata_t, 0x18 );                    
    };                                    
};
#include "magic/virtualgpusurfacedata_t.end.hpp"
SDK_VERIFY( struct d3dk::mdt::virtualgpusurfacedata_t, 0x18 );
