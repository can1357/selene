#pragma once
#include <sdkgen/support_library.hpp>
#include "offload_t.hpp"
#include "offload_encapsulation_t.hpp"
#include "tcp_connection_offload_t.hpp"
#include "tcp_connection_offload_parameters_t.hpp"

#include "magic/miniport_offload_t.start.hpp"
namespace ndis
{
    // [struct _NDIS_MINIPORT_OFFLOAD]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct miniport_offload_t                                                                                  
    {                                                                                                          
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                                                
        //                                                                                                     
        _m000 uint8_t                                          supports_offload;                                 //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .SupportsOffload
        _m001 uint8_t                                          supports_top_offload;                             //{ +0x0001    +0x0001    +0x0001    +0x0001    } | .SupportsTopOffload
        _m002 uint8_t                                          supports_tcp_connection_offload;                  //{ +0x0002    +0x0002    +0x0002    +0x0002    } | .SupportsTcpConnectionOffload
        _m003 uint8_t                                          supports_top_tcp_connection_offload;              //{ +0x0003    +0x0003    +0x0003    +0x0003    } | .SupportsTopTcpConnectionOffload
        _m004 uint8_t                                          top_connection_offload_paused;                    //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .TopConnectionOffloadPaused
        _m005 uint8_t                                          rsc_disallowed;                                   //{ +0x0005    +0x0005    +0x0005    +0x0005    } | .RSCDisallowed
        _m006 struct ndis::offload_t                           miniport_current_config;                          //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .MiniportCurrentConfig
        _m007 struct ndis::offload_t                           top_capabilities;                                 //{ +0x00bc    +0x00e0    +0x00e0    +0x00e0    } | .TopCapabilities
        _m008 struct ndis::offload_t                           miniport_initial_config;                          //{ +0x0170    +0x01b8    +0x01b8    +0x01b8    } | .MiniportInitialConfig
        _m009 struct ndis::offload_t                           miniport_hardware_capabilities;                   //{ +0x0224    +0x0290    +0x0290    +0x0290    } | .MiniportHardwareCapabilities
        _m010 struct ndis::offload_encapsulation_t             miniport_set_encapsulation;                       //{ +0x02d8    +0x0368    +0x0368    +0x0368    } | .MiniportSetEncapsulation
        _m011 struct ndis::offload_encapsulation_t             top_set_encapsulation;                            //{ +0x02f4    +0x0384    +0x0384    +0x0384    } | .TopSetEncapsulation
        _m012 struct ndis::offload_encapsulation_t             top_merged_encapsulation;                         //{ +0x0310    +0x03a0    +0x03a0    +0x03a0    } | .TopMergedEncapsulation
        _m013 struct ndis::offload_encapsulation_t             miniport_merged_encapsulation;                    //{ +0x032c    +0x03bc    +0x03bc    +0x03bc    } | .MiniportMergedEncapsulation
        _m014 struct ndis::tcp_connection_offload_t            top_tcp_connection_offload_capabilities;          //{ +0x0348    +0x03d8    +0x03d8    +0x03d8    } | .TopTcpConnectionOffloadCapabilities
        _m015 struct ndis::tcp_connection_offload_t            miniport_tcp_connection_offload_current_config;   //{ +0x035c    +0x03ec    +0x03ec    +0x03ec    } | .MiniportTcpConnectionOffloadCurrentConfig
        _m016 struct ndis::tcp_connection_offload_t            miniport_hw_tcp_connection_offload_capabilities;  //{ +0x0370    +0x0400    +0x0400    +0x0400    } | .MiniportHwTcpConnectionOffloadCapabilities
        _m017 struct ndis::tcp_connection_offload_parameters_t top_tcp_connection_parameters;                    //{ +0x0384    +0x0414    +0x0414    +0x0414    } | .TopTcpConnectionParameters
        _m018 struct ndis::tcp_connection_offload_parameters_t miniport_tcp_connection_parameters;               //{ +0x03c0    +0x0450    +0x0450    +0x0450    } | .MiniportTcpConnectionParameters
        _m019 sdk::array<uint8_t, 144>                         miniport_task;                                    //{ +0x03fc    +0x048c    +0x048c    +0x048c    } | .MiniportTask
        _m020 uint32_t                                         miniport_task_size;                               //{ +0x048c    +0x051c    +0x051c    +0x051c    } | .MiniportTaskSize
        _m021 uint8_t                                          ndis5_xsum;                                       //{ +0x0490    +0x0520    +0x0520    +0x0520    } | .Ndis5Xsum
        _m022 uint8_t                                          ndis5lso;                                         //{ +0x0491    +0x0521    +0x0521    +0x0521    } | .Ndis5LSO
        _m023 uint8_t                                          ndis5i_psec;                                      //{ +0x0492    +0x0522    +0x0522    +0x0522    } | .Ndis5IPsec
        _m024 void*                                            miniport_request_buffer;                          //{ +0x0498    +0x0528    +0x0528    +0x0528    } | .MiniportRequestBuffer
        _m025 uint32_t                                         miniport_request_oid;                             //{ +0x04a0    +0x0530    +0x0530    +0x0530    } | .MiniportRequestOid
        _m026 uint32_t                                         miniport_request_buffer_length;                   //{ +0x04a4    +0x0534    +0x0534    +0x0534    } | .MiniportRequestBufferLength
                                                                                                               
        SDK_MAGIC_PROPERTIES( "_NDIS_MINIPORT_OFFLOAD.$", 0x538, true, 0xa5d30e48bdabba9d );                                                
        SDK_DYNAMIC_SIZE( miniport_offload_t );                                                                
    };                                                                                                         
};
#include "magic/miniport_offload_t.end.hpp"
