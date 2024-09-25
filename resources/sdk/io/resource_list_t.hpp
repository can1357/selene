#pragma once
#include <sdkgen/support_library.hpp>
#include "resource_descriptor_t.hpp"

#include "magic/resource_list_t.start.hpp"
namespace io
{
    // [struct _IO_RESOURCE_LIST]
    // => WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct resource_list_t                                               
    {                                                                    
        // WDK 10, Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                                               
        _m00 uint16_t                                        version;      //{ +0x0000    +0x0000    +0x0000    +0x0000    +0x0000    } | .Version
        _m01 uint16_t                                        revision;     //{ +0x0002    +0x0002    +0x0002    +0x0002    +0x0002    } | .Revision
        _m02 uint32_t                                        count;        //{ +0x0004    +0x0004    +0x0004    +0x0004    +0x0004    } | .Count
        _m03 sdk::array<struct io::resource_descriptor_t, 1> descriptors;  //{ +0x0008    +0x0008    +0x0008    +0x0008    +0x0008    } | .Descriptors
                                                                         
        SDK_NONVOL_PROPERTIES( "_IO_RESOURCE_LIST.$", 0x28, true, 0xa217047c7357979f );            
        SDK_FIXED_SIZE( resource_list_t, 0x28 );                         
    };                                                                   
};
#include "magic/resource_list_t.end.hpp"
SDK_VERIFY( struct io::resource_list_t, 0x28 );
