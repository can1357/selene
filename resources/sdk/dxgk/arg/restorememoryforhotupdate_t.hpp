#pragma once
#include <sdkgen/support_library.hpp>
#include "../restorememoryforhotupdateflags_t.hpp"

namespace nt { struct mdl_t; }

#include "magic/restorememoryforhotupdate_t.start.hpp"
namespace dxgk::arg
{
    // [struct _DXGKARG_RESTOREMEMORYFORHOTUPDATE]
    // => WDK 10 (NV)
    //
    struct restorememoryforhotupdate_t                                    
    {                                                                     
        // WDK 10                                                         
        //                                                                
        _m00 struct dxgk::restorememoryforhotupdateflags_t flags;           //{ +0x0000    } | .Flags
        _m01 struct nt::mdl_t*                             p_data_mdl;      //{ +0x0008    } | .pDataMdl
        _m02 uint32_t                                      meta_data_size;  //{ +0x0010    } | .MetaDataSize
        _m03 void*                                         p_meta_data;     //{ +0x0018    } | .pMetaData
                                                                          
        SDK_NONVOL_PROPERTIES( "_DXGKARG_RESTOREMEMORYFORHOTUPDATE.$", 0x0, false, 0x90658dc684fc9467 );               
        SDK_FIXED_SIZE( restorememoryforhotupdate_t, 0x20 );               
    };                                                                    
};
#include "magic/restorememoryforhotupdate_t.end.hpp"
SDK_VERIFY( struct dxgk::arg::restorememoryforhotupdate_t, 0x20 );
