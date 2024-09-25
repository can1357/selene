#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfobject_triage_info_t.start.hpp"
namespace wdf
{
    // [struct _WDFOBJECT_TRIAGE_INFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct wdfobject_triage_info_t      
    {                                   
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                              
        _m00 uint32_t raw_object_size;    //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RawObjectSize
        _m01 uint32_t object_type;        //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .ObjectType
        _m02 uint32_t total_object_size;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .TotalObjectSize
        _m03 uint32_t child_list_head;    //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .ChildListHead
        _m04 uint32_t child_entry;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .ChildEntry
        _m05 uint32_t globals;            //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .Globals
        _m06 uint32_t parent_object;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .ParentObject
                                        
        SDK_MAGIC_PROPERTIES( "_WDFOBJECT_TRIAGE_INFO.$", 0x1c, true, 0x20da0229ce4923e8 );                  
        SDK_FIXED_SIZE( wdfobject_triage_info_t, 0x1c );                  
    };                                  
};
#include "magic/wdfobject_triage_info_t.end.hpp"
SDK_VERIFY( struct wdf::wdfobject_triage_info_t, 0x1c );
