#pragma once
#include <sdkgen/support_library.hpp>
#include "k_push_lock_t.hpp"
#include "config_knob_namespace_t.hpp"

namespace nt { struct driver_object_t; }

#include "magic/knob_namespace_t.start.hpp"
namespace ndis
{
    // [class KnobNamespace]
    // => Windows 11
    //
    class knob_namespace_t                                                
    {                                                                     
        // Windows 11                                                     
        //                                                                
        _m00 const struct nt::driver_object_t*          m_driver_object;    //{ +0x0000    } | .m_driverObject
        _m01 const struct ndis::config_knob_namespace_t m_id;               //{ +0x0008    } | .m_id
        _m02 nt::list_entry_t                           m_global_linkage;   //{ +0x0020    } | .m_globalLinkage
        _m03 nt::list_entry_t                           m_collection_list;  //{ +0x0030    } | .m_collectionList
        _m04 class ndis::k_push_lock_t                  m_lock;             //{ +0x0040    } | .m_lock
                                                                          
        SDK_MAGIC_PROPERTIES( "KnobNamespace.$", 0x0, false, 0xa67f65d1db7022b );                  
        SDK_FIXED_SIZE( knob_namespace_t, 0x48 );                         
    };                                                                    
};
#include "magic/knob_namespace_t.end.hpp"
SDK_VERIFY( class ndis::knob_namespace_t, 0x48 );
