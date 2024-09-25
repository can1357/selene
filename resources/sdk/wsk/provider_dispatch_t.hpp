#pragma once
#include <sdkgen/support_library.hpp>

namespace ndis { struct sockaddr_t;     }
namespace nt   { struct addrinfoex_w_t; }
namespace nt   { struct guid_t;         }
namespace nt   { struct irp_t;          }
namespace nt   { struct kprocess_t;     }
namespace nt   { struct kthread_t;      }

#include "magic/provider_dispatch_t.start.hpp"
namespace wsk
{
    struct client_connection_dispatch_t;

    // [struct _WSK_PROVIDER_DISPATCH]
    // => WDK 10 (NV)
    //
    struct provider_dispatch_t                                  
    {                                                           
        using pfn_wsk_socket_t =            sdk::function<int32_t(void*, uint16_t, uint16_t, uint32_t, uint32_t, void*, const void*, struct nt::kprocess_t*, struct nt::kthread_t*, void*, struct nt::irp_t*)>*;                      
        using pfn_wsk_socket_connect_t =    sdk::function<int32_t(void*, uint16_t, uint32_t, struct ndis::sockaddr_t*, struct ndis::sockaddr_t*, uint32_t, void*, const struct wsk::client_connection_dispatch_t*, struct nt::kprocess_t*, struct nt::kthread_t*, void*, struct nt::irp_t*)>*;                      
        using pfn_wsk_control_client_t =    sdk::function<int32_t(void*, uint32_t, uint64_t, void*, uint64_t, void*, uint64_t*, struct nt::irp_t*)>*;                      
        using pfn_wsk_get_address_info_t =  sdk::function<int32_t(void*, nt::unicode_view*, nt::unicode_view*, uint32_t, struct nt::guid_t*, struct nt::addrinfoex_w_t*, struct nt::addrinfoex_w_t**, struct nt::kprocess_t*, struct nt::kthread_t*, struct nt::irp_t*)>*;                      
        using pfn_wsk_free_address_info_t = sdk::function<void(void*, struct nt::addrinfoex_w_t*)>*;                      
        using pfn_wsk_get_name_info_t =     sdk::function<int32_t(void*, struct ndis::sockaddr_t*, uint32_t, nt::unicode_view*, nt::unicode_view*, uint32_t, struct nt::kprocess_t*, struct nt::kthread_t*, struct nt::irp_t*)>*;                      
                                                                
        // WDK 10                                               
        //                                                      
        _m00 uint16_t                     version;                //{ +0x0000    } | .Version
        _m01 pfn_wsk_socket_t             wsk_socket;             //{ +0x0008    } | .WskSocket
        _m02 pfn_wsk_socket_connect_t     wsk_socket_connect;     //{ +0x0010    } | .WskSocketConnect
        _m03 pfn_wsk_control_client_t     wsk_control_client;     //{ +0x0018    } | .WskControlClient
        _m04 pfn_wsk_get_address_info_t   wsk_get_address_info;   //{ +0x0020    } | .WskGetAddressInfo
        _m05 pfn_wsk_free_address_info_t  wsk_free_address_info;  //{ +0x0028    } | .WskFreeAddressInfo
        _m06 pfn_wsk_get_name_info_t      wsk_get_name_info;      //{ +0x0030    } | .WskGetNameInfo
                                                                
        SDK_NONVOL_PROPERTIES( "_WSK_PROVIDER_DISPATCH.$", 0x0, false, 0xce0d08989c0aea83 );                      
        SDK_FIXED_SIZE( provider_dispatch_t, 0x38 );                      
    };                                                          
};
#include "magic/provider_dispatch_t.end.hpp"
SDK_VERIFY( struct wsk::provider_dispatch_t, 0x38 );
