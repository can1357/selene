#pragma once
#include <sdkgen/support_library.hpp>
#include "fltpp_lookaside_list_t.hpp"

#include "magic/flt_prcb_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_PRCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_prcb_t                                                   
    {                                                                   
        using pp_irp_ctrl_lookaside_lists_t = sdk::array<struct fltmgr::fltpp_lookaside_list_t, 2>;                            
                                                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                            
        //                                                              
        _m00 pp_irp_ctrl_lookaside_lists_t  pp_irp_ctrl_lookaside_lists;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .PPIrpCtrlLookasideLists
                                                                        
        SDK_MAGIC_PROPERTIES( "_FLT_PRCB.$", 0x40, true, 0x4fcb93819679b396 );                            
        SDK_FIXED_SIZE( flt_prcb_t, 0x40 );                             
    };                                                                  
};
#include "magic/flt_prcb_t.end.hpp"
SDK_VERIFY( struct fltmgr::flt_prcb_t, 0x40 );
