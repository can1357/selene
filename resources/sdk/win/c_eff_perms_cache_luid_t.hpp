#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/critical_section_t.hpp"

#include "magic/c_eff_perms_cache_luid_t.start.hpp"
namespace win
{
    // [class CEffPermsCacheLUID]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_eff_perms_cache_luid_t                         
    {                                                      
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2               
        //                                                 
        _m00 struct rtl::critical_section_t m_cache_lock;    //{ +0x0118    +0x0118    +0x0118    +0x0118    } | .m_CacheLock
        _m01 int32_t                        m_b_lock_valid;  //{ +0x0140    +0x0140    +0x0140    +0x0140    } | .m_bLockValid
                                                           
        SDK_MAGIC_PROPERTIES( "CEffPermsCacheLUID.$", 0x148, true, 0x16bff8f58f8bba84 );               
        SDK_FIXED_SIZE( c_eff_perms_cache_luid_t, 0x148 );               
    };                                                     
};
#include "magic/c_eff_perms_cache_luid_t.end.hpp"
SDK_VERIFY( class win::c_eff_perms_cache_luid_t, 0x148 );
