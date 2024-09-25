#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/com_error_t.start.hpp"
namespace win
{
    struct i_error_info_t;

    // [class _com_error]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class com_error_t                               
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2           
        //                                          
        _m00 const sdk::hresult          m_hresult;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_hresult
        _m01 struct win::i_error_info_t* m_perrinfo;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_perrinfo
        _m02 wchar_t*                    m_psz_msg;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_pszMsg
                                                    
        SDK_MAGIC_PROPERTIES( "_com_error.$", 0x20, true, 0x68f93269032aa644 );           
        SDK_FIXED_SIZE( com_error_t, 0x20 );           
    };                                              
};
#include "magic/com_error_t.end.hpp"
SDK_VERIFY( class win::com_error_t, 0x20 );
