#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/collectdbginfo_t.start.hpp"
namespace dxgk::arg
{
    struct collectdbginfo_ext_t;

    // [struct _DXGKARG_COLLECTDBGINFO]
    // => WDK 10 (NV)
    //
    struct collectdbginfo_t                                      
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 uint32_t                                reason;       //{ +0x0000    } | .Reason
        _m01 void*                                   p_buffer;     //{ +0x0008    } | .pBuffer
        _m02 uint64_t                                buffer_size;  //{ +0x0010    } | .BufferSize
        _m03 struct dxgk::arg::collectdbginfo_ext_t* p_extension;  //{ +0x0018    } | .pExtension
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGKARG_COLLECTDBGINFO.$", 0x0, false, 0xc21ac004bfa416c9 );            
        SDK_FIXED_SIZE( collectdbginfo_t, 0x20 );                
    };                                                           
};
#include "magic/collectdbginfo_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::collectdbginfo_t, 0x20 );
