#pragma once
#include <sdkgen/support_library.hpp>
#include "rd_type_t.hpp"
#include "wudf_lock_t.hpp"
#include "wudf_event_t.hpp"

#include "magic/object_t.start.hpp"
namespace wdf
{
    class object_t;

    // [class WdfObject]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class object_t                                            
    {                                                         
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                        
        //                                                    
        _m00 int32_t                  m_constructor_status;     //{ +0x0010    +0x0010    +0x0010    } | .m_ConstructorStatus
        _m01 struct wdf::wudf_lock_t  m_lock;                   //{ +0x0020    +0x0020    +0x0020    } | .m_Lock
        _m02 uint32_t                 m_ref_count;              //{ +0x0008    +0x0008    +0x0008    } | .m_RefCount
        _m03 class wdf::object_t*     m_parent;                 //{ +0x0028    +0x0028    +0x0028    } | .m_Parent
        _m04 class wdf::object_t*     m_next;                   //{ +0x0030    +0x0030    +0x0030    } | .m_Next
        _m05 uint32_t                 m_unique_object_id;       //{ +0x0038    +0x0038    +0x0038    } | .m_UniqueObjectId
        _m06 uint8_t                  m_delete_wait_in_action;  //{ +0x003c    +0x003c    +0x003c    } | .m_DeleteWaitInAction
        _m07 struct wdf::wudf_event_t m_event;                  //{ +0x0040    +0x0040    +0x0040    } | .m_Event
        _m08 wchar_t*                 m_name;                   //{ +0x0048    +0x0048    +0x0048    } | .m_Name
        _m09 uint8_t                  m_marked_for_delete;      //{ +0x0050    +0x0050    +0x0050    } | .m_MarkedForDelete
        _m10 enum wdf::rd_type_t      m_object_type;            //{ +0x0051    +0x0051    +0x0051    } | .m_ObjectType
                                                              
        SDK_MAGIC_PROPERTIES( "WdfObject.$", 0x58, true, 0xc4b3868d16250cd0 );                        
        SDK_FIXED_SIZE( object_t, 0x58 );                        
    };                                                        
};
#include "magic/object_t.end.hpp"
SDK_VERIFY( class wdf::object_t, 0x58 );
