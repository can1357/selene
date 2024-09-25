#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/ksidentifier_t.start.hpp"
namespace ndis
{
    // [struct KSIDENTIFIER]
    // => Windows 10 v1607
    //
    struct ksidentifier_t                
    {                                    
        // Windows 10 v1607              
        //                               
        _m00 struct nt::guid_t set;        //{ +0x0000    } | .Set
        _m01 uint32_t          id;         //{ +0x0010    } | .Id
        _m02 uint32_t          flags;      //{ +0x0014    } | .Flags
        _m03 int64_t           alignment;  //{ +0x0000    } | .Alignment
                                         
        SDK_MAGIC_PROPERTIES( "KSIDENTIFIER.$", 0x0, false, 0x415ddd116ddd9ed3 );          
        SDK_FIXED_SIZE( ksidentifier_t, 0x18 );          
    };                                   
};
#include "magic/ksidentifier_t.end.hpp"
SDK_VERIFY( struct ndis::ksidentifier_t, 0x18 );
