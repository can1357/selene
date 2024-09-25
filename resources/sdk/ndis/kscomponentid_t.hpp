#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/kscomponentid_t.start.hpp"
namespace ndis
{
    // [struct KSCOMPONENTID]
    // => Windows 10 v1607
    //
    struct kscomponentid_t                  
    {                                       
        // Windows 10 v1607                 
        //                                  
        _m00 struct nt::guid_t manufacturer;  //{ +0x0000    } | .Manufacturer
        _m01 struct nt::guid_t product;       //{ +0x0010    } | .Product
        _m02 struct nt::guid_t component;     //{ +0x0020    } | .Component
        _m03 struct nt::guid_t name;          //{ +0x0030    } | .Name
        _m04 uint32_t          version;       //{ +0x0040    } | .Version
        _m05 uint32_t          revision;      //{ +0x0044    } | .Revision
                                            
        SDK_MAGIC_PROPERTIES( "KSCOMPONENTID.$", 0x0, false, 0x6c1d4bdb707503d6 );             
        SDK_FIXED_SIZE( kscomponentid_t, 0x48 );             
    };                                      
};
#include "magic/kscomponentid_t.end.hpp"
SDK_VERIFY( struct ndis::kscomponentid_t, 0x48 );
