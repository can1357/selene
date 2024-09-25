#pragma once
#include <sdkgen/support_library.hpp>
#include "mnk_eq_buf_t.hpp"

#include "magic/c_tmp_mk_eq_buf_t.start.hpp"
namespace win
{
    // [class CTmpMkEqBuf]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_tmp_mk_eq_buf_t                    
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                     
        _m00 struct win::mnk_eq_buf_t  mkeqbuf;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | ._mkeqbuf
        _m01 sdk::array<uint8_t, 2047> ab_data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._abData
                                               
        SDK_MAGIC_PROPERTIES( "CTmpMkEqBuf.$", 0x808, true, 0x7cb6c81180936a27 );        
        SDK_FIXED_SIZE( c_tmp_mk_eq_buf_t, 0x808 );        
    };                                         
};
#include "magic/c_tmp_mk_eq_buf_t.end.hpp"
SDK_VERIFY( class win::c_tmp_mk_eq_buf_t, 0x808 );
