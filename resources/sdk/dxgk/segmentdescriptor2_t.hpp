#pragma once
#include <sdkgen/support_library.hpp>
#include "segmentflags2_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/segmentdescriptor2_t.start.hpp"
namespace dxgk
{
    // [struct _DXGK_SEGMENTDESCRIPTOR2]
    // => WDK 10 (NV)
    //
    struct segmentdescriptor2_t                                  
    {                                                            
        // WDK 10                                                
        //                                                       
        _m00 struct dxgk::segmentflags2_t flags;                   //{ +0x0000    } | .Flags
        _m01 uint64_t                     size;                    //{ +0x0008    } | .Size
        _m02 struct nt::mdl_t*            p_mdl;                   //{ +0x0010    } | .pMdl
        _m03 int64_t                      base_address;            //{ +0x0018    } | .BaseAddress
        _m04 int64_t                      cpu_translated_address;  //{ +0x0020    } | .CpuTranslatedAddress
                                                                 
        SDK_NONVOL_PROPERTIES( "_DXGK_SEGMENTDESCRIPTOR2.$", 0x0, false, 0xf933ae371122c00f );                       
        SDK_FIXED_SIZE( segmentdescriptor2_t, 0x28 );                       
    };                                                           
};
#include "magic/segmentdescriptor2_t.end.hpp"
SDK_VERIFY( struct dxgk::segmentdescriptor2_t, 0x28 );
