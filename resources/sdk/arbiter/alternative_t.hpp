#pragma once
#include <sdkgen/support_library.hpp>

namespace io { struct resource_descriptor_t; }

#include "magic/alternative_t.start.hpp"
namespace arbiter
{
    // [struct _ARBITER_ALTERNATIVE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct alternative_t                                  
    {                                                     
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                                
        _m00 uint64_t                          minimum;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Minimum
        _m01 uint64_t                          maximum;     //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Maximum
        _m02 uint64_t                          length;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Length
        _m03 uint64_t                          alignment;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Alignment
        _m04 int32_t                           priority;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .Priority
        _m05 uint32_t                          flags;       //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .Flags
        _m06 struct io::resource_descriptor_t* descriptor;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Descriptor
                                                          
        SDK_MAGIC_PROPERTIES( "_ARBITER_ALTERNATIVE.$", 0x40, true, 0xc178cf57a9562084 );           
        SDK_FIXED_SIZE( alternative_t, 0x40 );            
    };                                                    
};
#include "magic/alternative_t.end.hpp"
SDK_VERIFY( struct arbiter::alternative_t, 0x40 );
