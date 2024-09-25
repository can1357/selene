#pragma once
#include <sdkgen/support_library.hpp>
#include "wait_lock_internal_t.hpp"
#include "wait_lock_transactioned_list_t.hpp"

#include "magic/enumeration_info_t.start.hpp"
namespace fx
{
    // [struct FxEnumerationInfo]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct enumeration_info_t                                            
    {                                                                    
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                   
        //                                                               
        _m00 class fx::wait_lock_internal_t           m_power_state_lock;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .m_PowerStateLock
        _m01 class fx::wait_lock_transactioned_list_t m_child_list_list;   //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .m_ChildListList
                                                                         
        SDK_MAGIC_PROPERTIES( "FxEnumerationInfo.$", 0x88, true, 0x9a9b52cf0bede8e9 );                   
        SDK_FIXED_SIZE( enumeration_info_t, 0x88 );                      
    };                                                                   
};
#include "magic/enumeration_info_t.end.hpp"
SDK_VERIFY( struct fx::enumeration_info_t, 0x88 );
