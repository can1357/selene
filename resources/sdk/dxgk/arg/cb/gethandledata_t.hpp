#pragma once
#include <sdkgen/support_library.hpp>
#include "../../handle_type_t.hpp"
#include "../../cb/gethandledataflags_t.hpp"

#include "magic/gethandledata_t.start.hpp"
namespace dxgk::arg::cb
{
    // [struct _DXGKARGCB_GETHANDLEDATA]
    // => WDK 10 (NV)
    //
    struct gethandledata_t                                  
    {                                                       
        // WDK 10                                           
        //                                                  
        _m00 uint32_t                              h_object;  //{ +0x0000    } | .hObject
        _m01 enum dxgk::handle_type_t              type;      //{ +0x0004    } | .Type
        _m02 struct dxgk::cb::gethandledataflags_t flags;     //{ +0x0008    } | .Flags
                                                            
        SDK_NONVOL_PROPERTIES( "_DXGKARGCB_GETHANDLEDATA.$", 0x0, false, 0xae920697677af1f4 );         
        SDK_FIXED_SIZE( gethandledata_t, 0xc );             
    };                                                      
};
#include "magic/gethandledata_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::cb::gethandledata_t, 0xc );
