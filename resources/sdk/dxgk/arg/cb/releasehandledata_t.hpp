#pragma once
#include <sdkgen/support_library.hpp>
#include "../../handle_type_t.hpp"

#include "magic/releasehandledata_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_RELEASEHANDLEDATA]
    // => WDK 10 (NV)
    //
    struct releasehandledata_t                       
    {                                                
        // WDK 10                                    
        //                                           
        _m00 void*                    release_handle;  //{ +0x0000    } | .ReleaseHandle
        _m01 enum dxgk::handle_type_t type;            //{ +0x0008    } | .Type
                                                     
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_RELEASEHANDLEDATA.$", 0x0, false, 0x1cfbca6e5d0a6156 );               
        SDK_FIXED_SIZE( releasehandledata_t, 0x10 );               
    };                                               
};
#include "magic/releasehandledata_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::releasehandledata_t, 0x10 );
