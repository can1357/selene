#pragma once
#include <sdkgen/support_library.hpp>
#include "mode_parameter_block_t.hpp"
#include "mode_parameter_header_t.hpp"

#include "magic/mode_parm_read_write_t.start.hpp"
namespace nt
{
    // [struct _MODE_PARM_READ_WRITE]
    // => WDK 10 (NV)
    //
    struct mode_parm_read_write_t                                     
    {                                                                 
        // WDK 10                                                     
        //                                                            
        _m00 struct nt::mode_parameter_header_t parameter_list_header;  //{ +0x0000    } | .ParameterListHeader
        _m01 struct nt::mode_parameter_block_t  parameter_list_block;   //{ +0x0004    } | .ParameterListBlock
                                                                      
        SDK_NONVOL_PROPERTIES( "_MODE_PARM_READ_WRITE.$", 0x0, false, 0x632bacd319fe7ec7 );                      
        SDK_FIXED_SIZE( mode_parm_read_write_t, 0xc );                      
    };                                                                
};
#include "magic/mode_parm_read_write_t.end.hpp"
SDK_VERIFY( struct nt::mode_parm_read_write_t, 0xc );
