#pragma once
#include <sdkgen/support_library.hpp>

namespace nt  { struct guid_t;       }
namespace tag { struct ipid_entry_t; }

#include "magic/c_winrt_async_client_call_channel_t.start.hpp"
namespace win
{
    class oxid_entry_t;

    // [class CWinrtAsyncClientCallChannel]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    class c_winrt_async_client_call_channel_t                                 
    {                                                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                 
        //                                                                    
        _m00 const bool                      is_inproc;                         //{ +0x0008    +0x0008    +0x0008    +0x0008    } | ._isInproc
        _m01 const uint16_t                  proc_num;                          //{ +0x000a    +0x000a    +0x000a    +0x000a    } | ._procNum
        _m02 class win::oxid_entry_t const*  p_oxid_entry;                      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | ._pOxidEntry
        _m03 const struct nt::guid_t&        iid;                               //{ +0x0020    +0x0020    +0x0020    +0x0020    } | ._iid
        _m04 const uint32_t                  dw_transport_call_creation_state;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | ._dwTransportCallCreationState
        _m05 struct tag::ipid_entry_t const* p_ipid_entry;                      //{ +0x0030    +0x0030    +0x0030    +0x0030    } | ._pIpidEntry
                                                                              
        SDK_MAGIC_PROPERTIES( "CWinrtAsyncClientCallChannel.$", 0x38, true, 0xff406dddc98b6d0c );                                 
        SDK_FIXED_SIZE( c_winrt_async_client_call_channel_t, 0x38 );                                 
    };                                                                        
};
#include "magic/c_winrt_async_client_call_channel_t.end.hpp"
SDK_VERIFY( class win::c_winrt_async_client_call_channel_t, 0x38 );
