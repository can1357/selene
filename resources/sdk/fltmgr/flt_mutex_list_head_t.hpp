#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/fast_mutex_t.hpp"

#include "magic/flt_mutex_list_head_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_MUTEX_LIST_HEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_mutex_list_head_t               
    {                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                     
        _m00 struct nt::fast_mutex_t m_lock;     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .mLock
        _m01 nt::list_entry_t        m_list;     //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .mList
        _m02 uint32_t                m_count;    //{ +0x0048    +0x0048    +0x0048    +0x0048    } | .mCount
        _m03 uint1_t                 m_invalid;  //{ +0x0048@0  +0x0048@0  +0x0048@0  +0x0048@0  } | .mInvalid
                                               
        SDK_MAGIC_PROPERTIES( "_FLT_MUTEX_LIST_HEAD.$", 0x50, true, 0xaa887cba68944249 );          
        SDK_FIXED_SIZE( flt_mutex_list_head_t, 0x50 );          
    };                                         
};
#include "magic/flt_mutex_list_head_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_mutex_list_head_t, 0x50 );
