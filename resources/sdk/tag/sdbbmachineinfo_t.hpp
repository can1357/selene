#pragma once
#include <sdkgen/support_library.hpp>

#include "magic/sdbbmachineinfo_t.start.hpp"
namespace tag
{
    struct sdbdeviceinfo_t;

    // [struct tagSDBBMACHINEINFO]
    // => Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2
    //
    struct sdbbmachineinfo_t                        
    {                                               
        // Windows 10 v1607, Windows 10 v2004, Windows 11, Windows 10 v20H2          
        //                                          
        _m00 struct tag::sdbdeviceinfo_t* acpi_info;  //{ +0x0000    +0x0000    +0x0000    +0x0000    } | .AcpiInfo
        _m01 struct tag::sdbdeviceinfo_t* oem_info;   //{ +0x0008    +0x0008    +0x0008    +0x0008    } | .OemInfo
        _m02 struct tag::sdbdeviceinfo_t* bios_info;  //{ +0x0010    +0x0010    +0x0010    +0x0010    } | .BiosInfo
        _m03 struct tag::sdbdeviceinfo_t* cpu_info;   //{ +0x0018    +0x0018    +0x0018    +0x0018    } | .CpuInfo
                                                    
        SDK_MAGIC_PROPERTIES( "tagSDBBMACHINEINFO.$", 0x20, true, 0x9d2e5c5f44988aed );          
        SDK_FIXED_SIZE( sdbbmachineinfo_t, 0x20 );          
    };                                              
};
#include "magic/sdbbmachineinfo_t.end.hpp"
SDK_VERIFY( struct tag::sdbbmachineinfo_t, 0x20 );
