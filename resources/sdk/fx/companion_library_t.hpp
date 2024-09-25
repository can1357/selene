#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/kevent_t.hpp"

namespace nt  { struct device_object_t;       }
namespace nt  { struct file_object_t;         }
namespace wdf { struct i_companion_library_t; }

#include "magic/companion_library_t.start.hpp"
namespace fx
{
    // [class FxCompanionLibrary]
    // => Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class companion_library_t                                                  
    {                                                                          
        // Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                                     
        _m00 struct nt::kevent_t                m_companion_library_sync_event;  //{ +0x0000    +0x0000    +0x0000    } | .m_CompanionLibrarySyncEvent
        _m01 uint32_t                           m_init_count;                    //{ +0x0018    +0x0018    +0x0018    } | .m_InitCount
        _m02 struct wdf::i_companion_library_t* m_rd_companion_library;          //{ +0x0020    +0x0020    +0x0020    } | .m_RdCompanionLibrary
        _m03 struct nt::device_object_t*        m_rd_non_pn_p_device;            //{ +0x0028    +0x0028    +0x0028    } | .m_RdNonPnPDevice
        _m04 struct nt::file_object_t*          m_rd_non_pn_p_file;              //{ +0x0030    +0x0030    +0x0030    } | .m_RdNonPnPFile
                                                                               
        SDK_MAGIC_PROPERTIES( "FxCompanionLibrary.$", 0x38, true, 0x217491f97082bc26 );                               
        SDK_FIXED_SIZE( companion_library_t, 0x38 );                               
    };                                                                         
};
#include "magic/companion_library_t.end.hpp"
SDK_VERIFY( class fx::companion_library_t, 0x38 );
