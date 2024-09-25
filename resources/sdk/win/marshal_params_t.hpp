#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/marshal_params_t.start.hpp"
namespace win
{
    // [struct MarshalParams]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct marshal_params_t              
    {                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                               
        _m00 struct nt::guid_t iid;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .iid
        _m01 uint32_t          mshlflags;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .mshlflags
                                         
        SDK_MAGIC_PROPERTIES( "MarshalParams.$", 0x14, true, 0x6a4b3e397f85d30a );          
        SDK_FIXED_SIZE( marshal_params_t, 0x14 );          
    };                                   
};
#include "magic/marshal_params_t.end.hpp"
SDK_VERIFY( struct win::marshal_params_t, 0x14 );
