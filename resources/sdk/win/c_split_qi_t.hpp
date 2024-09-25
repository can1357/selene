#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

namespace tag { struct m_interface_pointer_t; }

#include "magic/c_split_qi_t.start.hpp"
namespace win
{
    // [class CSplit_QI]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_split_qi_t                                            
    {                                                             
        using some_pm_itf_ptrs_t = sdk::array<struct tag::m_interface_pointer_t*, 2>;                 
                                                                  
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                 
        //                                                        
        _m00 some_pm_itf_ptrs_t                  some_pm_itf_ptrs;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SomePMItfPtrs
        _m01 sdk::array<sdk::hresult, 2>         some_h_rs;         //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .SomeHRs
        _m02 sdk::array<struct nt::guid_t, 2>    some_ii_ds;        //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .SomeIIDs
        _m03 uint32_t                            dw_count;          //{ +0x0038    +0x0038    +0x0038    +0x0038    } | ._dwCount
        _m04 char*                               p_alloc_block;     //{ +0x0040    +0x0040    +0x0040    +0x0040    } | ._pAllocBlock
        _m05 struct tag::m_interface_pointer_t** p_itf_array;       //{ +0x0048    +0x0048    +0x0048    +0x0048    } | ._pItfArray
        _m06 sdk::hresult*                       p_hr_array;        //{ +0x0050    +0x0050    +0x0050    +0x0050    } | ._pHrArray
        _m07 struct nt::guid_t*                  p_iid_array;       //{ +0x0058    +0x0058    +0x0058    +0x0058    } | ._pIIDArray
                                                                  
        SDK_MAGIC_PROPERTIES( "CSplit_QI.$", 0x60, true, 0x7279a9926cefcc7d );                 
        SDK_FIXED_SIZE( c_split_qi_t, 0x60 );                     
    };                                                            
};
#include "magic/c_split_qi_t.end.hpp"
SDK_VERIFY( class win::c_split_qi_t, 0x60 );
