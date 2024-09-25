#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/mnk_eq_buf_t.start.hpp"
namespace win
{
    // [struct _MnkEqBuf]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct mnk_eq_buf_t                        
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                     
        _m00 uint32_t               cdw_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cdwSize
        _m01 sdk::array<uint8_t, 1> ab_eq_data;  //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .abEqData
                                               
        SDK_MAGIC_PROPERTIES( "_MnkEqBuf.$", 0x8, true, 0xe08da33382df519d );           
        SDK_FIXED_SIZE( mnk_eq_buf_t, 0x8 );           
    };                                         
};
#include "magic/mnk_eq_buf_t.end.hpp"
SDK_VERIFY( struct win::mnk_eq_buf_t, 0x8 );
