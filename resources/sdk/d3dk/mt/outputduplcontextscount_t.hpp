#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/outputduplcontextscount_t.start.hpp"
namespace d3dk::mt
{
    // [struct _D3DKMT_OUTPUTDUPLCONTEXTSCOUNT]
    // => WDK 10 (NV)
    //
    struct outputduplcontextscount_t           
    {                                          
        // WDK 10                              
        //                                     
        _m00 uint32_t vid_pn_source_id;          //{ +0x0000    } | .VidPnSourceId
        _m01 uint32_t output_duplication_count;  //{ +0x0004    } | .OutputDuplicationCount
                                               
        SDK_NONVOL_PROPERTIES( "_D3DKMT_OUTPUTDUPLCONTEXTSCOUNT.$", 0x0, false, 0xde93773625e9b215 );                         
        SDK_FIXED_SIZE( outputduplcontextscount_t, 0x8 );                         
    };                                         
};
#include "magic/outputduplcontextscount_t.end.hpp"
SDK_VERIFY( struct d3dk::mt::outputduplcontextscount_t, 0x8 );
