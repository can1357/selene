#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"
#include "flt_object_flags_t.hpp"
#include "../ex/rundown_ref_t.hpp"

#include "magic/flt_object_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_OBJECT]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_object_t                                        
    {                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                                     
        _m00 enum fltmgr::flt_object_flags_t flags;              //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Flags
        _m01 uint32_t                        pointer_count;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .PointerCount
        _m02 struct ex::rundown_ref_t        rundown_ref;        //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .RundownRef
        _m03 nt::list_entry_t                primary_link;       //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .PrimaryLink
        _m04 struct nt::guid_t               unique_identifier;  //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .UniqueIdentifier
                                                               
        SDK_MAGIC_PROPERTIES( "_FLT_OBJECT.$", 0x30, true, 0xe42c37444a9c6ca7 );                  
        SDK_FIXED_SIZE( flt_object_t, 0x30 );                  
    };                                                         
};
#include "magic/flt_object_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_object_t, 0x30 );
