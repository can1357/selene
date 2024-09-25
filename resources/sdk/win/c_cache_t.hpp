#pragma once
#include <sdkgen/support_library.hpp>
#include "../rtl/srwlock_t.hpp"

namespace tag { struct element_t; }

#include "magic/c_cache_t.start.hpp"
namespace win
{
    // [class CCache]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_cache_t                                          
    {                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                   
        _m00 struct rtl::srwlock_t   m_srw_lock;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_srwLock
        _m01 struct tag::element_t** m_pa_buckets;             //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_paBuckets
        _m02 uint32_t                m_c_buckets;              //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .m_cBuckets
        _m03 uint32_t                m_c_elements;             //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .m_cElements
        _m04 int64_t                 m_i64_local_cache_count;  //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_i64LocalCacheCount
                                                             
        SDK_MAGIC_PROPERTIES( "CCache.$", 0x20, true, 0x7dd3cae9660a5aaf );                        
        SDK_FIXED_SIZE( c_cache_t, 0x20 );                        
    };                                                       
};
#include "magic/c_cache_t.end.hpp"
SDK_VERIFY( class win::c_cache_t, 0x20 );
