#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_object_context_t; }
namespace win { class c_std_identity_t;   }

#include "magic/std_unmarshal_data_t.start.hpp"
namespace tag
{
    struct objref_t;

    // [struct tagStdUnmarshalData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct std_unmarshal_data_t                              
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                   
        _m00 class win::c_std_identity_t*   p_std_id;          //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .pStdID
        _m01 struct tag::objref_t*          pobjref;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .pobjref
        _m02 class win::c_object_context_t* p_client_ctx;      //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .pClientCtx
        _m03 int32_t                        f_create_wrapper;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .fCreateWrapper
        _m04 void**                         ppv;               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ppv
        _m05 int32_t                        f_light_na;        //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .fLightNA
                                                             
        SDK_MAGIC_PROPERTIES( "tagStdUnmarshalData.$", 0x30, true, 0x73e05e24295d889b );                 
        SDK_FIXED_SIZE( std_unmarshal_data_t, 0x30 );                 
    };                                                       
};
#include "magic/std_unmarshal_data_t.end.hpp"
SDK_VERIFY( struct tag::std_unmarshal_data_t, 0x30 );
