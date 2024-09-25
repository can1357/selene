#pragma once
#include <sdkgen/support_library.hpp>
#include "../nt/interface_t.hpp"

namespace io { struct connect_interrupt_parameters_t;             }
namespace io { struct disconnect_interrupt_parameters_t;          }
namespace io { struct report_interrupt_active_state_parameters_t; }

#include "magic/dsf_interface_t.start.hpp"
namespace wdf
{
    // [struct _WDF_DSF_INTERFACE]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct dsf_interface_t                                                  
    {                                                                       
        using io_report_interrupt_active_t =     sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*;                             
        using io_report_interrupt_inactive_t =   sdk::function<void(struct io::report_interrupt_active_state_parameters_t*)>*;                             
        using pfn_io_connect_interrupt_ex_t =    sdk::function<int32_t(struct io::connect_interrupt_parameters_t*)>*;                             
        using pfn_io_disconnect_interrupt_ex_t = sdk::function<int32_t(struct io::disconnect_interrupt_parameters_t*)>*;                             
                                                                            
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                             
        //                                                                  
        _m00 struct nt::interface_t            interface;                     //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Interface
        _m01 io_report_interrupt_active_t      io_report_interrupt_active;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .IoReportInterruptActive
        _m02 io_report_interrupt_inactive_t    io_report_interrupt_inactive;  //{ +0x0028    +0x0028    +0x0028    +0x0028    } | .IoReportInterruptInactive
        _m03 pfn_io_connect_interrupt_ex_t     io_connect_interrupt_ex;       //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .IoConnectInterruptEx
        _m04 pfn_io_disconnect_interrupt_ex_t  io_disconnect_interrupt_ex;    //{ +0x0038    +0x0038    +0x0038    +0x0038    } | .IoDisconnectInterruptEx
                                                                            
        SDK_MAGIC_PROPERTIES( "_WDF_DSF_INTERFACE.$", 0x40, true, 0xc4bcff909cb8154a );                             
        SDK_FIXED_SIZE( dsf_interface_t, 0x40 );                             
    };                                                                      
};
#include "magic/dsf_interface_t.end.hpp"
SDK_VERIFY( struct wdf::dsf_interface_t, 0x40 );
