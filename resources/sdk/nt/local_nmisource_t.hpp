#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/local_nmisource_t.start.hpp"
namespace nt
{
    // [struct _LOCAL_NMISOURCE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct local_nmisource_t       
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint8_t  type;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m01 uint8_t  length;        //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .Length
        _m02 uint8_t  processor_id;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .ProcessorID
        _m03 uint16_t flags;         //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .Flags
        _m04 uint8_t  lintin;        //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .LINTIN
                                   
        SDK_MAGIC_PROPERTIES( "_LOCAL_NMISOURCE.$", 0x6, true, 0x96146c0b299eecfb );             
        SDK_FIXED_SIZE( local_nmisource_t, 0x6 );             
    };                             
};
#include "magic/local_nmisource_t.end.hpp"
SDK_VERIFY( struct nt::local_nmisource_t, 0x6 );
