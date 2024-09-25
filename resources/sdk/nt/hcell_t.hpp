#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/hcell_t.start.hpp"
namespace nt
{
    // [struct _HCELL]
    // => Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2
    //
    struct hcell_t                           
    {                                        
        struct u0_new_cell_t                 
        {                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2                   
            //                               
            _m01 uint32_t user_data;           //{ +0x0000    +0x0000    +0x0000    } | .UserData
            _m02 uint32_t next;                //{ +0x0000    +0x0000    +0x0000    } | .Next
                                             
            SDK_MAGIC_PROPERTIES( "_HCELL.NewCell.$", 0x4, true, 0x34184da5d2c82495 );                   
            SDK_FIXED_SIZE( u0_new_cell_t, 0x4 );                   
        };                                   
                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 10 v20H2         
        //                                   
        _m00 int32_t                size;      //{ +0x0000    +0x0000    +0x0000    } | .Size
        _m03 u0_new_cell_t          new_cell;  //{ +0x0004    +0x0004    +0x0004    } | .NewCell
                                             
        SDK_MAGIC_PROPERTIES( "_HCELL.$", 0x8, true, 0x4d57123150891afa );         
        SDK_FIXED_SIZE( hcell_t, 0x8 );         
    };                                       
};
#include "magic/hcell_t.end.hpp"
SDK_VERIFY( struct nt::hcell_t::u0_new_cell_t, 0x4 );
SDK_VERIFY( struct nt::hcell_t, 0x8 );
