#pragma once
#include <sdkgen/support_library.hpp>
#include "xlat_side_t.hpp"

#include "magic/full_ptr_xlat_tables_t.start.hpp"
namespace win
{
    // [struct _FULL_PTR_XLAT_TABLES]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct full_ptr_xlat_tables_t                    
    {                                                
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2                  
        //                                           
        _m00 void*                 ref_id_to_pointer;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .RefIdToPointer
        _m01 void*                 pointer_to_ref_id;  //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .PointerToRefId
        _m02 uint32_t              next_ref_id;        //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .NextRefId
        _m03 enum win::xlat_side_t xlat_side;          //{ +0x0014    +0x0014    +0x0014    +0x0014    } | .XlatSide
                                                     
        SDK_MAGIC_PROPERTIES( "_FULL_PTR_XLAT_TABLES.$", 0x18, true, 0x203382a3472ef69 );                  
        SDK_FIXED_SIZE( full_ptr_xlat_tables_t, 0x18 );                  
    };                                               
};
#include "magic/full_ptr_xlat_tables_t.end.hpp"
SDK_VERIFY( struct win::full_ptr_xlat_tables_t, 0x18 );
