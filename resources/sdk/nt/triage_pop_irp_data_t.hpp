#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/triage_pop_irp_data_t.start.hpp"
namespace nt
{
    struct irp_t;
    struct device_object_t;

    // [struct _TRIAGE_POP_IRP_DATA]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct triage_pop_irp_data_t              
    {                                         
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2     
        //                                    
        _m00 nt::list_entry_t            link;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .Link
        _m01 struct nt::irp_t*           irp;   //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .Irp
        _m02 struct nt::device_object_t* pdo;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .Pdo
                                              
        SDK_MAGIC_PROPERTIES( "_TRIAGE_POP_IRP_DATA.$", 0x20, true, 0xb879475056195ac5 );     
        SDK_FIXED_SIZE( triage_pop_irp_data_t, 0x20 );     
    };                                        
};
#include "magic/triage_pop_irp_data_t.end.hpp"
SDK_VERIFY( struct nt::triage_pop_irp_data_t, 0x20 );
