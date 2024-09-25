#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/propmarshalheader_t.start.hpp"
namespace tag
{
    // [struct tagPROPMARSHALHEADER]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct propmarshalheader_t           
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 struct nt::guid_t clsid;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .clsid
        _m01 struct nt::guid_t policy_id;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .policyId
        _m02 uint32_t          flags;      //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .flags
        _m03 uint32_t          cb;         //{ +0x0024    +0x0024    +0x0024    +0x0024    } | .cb
                                         
        SDK_MAGIC_PROPERTIES( "tagPROPMARSHALHEADER.$", 0x28, true, 0xd037ef7731b7595d );          
        SDK_FIXED_SIZE( propmarshalheader_t, 0x28 );          
    };                                   
};
#include "magic/propmarshalheader_t.end.hpp"
SDK_VERIFY( struct tag::propmarshalheader_t, 0x28 );
