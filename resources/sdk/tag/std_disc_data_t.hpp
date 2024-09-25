#pragma once
#include <sdkgen/support_library.hpp>

namespace win { class c_std_marshal_t; }

#include "magic/std_disc_data_t.start.hpp"
namespace tag
{
    // [struct tagStdDiscData]
    // => Windows 10 v1607
    //
    struct std_disc_data_t                          
    {                                               
        // Windows 10 v1607                         
        //                                          
        _m00 class win::c_std_marshal_t* p_std_mshl;  //{ +0x0000    } | .pStdMshl
        _m01 uint32_t                    dw_type;     //{ +0x0008    } | .dwType
        _m02 int32_t                     f_release;   //{ +0x000c    } | .fRelease
                                                    
        SDK_MAGIC_PROPERTIES( "tagStdDiscData.$", 0x0, false, 0xce90952e783909ed );           
        SDK_FIXED_SIZE( std_disc_data_t, 0x10 );           
    };                                              
};
#include "magic/std_disc_data_t.end.hpp"
SDK_VERIFY( struct tag::std_disc_data_t, 0x10 );
