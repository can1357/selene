#pragma once
#include <sdkgen/support_library.hpp>
#include "flt_type_t.hpp"
#include "port_ccb_t.hpp"
#include "filter_ccb_t.hpp"
#include "volume_ccb_t.hpp"
#include "manager_ccb_t.hpp"
#include "instance_ccb_t.hpp"

#include "magic/flt_ccb_t.start.hpp"
namespace fltmgr
{
    // [struct _FLT_CCB]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct flt_ccb_t                                         
    {                                                        
        union u0_data_t                                      
        {                                                    
            // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2              
            //                                               
            _m01 struct fltmgr::manager_ccb_t  manager;        //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Manager
            _m02 struct fltmgr::filter_ccb_t   filter;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Filter
            _m03 struct fltmgr::instance_ccb_t instance;       //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Instance
            _m04 struct fltmgr::volume_ccb_t   volume;         //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Volume
            _m05 struct fltmgr::port_ccb_t     port;           //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Port
                                                             
            SDK_MAGIC_PROPERTIES( "_FLT_CCB.Data.$", 0x58, true, 0xe5e9f1b50b34889f );              
            SDK_FIXED_SIZE( u0_data_t, 0x58 );               
        };                                                   
                                                             
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                                   
        _m00 union fltmgr::flt_type_t                   type;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Type
        _m06 u0_data_t                                  data;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .Data
                                                             
        SDK_MAGIC_PROPERTIES( "_FLT_CCB.$", 0x60, true, 0x6c841608e1ec4de6 );     
        SDK_FIXED_SIZE( flt_ccb_t, 0x60 );                   
    };                                                       
};
#include "magic/flt_ccb_t.end.hpp"
SDK_VERIFY( union fltmgr::flt_ccb_t::u0_data_t, 0x58 );
SDK_VERIFY( struct fltmgr::flt_ccb_t, 0x60 );
