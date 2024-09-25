#pragma once
#include <sdkgen/support_library.hpp>

namespace nt { struct file_object_t;  }
namespace nt { struct ktransaction_t; }

#include "magic/flt_related_objects_t.start.hpp"
namespace fltmgr
{
    struct flt_filter_t;
    struct flt_volume_t;
    struct flt_instance_t;

    // [struct _FLT_RELATED_OBJECTS]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_related_objects_t                                      
    {                                                                 
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                            
        _m00 const uint16_t                       size;                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Size
        _m01 const uint16_t                       transaction_context;  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .TransactionContext
        _m02 struct fltmgr::flt_filter_t const*   filter;               //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Filter
        _m03 struct fltmgr::flt_volume_t const*   volume;               //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Volume
        _m04 struct fltmgr::flt_instance_t const* instance;             //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Instance
        _m05 struct nt::file_object_t const*      file_object;          //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .FileObject
        _m06 struct nt::ktransaction_t const*     transaction;          //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .Transaction
                                                                      
        SDK_MAGIC_PROPERTIES( "_FLT_RELATED_OBJECTS.$", 0x30, true, 0xf996b3230222b940 );                    
        SDK_FIXED_SIZE( flt_related_objects_t, 0x30 );                    
    };                                                                
};
#include "magic/flt_related_objects_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_related_objects_t, 0x30 );
