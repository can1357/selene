#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/wdfobject_triage_info_v1_17_t.start.hpp"
namespace wdf
{
    // [struct _WDFOBJECT_TRIAGE_INFO_V1_17]
    // => Windows 10 v1607
    //
    struct wdfobject_triage_info_v1_17_t
    {                                   
        // Windows 10 v1607                  
        //                              
        _m00 uint32_t raw_object_size;    //{ +0x0000    } | .RawObjectSize
        _m01 uint32_t object_type;        //{ +0x0004    } | .ObjectType
        _m02 uint32_t total_object_size;  //{ +0x0008    } | .TotalObjectSize
        _m03 uint32_t child_list_head;    //{ +0x000c    } | .ChildListHead
        _m04 uint32_t child_entry;        //{ +0x0010    } | .ChildEntry
        _m05 uint32_t globals;            //{ +0x0014    } | .Globals
        _m06 uint32_t parent_object;      //{ +0x0018    } | .ParentObject
                                        
        SDK_MAGIC_PROPERTIES( "_WDFOBJECT_TRIAGE_INFO_V1_17.$", 0x0, false, 0xbf3ffaea9a25f817 );                  
        SDK_FIXED_SIZE( wdfobject_triage_info_v1_17_t, 0x1c );                  
    };                                  
};
#include "magic/wdfobject_triage_info_v1_17_t.end.hpp"
SDK_VERIFY( struct wdf::wdfobject_triage_info_v1_17_t, 0x1c );
