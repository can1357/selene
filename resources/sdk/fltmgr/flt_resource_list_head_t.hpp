#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/eresource_t.hpp"

#include "magic/flt_resource_list_head_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_RESOURCE_LIST_HEAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_resource_list_head_t         
    {                                       
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2        
        //                                  
        _m00 struct nt::eresource_t r_lock;   //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .rLock
        _m01 nt::list_entry_t       r_list;   //{ +0x0068    +0x0068    +0x0068    +0x0068    } | .rList
        _m02 uint32_t               r_count;  //{ +0x0078    +0x0078    +0x0078    +0x0078    } | .rCount
                                            
        SDK_MAGIC_PROPERTIES( "_FLT_RESOURCE_LIST_HEAD.$", 0x80, true, 0xffa450a24a4b21fe );        
        SDK_FIXED_SIZE( flt_resource_list_head_t, 0x80 );        
    };                                      
};
#include "magic/flt_resource_list_head_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_resource_list_head_t, 0x80 );
