#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/m_vvalue_t.start.hpp"
namespace dxva
{
    // [struct _DXVA_MVvalue]
    // => WDK 10 (NV)
    //
    struct m_vvalue_t     
    {                     
        // WDK 10         
        //                
        _m00 int16_t horz;  //{ +0x0000    } | .horz
        _m01 int16_t vert;  //{ +0x0002    } | .vert
                          
        SDK_NONVOL_PROPERTIES( "_DXVA_MVvalue.$", 0x0, false, 0xa2b2ec2a98f22d9a );     
        SDK_FIXED_SIZE( m_vvalue_t, 0x4 );     
    };                    
};
#include "magic/m_vvalue_t.end.hpp"
SDK_VERIFY( struct dxva::m_vvalue_t, 0x4 );
