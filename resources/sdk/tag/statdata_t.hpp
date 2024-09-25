#pragma once
#include <sdkgen/support_library.hpp>
#include "formatetc_t.hpp"

namespace win { struct i_advise_sink_t; }

#include "magic/statdata_t.start.hpp"
namespace tag
{
    // [struct tagSTATDATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct statdata_t                                   
    {                                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
        //                                              
        _m00 struct tag::formatetc_t      formatetc;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .formatetc
        _m01 uint32_t                     advf;           //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .advf
        _m02 struct win::i_advise_sink_t* p_adv_sink;     //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .pAdvSink
        _m03 uint32_t                     dw_connection;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .dwConnection
                                                        
        SDK_MAGIC_PROPERTIES( "tagSTATDATA.$", 0x38, true, 0xb1d1ec82df6d2988 );              
        SDK_FIXED_SIZE( statdata_t, 0x38 );              
    };                                                  
};
#include "magic/statdata_t.end.hpp"
SDK_VERIFY( struct tag::statdata_t, 0x38 );
