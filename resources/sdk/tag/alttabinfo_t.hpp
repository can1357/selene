#pragma once
#include <sdkgen/support_library.hpp>
#include "point_t.hpp"

#include "magic/alttabinfo_t.start.hpp"
namespace tag
{
    // [struct tagALTTABINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct alttabinfo_t                      
    {                                        
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2            
        //                                   
        _m00 uint32_t            cb_size;      //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .cbSize
        _m01 int32_t             c_items;      //{ +0x0004    +0x0004    +0x0004    +0x0004    } | .cItems
        _m02 int32_t             c_columns;    //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .cColumns
        _m03 int32_t             c_rows;       //{ +0x000c    +0x000c    +0x000c    +0x000c    } | .cRows
        _m04 int32_t             i_col_focus;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .iColFocus
        _m05 int32_t             i_row_focus;  //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .iRowFocus
        _m06 int32_t             cx_item;      //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .cxItem
        _m07 int32_t             cy_item;      //{ +0x001c    +0x001c    +0x001c    +0x001c    } | .cyItem
        _m08 struct tag::point_t pt_start;     //{ +0x0020    +0x0020    +0x0020    +0x0020    } | .ptStart
                                             
        SDK_MAGIC_PROPERTIES( "tagALTTABINFO.$", 0x28, true, 0x3ecb808fb502b866 );            
        SDK_FIXED_SIZE( alttabinfo_t, 0x28 );            
    };                                       
};
#include "magic/alttabinfo_t.end.hpp"
SDK_VERIFY( struct tag::alttabinfo_t, 0x28 );
