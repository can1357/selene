#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/c_verifier_stack_data_t.start.hpp"
namespace win
{
    // [class CVerifierStackData]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_verifier_stack_data_t          
    {                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2             
        //                                 
        _m00 nt::list_entry_t m_list_head;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_listHead
        _m01 uint32_t         m_dw_count;    //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_dwCount
        _m02 uint32_t         m_dw_missing;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .m_dwMissing
                                           
        SDK_MAGIC_PROPERTIES( "CVerifierStackData.$", 0x18, true, 0x1cb7114d00a33dcc );             
        SDK_FIXED_SIZE( c_verifier_stack_data_t, 0x18 );             
    };                                     
};
#include "magic/c_verifier_stack_data_t.end.hpp"
SDK_VERIFY( class win::c_verifier_stack_data_t, 0x18 );
