#pragma once
#include <sdkgen/support_library.hpp>
#include "express_dpc_caps_register_t.hpp"
#include "express_dpc_error_source_id_t.hpp"
#include "express_dpc_status_register_t.hpp"
#include "express_dpc_control_register_t.hpp"
#include "express_dpc_rp_pio_mask_register_t.hpp"
#include "express_dpc_rp_pio_status_register_t.hpp"
#include "express_dpc_rp_pio_syserr_register_t.hpp"
#include "express_enhanced_capability_header_t.hpp"
#include "express_dpc_rp_pio_severity_register_t.hpp"
#include "express_dpc_rp_pio_exception_register_t.hpp"
#include "express_dpc_rp_pio_headerlog_register_t.hpp"
#include "express_dpc_rp_pio_impspeclog_register_t.hpp"
#include "express_dpc_rp_pio_tlpprefixlog_register_t.hpp"

#include "magic/express_dpc_capability_t.start.hpp"
namespace pci
{
    // [struct _PCI_EXPRESS_DPC_CAPABILITY]
    // => WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2 (NV)
    //
    struct express_dpc_capability_t                                               
    {                                                                             
        using dpc_err_src_id_t =      sdk::variant<uint16_t, union pci::express_dpc_error_source_id_t>;                    
        using rp_pio_severity_t =     union pci::express_dpc_rp_pio_severity_register_t;                    
        using rp_pio_exception_t =    union pci::express_dpc_rp_pio_exception_register_t;                    
        using rp_pio_header_log_t =   struct pci::express_dpc_rp_pio_headerlog_register_t;                    
        using rp_pio_imp_spec_log_t = union pci::express_dpc_rp_pio_impspeclog_register_t;                    
        using rp_pio_prefix_log_t =   struct pci::express_dpc_rp_pio_tlpprefixlog_register_t;                    
                                                                                  
        // WDK 10, Windows 10 v2004, Windows 11, Windows 10 v20H2                    
        //                                                                        
        _m00 struct pci::express_enhanced_capability_header_t header;               //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Header
        _m01 union pci::express_dpc_caps_register_t           dpc_capabilities;     //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .DpcCapabilities
        _m02 union pci::express_dpc_control_register_t        dpc_control;          //{ +0x0006    +0x0006    +0x0006    +0x0006    } | .DpcControl
        _m03 union pci::express_dpc_status_register_t         dpc_status;           //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .DpcStatus
        _m04 dpc_err_src_id_t                                 dpc_err_src_id;       //{ +0x000a    +0x000a    +0x000a    +0x000a    } | .DpcErrSrcId
        _m05 union pci::express_dpc_rp_pio_status_register_t  rp_pio_status;        //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .RpPioStatus
        _m06 union pci::express_dpc_rp_pio_mask_register_t    rp_pio_mask;          //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .RpPioMask
        _m07 rp_pio_severity_t                                rp_pio_severity;      //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .RpPioSeverity
        _m08 union pci::express_dpc_rp_pio_syserr_register_t  rp_pio_sys_error;     //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .RpPioSysError
        _m09 rp_pio_exception_t                               rp_pio_exception;     //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .RpPioException
        _m10 rp_pio_header_log_t                              rp_pio_header_log;    //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .RpPioHeaderLog
        _m11 rp_pio_imp_spec_log_t                            rp_pio_imp_spec_log;  //{ +0x0030    +0x0030    +0x0030    +0x0030    } | .RpPioImpSpecLog
        _m12 rp_pio_prefix_log_t                              rp_pio_prefix_log;    //{ +0x0034    +0x0034    +0x0034    +0x0034    } | .RpPioPrefixLog
                                                                                  
        SDK_NONVOL_PROPERTIES( "_PCI_EXPRESS_DPC_CAPABILITY.$", 0x44, true, 0xba2d55830981a616 );                    
        SDK_FIXED_SIZE( express_dpc_capability_t, 0x44 );                         
    };                                                                            
};
#include "magic/express_dpc_capability_t.end.hpp"
SDK_VERIFY( struct pci::express_dpc_capability_t, 0x44 );
