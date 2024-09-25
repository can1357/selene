#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_array_f_value_t.start.hpp"
namespace win
{
    // [class CArrayFValue]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_array_f_value_t        
    {                              
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                         
        _m00 uint8_t* m_p_data;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_pData
        _m01 uint32_t m_cb_value;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_cbValue
        _m02 int32_t  m_n_size;      //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .m_nSize
        _m03 int32_t  m_n_max_size;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_nMaxSize
        _m04 int32_t  m_n_grow_by;   //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .m_nGrowBy
                                   
        SDK_MAGIC_PROPERTIES( "CArrayFValue.$", 0x18, true, 0x39e9379a188f3ede );             
        SDK_FIXED_SIZE( c_array_f_value_t, 0x18 );             
    };                             
};
#include "magic/c_array_f_value_t.end.hpp"
SDK_VERIFY( class win::c_array_f_value_t, 0x18 );
