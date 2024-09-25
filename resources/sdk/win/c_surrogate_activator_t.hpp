#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/guid_t.hpp"

#include "magic/c_surrogate_activator_t.start.hpp"
namespace win
{
    // [class CSurrogateActivator]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_surrogate_activator_t                             
    {                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                               
        //                                                    
        _m00 struct nt::guid_t m_process_guid;                  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .m_processGuid
        _m01 int32_t           m_f_services_configured;         //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .m_fServicesConfigured
        _m02 uint32_t          m_dw_object_count_at_idle_time;  //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .m_dwObjectCountAtIdleTime
                                                              
        SDK_MAGIC_PROPERTIES( "CSurrogateActivator.$", 0x20, true, 0xdfda8e37ca098c6b );                               
        SDK_FIXED_SIZE( c_surrogate_activator_t, 0x20 );                               
    };                                                        
};
#include "magic/c_surrogate_activator_t.end.hpp"
SDK_VERIFY( class win::c_surrogate_activator_t, 0x20 );
